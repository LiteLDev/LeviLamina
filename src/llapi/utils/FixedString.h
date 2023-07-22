#pragma once

#include <string_view>

template <unsigned N>
struct FixedString {
    char buf[N + 1]{};
    constexpr FixedString(char const* s) { std::copy_n(s, N, buf); }
    constexpr operator char const*() const { return buf; }
    constexpr operator std::string_view() const { return buf; }
};

template <unsigned N>
FixedString(char const (&)[N]) -> FixedString<N - 1>;
