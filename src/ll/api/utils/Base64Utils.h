#pragma once

#include <string_view>

#include "ll/api/base/StdInt.h"

namespace ll::inline utils::base64_utils {
namespace detail {
constexpr uchar encodeLookup(uchar c) {
    return "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
           "abcdefghijklmnopqrstuvwxyz"
           "0123456789+/"[c];
}
constexpr uchar decodeLookup(uchar c) {
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c >= 'a' && c <= 'z') return c - 71;
    if (c >= '0' && c <= '9') return c + 4;
    if (c == '+') return 62;
    if (c == '/') return 63;
    return 64;
}
} // namespace detail

constexpr size_t getEncodeLength(size_t len) { return (len + 2 - ((len + 2) % 3)) / 3 * 4; }

constexpr size_t getEncodeLength(std::string_view str) { return getEncodeLength(str.length()); }

constexpr size_t getDecodeLength(std::string_view in) {
    uchar  count      = 0;
    size_t input_size = in.size();
    for (auto it = in.rbegin(); *it == '='; ++it) {
        ++count;
    }
    input_size -= count;     // remove padding size
    count       = 0;         // reset padding counter
    while (input_size % 4) { // redo padding
        input_size++;
        count++;
    }
    return ((6 * input_size) / 8) - count;
}

constexpr std::string encode(std::string_view str) {
    std::string result;
    result.reserve(getEncodeLength(str));

    int32_t i = 0;
    int32_t j = -6;

    for (auto& c : str) {
        i  = (i << 8) + static_cast<uint8_t>(c);
        j += 8;
        while (j >= 0) {
            result += detail::encodeLookup((i >> j) & 0x3F);
            j      -= 6;
        }
    }

    if (j > -6) {
        result += detail::encodeLookup(((i << 8) >> (j + 8)) & 0x3F);
    }

    // padding
    while (result.size() % 4) {
        result.push_back('=');
    }

    return result;
}

constexpr std::string decode(std::string_view str) {
    size_t      input_size  = str.size();
    size_t      output_size = getDecodeLength(str);
    std::string out;
    out.resize(output_size);
    for (size_t i = 0, j = 0; i < input_size;) {
        uint32_t c1 = (i > input_size || str[i] == '=') ? 0 & i++ : detail::decodeLookup(str[i++]);
        uint32_t c2 = (i > input_size || str[i] == '=') ? 0 & i++ : detail::decodeLookup(str[i++]);
        uint32_t c3 = (i > input_size || str[i] == '=') ? 0 & i++ : detail::decodeLookup(str[i++]);
        uint32_t c4 = (i > input_size || str[i] == '=') ? 0 & i++ : detail::decodeLookup(str[i++]);

        uint32_t data = (c1 << 3 * 6) + (c2 << 2 * 6) + (c3 << 1 * 6) + (c4 << 0 * 6);

        if (j < output_size) out[j++] = static_cast<char>((data >> 2 * 8) & 0xFF);
        if (j < output_size) out[j++] = static_cast<char>((data >> 1 * 8) & 0xFF);
        if (j < output_size) out[j++] = static_cast<char>((data >> 0 * 8) & 0xFF);
    }
    return out;
}
} // namespace ll::inline utils::base64_utils
