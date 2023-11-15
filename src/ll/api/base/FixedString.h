#pragma once

#include <string_view>

namespace ll {
template <size_t N>
struct FixedString {
    char buf[N + 1]{};
    constexpr FixedString(char const* s) { std::copy_n(s, N, buf); } // NOLINT(google-explicit-constructor)
    constexpr operator char const*() const { return buf; }           // NOLINT(google-explicit-constructor)
    constexpr operator std::string_view() const { return buf; }      // NOLINT(google-explicit-constructor)
};

template <size_t N>
FixedString(char const (&)[N]) -> FixedString<N - 1>;
} // namespace ll
