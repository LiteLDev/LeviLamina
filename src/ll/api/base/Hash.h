#pragma once

#include <string_view>

#include "ll/api/base/StdInt.h"

namespace ll::hash {

template <class T>
constexpr void hashCombine(T const& v, size_t& seed) {
    seed ^= v + 2654435769ui64 + (seed << 6ui64) + (seed >> 2ui64);
}

constexpr uint64 do_hash(std::string_view x) {
    uint64 rval = 0;
    for (size_t i = 0; i < x.size(); i++) {
        rval ^= (i & 1 == 0) ? (~((rval << 7) ^ x[i] ^ (rval >> 3))) : (~((rval << 11) ^ x[i] ^ (rval >> 5)));
    }
    return rval;
}

constexpr uint64 do_hash2(std::string_view x) {
    uint64 rval = 5381;
    for (char c : x) {
        rval = ((rval << 5) + rval) + c;
    }
    return rval;
}

} // namespace ll::hash

namespace ll::hash_literals {
constexpr uint64 operator""_h(char const* x, size_t len) { return ll::hash::do_hash({x, len}); }
} // namespace ll::hash_literals
