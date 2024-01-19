/*
 * Copyright (c) 2024, Ahmed D. Younes
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the “Software”), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies
 * or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
 * TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "ustring.h"
#include "stringbuff.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct StringChain
{
    String string;
    struct StringChain* next;
} StringChain;

String str_new(char* buffer) {
    String s;
    s.length = strlen(buffer);
    s.buffer = malloc(s.length * sizeof(UChar));

    for(unsigned int i = 0; i < s.length; i++)
    {
        s.buffer[i] = (unsigned char) buffer[i];
    }
    return s;
}

void str_free(String string) {
    if(string.buffer)
    {
        free(string.buffer);
    }
}

UChar str_uchar(String str, unsigned int pos) {
    if(pos >= str.length)
    {
        return 0;
    }
    return str.buffer[pos];
}

String str_cat(String first, String second) {
    String output;
    output.length = first.length + second.length;
    output.buffer = (UChar*) malloc(output.length * sizeof(UChar));

    // Copy memory from first.buffer to 0th position of output.buffer
    memcpy(output.buffer, first.buffer, first.length * sizeof(UChar));
    // Copy memory from second.buffer to (first.length)th position of output.buffer
    memcpy(&output.buffer[first.length], second.buffer, second.length * sizeof(UChar));

    return output;
}

String str_substring(String string, unsigned int pos, unsigned int length) {
    if(length == 0)
    {
        // If length is 0 we take the full length remaining after pos
        length = string.length - pos;
    }
    String output;
    output.length = length;
    output.buffer = (UChar*) malloc(length * sizeof(UChar));

    // Copy memory from position pos of string.buffer to output.buffer
    memcpy(output.buffer, &string.buffer[pos], length * sizeof(UChar));

    return output;
}

bool str_equal(String first, String second) {
    if(first.length != second.length)
    {
        // if lengths are not equal return false
        return false;
    }
    return memcmp(first.buffer, second.buffer, first.length * sizeof(UChar)) == 0;
}

int str_cmp(String first, String second) {
    unsigned int length;
    if(first.length > second.length)
    {
        length = second.length;
    }else{
        length = first.length;
    }
    return memcmp(first.buffer, second.buffer, length * sizeof(UChar));
}

String str_tolower(String input) {
    String s = {input.length, 0};
    s.buffer = (UChar*) malloc(s.length * sizeof(UChar));
    for(unsigned int i = 0; i < s.length; i++)
    {
        if(uchar_in_range(input.buffer[i], 'A', 'Z'))
        {
            s.buffer[i] = tolower((int) input.buffer[i]);
        }else{
            s.buffer[i] = input.buffer[i];
        }
    }
    return s;
}

String str_toupper(String input) {
    String s = {input.length, 0};
    s.buffer = (UChar*) malloc(s.length * sizeof(UChar));
    for(unsigned int i = 0; i < s.length; i++)
    {
        if(uchar_in_range(input.buffer[i], 'a', 'z'))
        {
            s.buffer[i] = toupper((int) input.buffer[i]);
        }else{
            s.buffer[i] = input.buffer[i];
        }
    }
    return s;
}

bool uchar_in_range(UChar uch, UChar first, UChar second) {
    if(first < second)
    {
        return uch >= first && uch <= second;
    }
    return uch >= second && uch <= first;
}

bool str_equal_uchars(String first, unsigned int fpos, String second, unsigned int spos)
{
    return str_cmp_uchars(first, fpos, second, spos) == 0;
}

int str_cmp_uchars(String first, unsigned int fpos, String second, unsigned int spos)
{
    if(fpos >= first.length || spos >= second.length || fpos >= second.length || spos >= first.length)
    {
        return false;
    }
    unsigned int length;
    if(first.length - fpos > second.length - spos)
    {
        length = second.length - spos;
    }else{
        length = first.length - fpos;
    }
    return memcmp(&first.buffer[fpos], &second.buffer[spos], length * sizeof(UChar));
}

String str_new_uchars(UChar *buffer, unsigned int length) {
    String string = {length, buffer};
    return string;
}

String str_new_uchar(UChar character) {
    UChar* ch = (UChar*) malloc(sizeof(UChar));
    *ch = character;
    String string = {1, ch};
    return string;
}

bool str_equal_chars(String first, char *second) {
    // We currently create temporary string to hold the char* for comparison
    String str = str_new(second);
    bool eq = str_equal(first, str);
    str_free(str);
    return eq;
}

char *str_to_chars(String string) {
    char* result = malloc(sizeof(char) * (string.length+1));
    for(unsigned int i = 0; i < string.length; i++)
    {
        result[i] = (char)string.buffer[i];
    }
    result[string.length] = '\0';
    return result;
}

StringList str_split(String string, String separator) {
    StringList result;
    if(separator.length == 0)
    {
        result.values = 0;
        result.length = 0;
        return result;
    }
    StringChain* first = 0;
    StringChain* chain = 0;
    unsigned int lastOffset = 0;
    unsigned int length = 1;
    UChar firstChar = str_uchar(separator, 0);

    // We are using a simple algorithm to check for occurrences of strings.
    // Maybe change to a more sophisticated version..
    for(unsigned int i = 0; i < string.length; i++)
    {
        UChar currentChar = str_uchar(string, i);
        if(currentChar == firstChar)
        {
            unsigned int j = 1;
            for(; j < separator.length; j++)
            {
                if(str_uchar(string, i+j) != str_uchar(separator, j))
                {
                    break;
                }
            }
            if(j >= separator.length)
            {
                if(!first)
                {
                    first = malloc(sizeof(StringChain));
                    first->next = 0;
                    chain = first;
                }else{
                    StringChain* tmpChain = malloc(sizeof(StringChain));
                    tmpChain->next = 0;
                    chain->next = tmpChain;
                    chain = tmpChain;
                }
                chain->string = str_substring(string, lastOffset, i - lastOffset);
                lastOffset = i+j;
                length++;
            }
        }
    }
    if(!first)
    {
        first = malloc(sizeof(StringChain));
        chain = first;
    }else{
        StringChain* tmpChain = malloc(sizeof(StringChain));
        tmpChain->next = 0;
        chain->next = tmpChain;
        chain = tmpChain;
    }
    chain->string = str_substring(string, lastOffset, string.length - lastOffset);

    result.length = length;
    result.values = malloc(sizeof(String) * (length));
    String* currentMemoryAddress = result.values;
    chain = first;
    while(chain)
    {
        memcpy(currentMemoryAddress, &chain->string, sizeof(String));
        currentMemoryAddress++;
        chain = chain->next;
    }
    return result;
}

void str_list_free(StringList list) {
    free(list.values);
}

String str_join(StringList list, String glue) {
    String result;
    // Add the glue's length multiplied by the number of Strings in the list
    result.length = (list.length-1) * glue.length;
    // Add the individual String lengths in the list to the result's length
    for(unsigned int i = 0; i < list.length; i++)
    {
        result.length += list.values[i].length;
    }
    result.buffer = malloc(sizeof(UChar) * result.length);
    UChar* currentMemoryAddress = result.buffer;
    unsigned int i;
    for(i = 0; i < list.length - 1; i++)
    {
        String currentString = list.values[i];
        // Copy current String's buffer into result's memory
        memcpy(currentMemoryAddress, currentString.buffer, sizeof(UChar) * currentString.length);
        currentMemoryAddress += currentString.length;
        // Copy glue's buffer into result's memory
        memcpy(currentMemoryAddress, glue.buffer, sizeof(UChar) * glue.length);
        currentMemoryAddress += glue.length;
    }
    // The last one is not going to be glued at the end of it.
    memcpy(currentMemoryAddress, list.values[i].buffer, sizeof(UChar) * list.values[i].length);
    return result;
}

String str_repeat(String string, unsigned int times) {
    String result;
    if(times == 0)
    {
        result.length = 0;
        result.buffer = 0;
        return result;
    }
    result.length = string.length * times;
    result.buffer = malloc(sizeof(UChar) * result.length);
    UChar* currentMemoryAddress = result.buffer;
    for(unsigned int i = 1; i <= times; i++)
    {
        memcpy(currentMemoryAddress, string.buffer, sizeof(UChar) * string.length);
        currentMemoryAddress += string.length;
    }
    return result;
}

unsigned int str_to_uint(String string) {
    unsigned int result = 0;

    for(unsigned int i = 0; i < string.length; i++)
    {
        unsigned short value = 0;
        switch(str_uchar(string, i))
        {
            case '0':
                value = 0;
                break;
            case '1':
                value = 1;
                break;
            case '2':
                value = 2;
                break;
            case '3':
                value = 3;
                break;
            case '4':
                value = 4;
                break;
            case '5':
                value = 5;
                break;
            case '6':
                value = 6;
                break;
            case '7':
                value = 7;
                break;
            case '8':
                value = 8;
                break;
            case '9':
                value = 9;
                break;
            default:
                return 0;
        }
        // We do our own power right now to avoid linking math.h
        unsigned int tenthPower = 1;
        for(unsigned int j = 1; j <= (string.length - i - 1); j++)
        {
            tenthPower *= 10;
        }
        result += value * (tenthPower);
    }
    return result;
}

int str_pos(String haystack, String needle, int offset) {
    UChar firstMatch = str_uchar(needle, 0);
    int nextOccurrenceOffset = 0;
    for(int i = offset; i < haystack.length; i++)
    {
        if(haystack.buffer[i] == firstMatch)
        {
            bool found = true;
            for(int j = 1; j < needle.length; j++)
            {
                if(nextOccurrenceOffset == 0 && haystack.buffer[i+j] == firstMatch)
                {
                    nextOccurrenceOffset = j;
                }
                if(needle.buffer[j] != haystack.buffer[i+j])
                {
                    found = false;
                    break;
                }
            }
            if(found)
            {
                return i;
            }
            i += nextOccurrenceOffset;
            nextOccurrenceOffset = 0;
        }
    }
    return -1;
}

String str_replace(String haystack, String first, String second, int offset) {
    StringBuffer buffer = str_buffer();
    int pos;
    while((pos = str_pos(haystack, first, offset)) >= 0)
    {
        if(pos-offset > 0)
        {
            str_buffer_add_uchar_array(&buffer, &haystack.buffer[offset], pos-offset);
        }
        str_buffer_add_uchar_array(&buffer, second.buffer, second.length);
        offset = pos + (int)first.length;
    }
    if(offset < haystack.length)
    {
        str_buffer_add_uchar_array(&buffer, &haystack.buffer[offset], haystack.length - offset);
    }
    return str_buffer_to_string(buffer);
}
