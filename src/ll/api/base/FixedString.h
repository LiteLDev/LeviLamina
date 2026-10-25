#pragma once

#include <algorithm>
#include <cstddef>
#include <string>
#include <string_view>

namespace ll {
template <size_t N>
struct FixedString {
    char buf[N + 1]{};

    consteval FixedString() noexcept = default;
    consteval FixedString(std::string_view s) noexcept { std::copy_n(s.data(), std::min(s.size(), N), buf); }
    consteval FixedString(char const* s) noexcept : FixedString(std::string_view{s}) {}

    constexpr operator std::string_view() const noexcept { return buf; }

    constexpr char const*      c_str() const noexcept { return buf; }
    constexpr std::string_view sv() const noexcept { return buf; }
    constexpr std::string      str() const noexcept { return buf; }

    [[nodiscard]] constexpr char const& operator[](size_t idx) const noexcept { return buf[idx]; }
    [[nodiscard]] constexpr char&       operator[](size_t idx) noexcept { return buf[idx]; }
    [[nodiscard]] constexpr char const* data() const { return buf; }
    [[nodiscard]] constexpr char*       data() { return buf; }

    constexpr size_t size() const { return N; }


    template <size_t Ny>
    consteval auto operator+(FixedString<Ny> const& other) noexcept {
        FixedString<N + Ny> res{};
        std::copy_n(buf, N, res.buf);
        std::copy_n(other.buf, Ny, N + res.buf);
        return res;
    }
};

template <size_t N>
FixedString(char const (&)[N]) -> FixedString<N - 1>;

} // namespace ll
