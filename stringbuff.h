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
 *
 * Abstract: Providing String buffering capabilities.
 */

#pragma once

#include "ustring.h"

typedef struct UCharLink
{
    UChar character;
    struct UCharLink* next;
} UCharLink;

typedef struct StringBuffer {
    UCharLink* first;
    UCharLink* last;
    unsigned int length;
} StringBuffer;

/** @brief Create a StringBuffer.
 *
 * @return New StringBuffer.
 */
StringBuffer str_buffer();

/** @brief Add a Unicode Character to the buffer.
 *
 * @param sbuffer The buffer to add character to.
 * @param character Unicode Character to add to buffer.
 */
void str_buffer_add_uchar(StringBuffer* sbuffer, UChar character);

/** @brief Add an array of Unicode Characters to the buffer.
 *
 * @param sbuffer The buffer to add characters to.
 * @param characters Unicode Characters to add to buffer.
 * @param length Length of Unicode Characters to add to buffer.
 */
void str_buffer_add_uchar_array(StringBuffer* sbuffer, UChar* characters, unsigned int length);

/** @brief Add an ANSI Character (char*) to the buffer.
 *
 * @param sbuffer The buffer to add character to.
 * @param character ANSI Character to add to buffer.
 */
void str_buffer_add_char(StringBuffer* sbuffer, char character);

/** @brief Add UTF-8 characters to the buffer.
 *
 * In case that last few bytes of the UTF-8 buffer are incorrect they will be left inside of buffer
 * which can be later merged with the rest of the characters and passed back in.
 *
 * @param sbuffer The buffer to add characters to.
 * @param buffer A buffer of UTF-8 characters to add to the buffer.
 */
void str_buffer_add_utf8(StringBuffer* sbuffer, char** buffer);

/** @brief Add ANSI Characters (char*) to the buffer.
 *
 * @param sbuffer The buffer to add characters to.
 * @param buffer A buffer of ANSI Characters to add to the buffer.
 */
void str_buffer_add(StringBuffer* sbuffer, char* buffer);

/** @brief Compile/Convert the StringBuffer to String.
 *
 * @param buffer The buffer to which should be converted.
 * @return Returns a new String compiled from the StringBuffer.
 */
String str_buffer_to_string(StringBuffer buffer);

/** @brief Free/Deallocate the buffer from heap.
 *
 * @param sbuffer The buffer to Free/Deallocate.
 */
void str_buffer_free(StringBuffer buffer);