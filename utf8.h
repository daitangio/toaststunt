/******************************************************************************
 * Copyright (c) 2002, Mathieu Fenniak
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * * The name of the author may not be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 *****************************************************************************/

#include "my-types.h"
#include "structures.h"
#include <ctype.h>

/* Return the length of the string.
 */
extern size_t utf8_strlen(const char* str);

/* Nice and easy ones. Just give the proper index.
 */
extern Num utf8_strindex(const char* big, const char* small, int case_matters);
extern Num utf8_strrindex(const char* big, const char* small, int case_matters);

/* Return value as a newly allocated null-term string.
 */
extern const char* utf8_index(const char* str, Num index);
extern const char* utf8_substr(const char* str, Num lower, Num upper);

/* Return a copy of 'lhs' with the provided values changed to 'rhs'.
 * utf8_copyandset just wraps utf8_strrangeset.
 */
extern const char* utf8_copyandset(const char* lhs, Num index, const char* rhs);
extern const char* utf8_strrangeset(const char* lhs, Num from, Num to, const char* rhs);

/* Return a UTF-8 based index of the character where nRealIdx lies,
 * in the string pStr.
 */
extern int utf8_convert_index(int nRealIdx, const char* pStr);

/* Return the number of bytes that the given head UTF8 byte represents.
 * Note that this should not need to be used outside of utf8.c very often...
 * It's exported so that parser.y's tID can include unicode characters.
 */
extern int utf8_numbytes(char c);
