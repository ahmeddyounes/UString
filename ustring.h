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
 * Abstract: The main file to handle and create new unicode strings.
 */

#pragma once

#include <crtdefs.h>
#include <stdbool.h>
#include <stdint.h>
#include <uchar.h>

typedef char32_t UChar;

typedef struct String {
    unsigned int length;
    UChar* buffer;
} String;

typedef struct StringList {
    unsigned int length;
    String* values;
} StringList;

/** @brief Create a new String from char* buffer.
 *
 * @param buffer the value of the String.
 * @return The new String with value.
 */
String str_new(char* buffer);

/** @brief Create a new String from UChar* buffer.
 *
 * @param buffer The Unicode Character buffer value of the String.
 * @param length The length of the UChar* buffer.
 * @return The new String with value.
 */
String str_new_uchars(UChar* buffer, unsigned int length);

/** @brief Create a new String from a single UChar value.
 *
 * @param character The Unicode Character value of the String.
 * @return The new String with value.
 */
String str_new_uchar(UChar character);

/** @brief Frees/Deallocates the String from the heap.
 *
 * @param string The String to free from the heap.
 */
void str_free(String string);

/** @brief Frees/Deallocates a StringList from the heap.
 *
 * @param string The String to free from the heap.
 */
void str_list_free(StringList list);

/** @brief Converts Unicode String to ANSI String.
 *
 * Only use this function if you are certain your Unicode String is
 * already in ANSI format, otherwise the behaviour is unexpected.
 *
 * @param string The Unicode String to convert to ANSI String.
 * @return New ANSI String.
 */
char* str_to_chars(String string);

/** @brief Checks if two Strings are equal.
 *
 * @param first The first String to check for equality.
 * @param second The second String to check for equality.
 * @return True if both Strings are equal.
 */
bool str_equal(String first, String second);

/** @brief Checks if a Unicode String and ANSI char* string are equal.
 *
 * @param first The first String to check for equality.
 * @param second The second char* string to check for equality.
 * @return True if both Unicode String and ANSI char* string are equal.
 */
bool str_equal_chars(String first, char* second);

/** @brief Check if two Strings are equal from arbitrary positions.
 *
 * Will check for equality from first String's position A to end against second String's position B
 * for equality.
 *
 * @param first The first String to check for equality.
 * @param fpos The first String's starting position to check for quality.
 * @param second The second String to check for equality.
 * @param spos The second String's starting position to check for quality.
 * @return True if both Strings are equal.
 */
bool str_equal_uchars(String first, unsigned int fpos, String second, unsigned int spos);

/** @brief Compare two Strings value.
 *
 * If first String's length is greater than second String's length, second String's length is taken
 * from both Strings and compared, otherwise the first String's length is taken and performed the same way.
 *
 * @param first The first String to compare.
 * @param second The second String to check for equality.
 * @return Return value < 0 if first < second, value > 0 if second < first, value = 0 if first = second.
 */
int str_cmp(String first, String second);

/** @brief Compare two Strings from arbitrary positions.
 *
 * @param first The first String to compare.
 * @param fpos The position of the first String.
 * @param second The second String to check for equality.
 * @param spos The position of the second String.
 * @return Return value < 0 if first < second, value > 0 if second < first, value = 0 if first = second.
 */
int str_cmp_uchars(String first, unsigned int fpos, String second, unsigned int spos);

/** @brief Convert all uppercase letters in String to lowercase.
 *
 * @param input The String to convert to lowercase.
 * @return New String with all letters lowercase.
 */
String str_tolower(String input);

/** @brief Convert all lowercase letters in String to uppercase.
 *
 * @param input The String to convert to uppercase.
 * @return New String with all letters uppercase.
 */
String str_toupper(String input);

/** @brief Concatenates two Strings into one.
 *
 * @param first The first String to concatenate.
 * @param second The second String to concatenate.
 * @return New String with first+second.
 */
String str_cat(String first, String second);

/** @brief Take a sub-String with arbitrary position and length.
 *
 * @param string The String to take a sub-String of.
 * @param pos The starting position to take the sub-String.
 * @param length The length of the sub-String.
 * @return A sub-String with starting position pos and length length.
 */
String str_substring(String string, unsigned int pos, unsigned int length);

/** @brief Split a String into a list.
 *
 * @param string The String to be split.
 * @param separator The separator.
 * @return A list of Strings separated by the separator.
 */
StringList str_split(String string, String separator);

/** @brief Join a StringList with a glue to form a new String.
 *
 * @param list The StringList to be joined.
 * @param glue The glue to join.
 * @return A new String glued together from the list.
 */
String str_join(StringList list, String glue);

/** @brief Repeats a String a specified times.
 *
 * @param string The String to be repeated.
 * @param times Number of times to repeat the String.
 * @return A new String repeated number of times.
 */
String str_repeat(String string, unsigned int times);

/** @brief Repeats a String a specified times.
 *
 * @param haystack The String to be search in.
 * @param needle The String to be search for.
 * @param offset The starting offset.
 * @return Position of first occurrence of needle in haystack, -1 if no occurrences were found.
 */
int str_pos(String haystack, String needle, int offset);

/** @brief Repeats a String a specified times.
 *
 * @param haystack The String for replacement to occur.
 * @param first The String to be replaced.
 * @param second The String to replace with.
 * @param offset The starting offset.
 * @return New String with replaced values.
 */
String str_replace(String haystack, String first, String second, int offset);

/** @brief Convert a String to unsigned int.
 *
 * @param string The String to convert to unsigned int.
 * @return Unsigned int representing the String.
 */
unsigned int str_to_uint(String string);

/** @brief Take a UChar from arbitrary position from String.
 *
 * @param str The String to take a UChar from.
 * @param pos The position to take the UChar from.
 * @return UChar from String and position.
 */
UChar str_uchar(String str, unsigned int pos);

/** @brief Check if UChar is in range (bitwise).
 *
 * @param uch The UChar to check for range.
 * @param first The lower bound.
 * @param second The upper bound.
 * @return True if first < uch < second.
 */
bool uchar_in_range(UChar uch, UChar first, UChar second);
