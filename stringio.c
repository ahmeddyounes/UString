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

#include "stringio.h"
#include "stringbuff.h"
#include <wchar.h>
#include <stdio.h>
#include <locale.h>

void str_print(String input)
{
    for(unsigned int i = 0; i < input.length; i++)
    {
        uchar_print(input.buffer[i]);
    }
}

void uchar_print(UChar character)
{
    setlocale(LC_CTYPE, "");
    wprintf(L"%lc", character);
}

String str_utf8_file(FILE *file) {
    fseek(file, 0, SEEK_END);
    fseek(file, 0, SEEK_SET);
    char cbuffer[10];
    char buff[20];
    char* bf = 0;
    buff[0] = '\0';
    StringBuffer buffer = str_buffer();
    while(fgets((char *) cbuffer, 10, file))
    {
        if(bf && *bf != '\0')
        {
            char* address = &buff[0];
            while(*bf != '\0')
            {
                *address = *bf;
                address++;
                bf++;
            }
            char* baddress = &cbuffer[0];
            while(*baddress != '\0')
            {
                *address = *baddress;
                address++;
                baddress++;
            }
            *address = '\0';
        }else{
            for(unsigned int i = 0; i < 10; i++)
            {
                if(cbuffer[i] == '\0')
                {
                    buff[i] = '\0';
                    break;
                }else{
                    buff[i] = cbuffer[i];
                }
            }
        }
        bf = &buff[0];
        str_buffer_add_utf8(&buffer, &bf);
    }
    fclose(file);
    return str_buffer_to_string(buffer);
}
