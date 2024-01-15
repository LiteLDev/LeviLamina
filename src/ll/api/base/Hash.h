#pragma once

#include <string_view>

#include "ll/api/base/StdInt.h"

namespace ll::hash {

template <class T>
constexpr void hashCombine(T const& v, size_t& seed) {
    seed ^= v + 0x9e3779b9ui64 + (seed << 6ui64) + (seed >> 2ui64);
}

constexpr size_t hashCombine(size_t a, size_t b) { return a ^ (b + 0x9e3779b9ui64 + (a << 6) + (a >> 2)); }

[[nodiscard]] constexpr uint64 do_hash(std::string_view x) {
    uint64 rval = 0;
    for (size_t i = 0; i < x.size(); i++) {
        rval ^= ((i & 1) == 0) ? (~((rval << 7) ^ x[i] ^ (rval >> 3))) : (~((rval << 11) ^ x[i] ^ (rval >> 5)));
    }
    return rval;
}

[[nodiscard]] constexpr uint64 do_hash2(std::string_view x) {
    // hash_64_fnv1a
    uint64           hash  = 0xcbf29ce484222325;
    constexpr uint64 prime = 0x100000001b3;
    for (char c : x) {
        hash  = hash ^ c;
        hash *= prime;
    }
    return hash;
}

[[nodiscard]] constexpr uint64 do_hash3(std::string_view x) {
    uint64 rval = 5381;
    for (char c : x) {
        rval = ((rval << 5) + rval) + c;
    }
    return rval;
}

template <class T>
[[nodiscard]] constexpr uint64 hashType(T const& v) {
    return do_hash2({reinterpret_cast<char const*>(std::addressof(v)), sizeof(T)});
}
} // namespace ll::hash

namespace ll::hash_literals {
[[nodiscard]] constexpr uint64 operator""_h(char const* x, size_t len) { return ll::hash::do_hash({x, len}); }
} // namespace ll::hash_literals
