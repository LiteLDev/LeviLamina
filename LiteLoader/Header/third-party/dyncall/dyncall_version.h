/*

 Package: dyncall
 Library: dyncall
 File: dyncall/dyncall_utils.h
 Description: Type and calling-convention signature character defines
 License:

   Copyright (c) 2021 Tassilo Philipp <tphilipp@potion-studios.com>

   Permission to use, copy, modify, and distribute this software for any
   purpose with or without fee is hereby granted, provided that the above
   copyright notice and this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
   WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
   MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
   ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
   WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
   ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
   OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

*/



#ifndef DYNCALL_VERSION_H
#define DYNCALL_VERSION_H

/* version scheme is using hex number, with last nibble being either 'c'
   or 'f' for current or release version, respectively; next nibbles are
   only using decimal numbers (0-9), one for teeny (usually 0 as not used),
   one for minor and rest for major version number; e.g.:

   0x120c = v1.2-current
   0x40f = v0.4-release

   this macro was introduced while working on v1.3, (so 0x130c)
*/

#define DYNCALL_VERSION  0x130c

#endif /* DYNCALL_VERSION_H */

