#pragma once

#include <cstddef>
#include <string>
#include <string_view>

namespace ll {
template <size_t N>
struct FixedString {
    char buf[N + 1]{};
    consteval FixedString() = default;
    // NOLINTBEGIN(google-explicit-constructor)
    consteval FixedString(std::string_view s) { std::copy_n(s.data(), s.size(), buf); }
    consteval FixedString(char const* s) { std::copy_n(s, N, buf); }
    consteval operator char const*() const { return buf; }
    consteval operator std::string_view() const { return buf; }
    constexpr operator std::string() const { return buf; }
    // NOLINTEND(google-explicit-constructor)

    template <size_t Ny>
    consteval auto operator+(const FixedString<Ny>& other) {
        FixedString<N + Ny> res{};
        std::copy_n(buf, N, res.buf);
        std::copy_n(other.buf, Ny, N + res.buf);
        return res;
    }
};

struct StringView {
    char const* data;
    size_t      size;
    consteval StringView(std::string_view v) { // NOLINT
        data = v.data();
        size = v.size();
    }
    consteval operator std::string_view() const { // NOLINT
        return std::string_view{data, size};
    }
};

template <StringView s>
consteval auto toFixedString() {
    return FixedString<s.size>(s.data);
}

template <size_t N>
FixedString(char const (&)[N]) -> FixedString<N - 1>;
} // namespace ll
