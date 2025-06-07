#pragma once

#include <compare>
#include <span>
#include <string_view>
#include <type_traits>

#include "ll/api/base/Meta.h"
#include "ll/api/base/StdInt.h"

namespace ll::inline utils::hash_utils {

class HashedIdBase {
protected:
    [[nodiscard]] constexpr explicit HashedIdBase(size_t hash) noexcept : hash(hash) {}

public:
    size_t hash;

    [[nodiscard]] constexpr bool operator==(HashedIdBase const& other) const noexcept { return hash == other.hash; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(HashedIdBase const& other) const noexcept {
        return hash <=> other.hash;
    }
};

class HashCombiner {
    size_t seed;

public:
    [[nodiscard]] constexpr HashCombiner(size_t seed = 0) : seed(seed) {}

    template <class T>
    constexpr HashCombiner& add(T const& v) {
        if constexpr (std::is_integral_v<T>) {
            seed ^= v + 0x9e3779b9ull + (seed << 6ull) + (seed >> 2ull);
        } else {
            seed ^= std::hash<T>{}(v) + 0x9e3779b9ull + (seed << 6ull) + (seed >> 2ull);
        }
        return *this;
    }

    template <class T>
    constexpr HashCombiner& addRange(T&& v) {
        for (auto const& x : std::forward<T>(v)) {
            this->add(x);
        }
        return *this;
    }

    [[nodiscard]] constexpr        operator size_t() const { return seed; }
    [[nodiscard]] constexpr size_t hash() const { return seed; }
};

[[nodiscard]] constexpr uint64 doHash(std::string_view x) {
    // hash_64_fnv1a
    uint64           hash  = 0xcbf29ce484222325;
    constexpr uint64 prime = 0x100000001b3;
    for (char c : x) {
        hash ^= c;
        hash *= prime;
    }
    return hash;
}

[[nodiscard]] constexpr uint64 doHash2(std::string_view x) {
    uint64 rval = 0;
    for (size_t i = 0; i < x.size(); i++) {
        rval ^= ((i & 1) == 0) ? (~((rval << 7) ^ x[i] ^ (rval >> 3))) : (~((rval << 11) ^ x[i] ^ (rval >> 5)));
    }
    return rval;
}

[[nodiscard]] constexpr uint64 doHash3(std::string_view x) {
    uint64 rval = 5381;
    for (char c : x) {
        rval = ((rval << 5) + rval) + c;
    }
    return rval;
}
} // namespace ll::inline utils::hash_utils

namespace ll::inline literals::inline hash_literals {
[[nodiscard]] consteval uint64 operator""_h(char const* x, size_t len) { return ll::hash_utils::doHash({x, len}); }
} // namespace ll::inline literals::inline hash_literals

namespace std {
template <class T>
    requires(std::is_base_of_v<ll::hash_utils::HashedIdBase, T>)
struct hash<T> {
    size_t operator()(T const& id) const noexcept { return id.hash; }
};
} // namespace std
