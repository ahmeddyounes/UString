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
 * Abstract: Providing Unicode Character operations.
 */

#pragma once

#include "ustring.h"
#include <stdbool.h>

typedef enum UnicodeCategory
{
    LL,
    LU,
    LT,
    LM,
    LO,
    MN,
    MC,
    ME,
    ND,
    NL,
    NO,
    PC,
    PD,
    PS,
    PE,
    PI,
    PF,
    PO,
    SM,
    SC,
    SK,
    SO,
    ZS,
    ZL,
    ZP,
    CC,
    CF,
    CS,
    CO
} UnicodeCategory;

/** @brief Check if UChar belongs to Unicode Category.
 *
 * @param character Unicode Character to check if belongs to category.
 * @param category Unicode Category of interest.
 * @return True if UChar belongs to UnicodeCategory.
 */
bool uchar_is_category(UChar character, UnicodeCategory category);

/** @brief Check if UChar is a whitespace.
 *
 * @param character Unicode Character to check if is a whitespace.
 * @return True if UChar is a whitespace.
 */
bool uchar_is_whitespace(UChar character);

/** @brief Check if UChar is new line.
 *
 * @param character Unicode Character to check if is a new line.
 * @return True if UChar is a new line.
 */
bool uchar_is_newline(UChar character);

/** @brief Check if UChar is a letter.
 *
 * @param character Unicode Character to check if is a letter.
 * @return True if UChar is a letter.
 */
bool uchar_is_letter(UChar character);

/** @brief Check if UChar is a decimal.
 *
 * @param character Unicode Character to check if is a decimal.
 * @return True if UChar is a decimal.
 */
bool uchar_is_decimal(UChar character);