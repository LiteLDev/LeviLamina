#pragma once

#include <string>

#include "liteloader/api/base/StdInt.h"

namespace ll::base64 {

inline const char base64Table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                  "abcdefghijklmnopqrstuvwxyz"
                                  "0123456789+/";

inline size_t getEncodeLength(size_t len) { return (len + 2 - ((len + 2) % 3)) / 3 * 4; }

inline size_t getEncodeLength(std::string const& str) { return getEncodeLength(str.length()); }

inline size_t getDecodeLength(std::string const& in) {
    unsigned char count      = 0;
    size_t        input_size = in.size();
    for (auto it = in.rbegin(); *it == '='; ++it) { ++count; }
    input_size -= count;     // remove padding size
    count       = 0;         // reset padding counter
    while (input_size % 4) { // redo padding
        input_size++;
        count++;
    }
    return ((6 * input_size) / 8) - count;
}

constexpr uchar decodeLookup(uchar c) {
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c >= 'a' && c <= 'z') return c - 71;
    if (c >= '0' && c <= '9') return c + 4;
    if (c == '+') return 62;
    if (c == '/') return 63;
    return 64;
}

inline std::string Encode(std::string const& text_input) {
    std::string result;
    result.reserve(getEncodeLength(text_input));

    int32_t i = 0;
    int32_t j = -6;

    for (auto& c : text_input) {
        i  = (i << 8) + static_cast<uint8_t>(c);
        j += 8;
        while (j >= 0) {
            result += base64Table[(i >> j) & 0x3F];
            j      -= 6;
        }
    }

    if (j > -6) { result += base64Table[((i << 8) >> (j + 8)) & 0x3F]; }

    // padding
    while (result.size() % 4) { result.push_back('='); }

    return result;
}

inline std::string Decode(std::string const& base64_input) {
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

        if (j < output_size) out[j++] = static_cast<char>((data >> 2 * 8) & 0xFF);
        if (j < output_size) out[j++] = static_cast<char>((data >> 1 * 8) & 0xFF);
        if (j < output_size) out[j++] = static_cast<char>((data >> 0 * 8) & 0xFF);
    }
    return out;
}
} // namespace ll::base64
