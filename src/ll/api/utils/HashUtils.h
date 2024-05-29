#pragma once

#include <string_view>
#include <type_traits>
#include <vector>

#include "ll/api/base/Meta.h"
#include "ll/api/base/StdInt.h"

namespace ll::inline utils::hash_utils {

template <class T>
constexpr void hashCombine(T const& v, size_t& seed) {
    seed ^= v + 0x9e3779b9ui64 + (seed << 6ui64) + (seed >> 2ui64);
}

[[nodiscard]] constexpr uint64 doHash(std::string_view x) {
    uint64 rval = 0;
    for (size_t i = 0; i < x.size(); i++) {
        rval ^= ((i & 1) == 0) ? (~((rval << 7) ^ x[i] ^ (rval >> 3))) : (~((rval << 11) ^ x[i] ^ (rval >> 5)));
    }
    return rval;
}

[[nodiscard]] constexpr uint64 doHash2(std::string_view x) {
    // hash_64_fnv1a
    uint64           hash  = 0xcbf29ce484222325;
    constexpr uint64 prime = 0x100000001b3;
    for (char c : x) {
        hash ^= c;
        hash *= prime;
    }
    return hash;
}

[[nodiscard]] constexpr uint64 doHash3(std::string_view x) {
    uint64 rval = 5381;
    for (char c : x) {
        rval = ((rval << 5) + rval) + c;
    }
    return rval;
}

template <class T>
    requires(std::is_trivially_destructible_v<T>)
[[nodiscard]] constexpr uint64 rawHashType(T const& v) {
    uint64           hash  = 0xcbf29ce484222325;
    constexpr uint64 prime = 0x100000001b3;
    meta::unroll<sizeof(T)>([&](size_t i) {
        hash ^= reinterpret_cast<char const*>(std::addressof(v))[i];
        hash *= prime;
    });
    return hash;
}

template <class T>
[[nodiscard]] constexpr uint64 hashType(std::vector<T> const& v) {
    size_t seed = v.size();
    for (auto const& x : v) {
        hashCombine(std::hash<T>{}(x), seed);
    }
    return seed;
}
} // namespace ll::inline utils::hash_utils

namespace ll::hash_literals {
[[nodiscard]] constexpr uint64 operator""_h(char const* x, size_t len) { return ll::hash_utils::doHash({x, len}); }
} // namespace ll::hash_literals
