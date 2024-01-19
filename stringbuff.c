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

#include <malloc.h>
#include "stringbuff.h"

#define IS_UTF8_FIRST(var) !(var & (1 << 7))
#define IS_UTF8_SECOND(var) (var & (6 << 5))
#define IS_UTF8_THIRD(var) (var & (14 << 4))

UChar str_next_char_to_uchar(const unsigned char* buffer, unsigned int* length)
{
    UChar ch = 0;
    unsigned char fb = *buffer;
    if(fb == '\0')
    {
        *length = 0;
        return ch;
    }
    if(IS_UTF8_FIRST(fb))
    {
        ch = fb;
        *length = 1;
    }else if(IS_UTF8_SECOND(fb))
    {
        if(buffer[1] == '\0')
        {
            *length = 0;
            return ch;
        }
        fb = fb ^ (6 << 5);
        unsigned char sb = buffer[1] ^ (2 << 6);
        ch = fb << 6;
        ch |= sb;
        *length = 2;
    }else if(IS_UTF8_THIRD(fb))
    {
        if(buffer[1] == '\0' || buffer[2] == '\0')
        {
            *length = 0;
            return ch;
        }
        fb = fb ^ (14 << 4);
        unsigned char sb = buffer[1] ^ (2 << 6);
        unsigned char tb = buffer[2] ^ (2 << 6);
        ch = fb << 12;
        ch |= sb << 6;
        ch |= tb;
        *length = 3;
    }else{
        if(buffer[1] == '\0' || buffer[2] == '\0' || buffer[3] == '\0')
        {
            *length = 0;
            return ch;
        }
        fb = fb ^ (30 << 3);
        unsigned char sb = buffer[1] ^ (2 << 6);
        unsigned char tb = buffer[2] ^ (2 << 6);
        unsigned char fob = buffer[3] ^ (2 << 6);
        ch = fb << 18;
        ch |= sb << 12;
        ch |= tb << 6;
        ch |= fob;
        *length = 4;
    }
    return ch;
}

StringBuffer str_buffer()
{
    StringBuffer b = {0, 0, 0};
    return b;
}

void str_buffer_add_uchar(StringBuffer* sbuffer, UChar character)
{
    UCharLink* link = (UCharLink*) malloc(sizeof(UCharLink));
    link->character = character;
    link->next = 0;
    if (!sbuffer->first)
    {
        sbuffer->first = link;
        sbuffer->last = link;
    }else{
        sbuffer->last->next = link;
        sbuffer->last = link;
    }
    sbuffer->length++;
}

void str_buffer_add_uchar_array(StringBuffer *sbuffer, UChar *characters, unsigned int length)
{
    for(unsigned int i = 0; i < length; i++)
    {
        str_buffer_add_uchar(sbuffer, characters[i]);
    }
}

void str_buffer_add_char(StringBuffer* sbuffer, char character)
{
    UChar c = (unsigned char)character;
    str_buffer_add_uchar(sbuffer, c);
}

void str_buffer_add_utf8(StringBuffer* sbuffer, char** buffer)
{
    while(**buffer != '\0')
    {
        unsigned int length;
        UChar ch = str_next_char_to_uchar((unsigned char*) *buffer, &length);
        if(length <= 0)
        {
            break;
        }
        str_buffer_add_uchar(sbuffer, ch);
        *buffer = *buffer + 1;
    }
}

void str_buffer_add(StringBuffer* sbuffer, char* buffer)
{
    while(*buffer != '\0')
    {
        str_buffer_add_char(sbuffer, *buffer);
        buffer = buffer + 1;
    }
}

String str_buffer_to_string(StringBuffer buffer)
{
    String string = {0, 0};
    if (!buffer.first)
    {
        return string;
    }
    unsigned int size = buffer.length;

    UChar* cs = (UChar*) malloc(size * sizeof(UChar));
    UChar* ch = cs;

    UCharLink* link = buffer.first;
    UCharLink* prevLink;

    while (link)
    {
        *ch = link->character;
        ch = ch+1;

        prevLink = link;
        link = link->next;

        free(prevLink);
    }
    string.buffer = cs;
    string.length = size;
    return string;
}

void str_buffer_free(StringBuffer buffer)
{
    if (buffer.first)
    {
        UCharLink* chain = buffer.first;
        UCharLink* prevChain;
        while(chain)
        {
            prevChain = chain;
            chain = chain->next;
            free(prevChain);
        }
    }
}