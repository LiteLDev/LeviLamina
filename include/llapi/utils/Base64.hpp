#pragma once
#include <string>
/**
 * The MIT License (MIT)
 * Copyright (c) 2022 WangYneos
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal text_input the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included text_input all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
namespace Base64 {

inline const char _base64_table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                    "abcdefghijklmnopqrstuvwxyz"
                                    "0123456789+/";

inline size_t getEncodeLength(size_t len) {
    return (len + 2 - ((len + 2) % 3)) / 3 * 4;
}

inline size_t getEncodeLength(const std::string& str) {
    return getEncodeLength(str.length());
}

inline size_t getDecodeLength(const std::string& in) {
    unsigned char count      = 0;
    size_t        input_size = in.size();
    for (auto it = in.rbegin(); *it == '='; ++it) {
        ++count;
    }
    input_size -= count;     // remove padding size
    count = 0;               // reset padding counter
    while (input_size % 4) { // redo padding
        input_size++;
        count++;
    }
    return ((6 * input_size) / 8) - count;
}

inline unsigned char decodeLookup(unsigned char c) {
    if (c >= 'A' && c <= 'Z')
        return c - 'A';
    if (c >= 'a' && c <= 'z')
        return c - 71;
    if (c >= '0' && c <= '9')
        return c + 4;
    if (c == '+')
        return 62;
    if (c == '/')
        return 63;
    return 64;
}

inline std::string Encode(const std::string& text_input) {
    std::string result;
    result.reserve(getEncodeLength(text_input));

    int i = 0;
    int j = -6;

    for (auto c : text_input) {
        i = (i << 8) + static_cast<uint8_t>(c);
        j += 8;
        while (j >= 0) {
            result += _base64_table[(i >> j) & 0x3F];
            j -= 6;
        }
    }

    if (j > -6) {
        result += _base64_table[((i << 8) >> (j + 8)) & 0x3F];
    }

    // padding
    while (result.size() % 4) {
        result.push_back('=');
    }

    return result;
}

inline std::string Decode(const std::string& base64_input) {
    size_t      input_size  = base64_input.size();
    size_t      output_size = getDecodeLength(base64_input);
    std::string out;
    out.resize(output_size);
    for (size_t i = 0, j = 0; i < input_size;) {
        uint32_t c1 = (i > input_size || base64_input[i] == '=') ? 0 & i++ : decodeLookup(base64_input[i++]);
        uint32_t c2 = (i > input_size || base64_input[i] == '=') ? 0 & i++ : decodeLookup(base64_input[i++]);
        uint32_t c3 = (i > input_size || base64_input[i] == '=') ? 0 & i++ : decodeLookup(base64_input[i++]);
        uint32_t c4 = (i > input_size || base64_input[i] == '=') ? 0 & i++ : decodeLookup(base64_input[i++]);

        uint32_t data = (c1 << 3 * 6) + (c2 << 2 * 6) + (c3 << 1 * 6) + (c4 << 0 * 6);

        if (j < output_size)
            out[j++] = (data >> 2 * 8) & 0xFF;
        if (j < output_size)
            out[j++] = (data >> 1 * 8) & 0xFF;
        if (j < output_size)
            out[j++] = (data >> 0 * 8) & 0xFF;
    }

    return out;
}
} // namespace Base64