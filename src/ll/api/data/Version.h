#pragma once

#include <algorithm>
#include <charconv>
#include <compare>
#include <cstddef>
#include <cstdint>
#include <format>
#include <limits>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <system_error>
#include <utility>
#include <variant>
#include <vector>

#include "ll/api/utils/StringUtils.h"

namespace ll::data {

namespace detail {

// Min version string length = 1(<major>) + 1(.) + 1(<minor>) + 1(.) + 1(<patch>) = 5.
inline constexpr auto min_version_string_length = 5;

constexpr bool is_digit(char c) noexcept { return c >= '0' && c <= '9'; }

constexpr bool is_plus(char c) noexcept { return c == '+'; }

constexpr bool is_letter(char c) noexcept { return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); }

constexpr std::uint16_t to_digit(char c) noexcept { return static_cast<std::uint16_t>(c - '0'); }

constexpr char const* from_chars(char const* first, char const* last, std::uint16_t& d) noexcept {
    if (first != last && is_digit(*first)) {
        std::int32_t t = 0;
        for (; first != last && is_digit(*first); ++first) {
            t = t * 10 + to_digit(*first);
        }
        if (t <= (std::numeric_limits<std::uint16_t>::max)()) {
            d = static_cast<std::uint16_t>(t);
            return first;
        }
    }
    return nullptr;
}

constexpr char const* from_chars(char const* first, char const* last, std::optional<std::uint16_t>& d) noexcept {
    if (first != last && is_digit(*first)) {
        std::int32_t t = 0;
        for (; first != last && is_digit(*first); ++first) {
            t = t * 10 + to_digit(*first);
        }
        if (t <= (std::numeric_limits<std::uint16_t>::max)()) {
            d = static_cast<std::uint16_t>(t);
            return first;
        }
    }
    return nullptr;
}

constexpr bool check_delimiter(char const* first, char const* last, char d) noexcept {
    return first != last && first != nullptr && *first == d;
}

struct from_chars_result : std::from_chars_result {
    [[nodiscard]] constexpr operator bool() const noexcept { // NOLINT(google-explicit-constructor)
        return ec == std::errc{};
    }
};

} // namespace detail

struct VersionParseError : std::runtime_error {
    explicit VersionParseError(const std::string& what_arg) : std::runtime_error(what_arg) {}
};

struct PreRelease {
    std::vector<std::variant<std::string, uint16_t>> values;

    constexpr PreRelease()  = default;
    constexpr ~PreRelease() = default;
    constexpr explicit PreRelease(std::string_view s) { from_string(s); }

    constexpr std::strong_ordering operator<=>(PreRelease const& other) const noexcept {
        for (std::size_t i = 0; i < std::min(values.size(), other.values.size()); ++i) {
            if (std::holds_alternative<std::string>(values[i])) {
                if (std::holds_alternative<std::string>(other.values[i])) {
                    if (std::get<std::string>(values[i]) != std::get<std::string>(other.values[i])) {
                        return std::get<std::string>(values[i]) <=> std::get<std::string>(other.values[i]);
                    }
                } else {
                    return std::strong_ordering::greater;
                }
            } else {
                if (std::holds_alternative<std::string>(other.values[i])) {
                    return std::strong_ordering::less;
                } else {
                    if (std::get<std::uint16_t>(values[i]) != std::get<std::uint16_t>(other.values[i])) {
                        return std::get<std::uint16_t>(values[i]) <=> std::get<std::uint16_t>(other.values[i]);
                    }
                }
            }
        }
        return values.size() <=> other.values.size();
    }

    constexpr detail::from_chars_result from_chars(char const* first, char const* last) noexcept {
        auto begin = first;
        while (first != last && !detail::is_plus(*first)) {
            first++;
        }
        std::string s{begin, first};
        auto        tokens = ll::string_utils::splitByPattern(s, ".");
        for (auto const& token : tokens) {
            std::optional<std::uint16_t> value;
            if (detail::from_chars(token.data(), token.data() + token.length(), value); value) {
                values.emplace_back(*value);
            } else {
                values.emplace_back(std::string{token});
            }
        }
        return {first, std::errc{}};
    }

    [[nodiscard]] constexpr bool from_string_noexcept(std::string_view str) noexcept {
        return from_chars(str.data(), str.data() + str.length());
    }

    constexpr PreRelease& from_string(std::string_view str) {
        if (!from_string_noexcept(str)) {
            throw VersionParseError("Invalid version string.");
        }
        return *this;
    }

    [[nodiscard]] constexpr std::string to_string() const noexcept {
        std::string str;
        for (auto const& value : values) {
            if (std::holds_alternative<std::string>(value)) {
                str += std::get<std::string>(value);
            } else {
                str += std::to_string(std::get<std::uint16_t>(value));
            }
            str += '.';
        }
        if (str.ends_with('.')) {
            str.pop_back();
        }
        return str;
    }
};

struct Version {
    // https://semver.org/#how-should-i-deal-with-revisions-in-the-0yz-initial-development-phase
    std::uint16_t              major = 0;
    std::uint16_t              minor = 1;
    std::uint16_t              patch = 0;
    std::optional<PreRelease>  preRelease;
    std::optional<std::string> build;

    constexpr Version()  = default;
    constexpr ~Version() = default;

    constexpr Version(
        std::uint16_t              mj,
        std::uint16_t              mn,
        std::uint16_t              pt,
        std::optional<PreRelease>  prt = {},
        std::optional<std::string> bu  = {}
    ) noexcept
    : major{mj},
      minor{mn},
      patch{pt},
      preRelease{std::move(prt)},
      build{std::move(bu)} {}

    constexpr Version(
        std::uint16_t              mj,
        std::uint16_t              mn,
        std::uint16_t              pt,
        std::string_view           prt,
        std::optional<std::string> bu = {}
    ) noexcept
    : major{mj},
      minor{mn},
      patch{pt},
      preRelease{PreRelease{prt}},
      build{std::move(bu)} {}

    explicit constexpr Version(std::string_view str) : Version() { from_string(str); }

    [[nodiscard]] constexpr detail::from_chars_result from_chars(char const* first, char const* last) noexcept {
        if (first == nullptr || last == nullptr || (last - first) < detail::min_version_string_length) {
            return {first, std::errc::invalid_argument};
        }
        auto next = first;
        if (next = detail::from_chars(next, last, major); detail::check_delimiter(next, last, '.')) {
            if (next = detail::from_chars(++next, last, minor); detail::check_delimiter(next, last, '.')) {
                if (next = detail::from_chars(++next, last, patch); next == last) {
                    return {next, std::errc{}};
                }
                if (!next) {
                    return {nullptr, std::errc::invalid_argument};
                }
                if (detail::check_delimiter(next, last, '-')) {
                    PreRelease pre;
                    auto       result = pre.from_chars(++next, last);
                    if (!result) return result;
                    if (pre.values.empty()) return {next, std::errc::invalid_argument};
                    preRelease = pre;
                    next       = result.ptr;
                    if (result && next == last) {
                        return {next, std::errc{}};
                    }
                }
                if (detail::check_delimiter(next, last, '+')) {
                    build = {++next, static_cast<size_t>(last - next)};
                    if (build->empty()) {
                        return {nullptr, std::errc::invalid_argument};
                    }
                    next = last;
                    if (std::any_of(build->begin(), build->end(), [](char c) {
                            return !detail::is_digit(c) && !detail::is_letter(c);
                        })) {
                        return {nullptr, std::errc::invalid_argument};
                    }
                }
                if (next == last) {
                    return {next, std::errc{}};
                }
            }
        }
        return {first, std::errc::invalid_argument};
    }

    [[nodiscard]] constexpr bool from_string_noexcept(std::string_view str) noexcept {
        return from_chars(str.data(), str.data() + str.length());
    }

    constexpr Version& from_string(std::string_view str) {
        if (!from_string_noexcept(str)) {
            throw VersionParseError("Invalid version string.");
        }
        return *this;
    }

    [[nodiscard]] std::string to_string() const {
        std::string str;
        str = std::format("{}.{}.{}", major, minor, patch);
        if (preRelease) {
            str += '-';
            str += preRelease->to_string();
        }
        if (build) {
            str += '+';
            str += *build;
        }
        return str;
    }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(Version const& other) const noexcept {
        if (major != other.major) {
            return major <=> other.major;
        }
        if (minor != other.minor) {
            return minor <=> other.minor;
        }
        if (patch != other.patch) {
            return patch <=> other.patch;
        }
        if (preRelease) {
            if (other.preRelease) {
                return *preRelease <=> *other.preRelease;
            }
            return std::strong_ordering::less;
        } else if (other.preRelease) {
            return std::strong_ordering::greater;
        }
        return std::strong_ordering::equal;
    }

    [[nodiscard]] constexpr bool operator==(Version const& other) const noexcept {
        return *this <=> other == std::strong_ordering::equal;
    }

    [[nodiscard]] [[maybe_unused]] static constexpr bool valid(std::string_view str) noexcept {
        return Version{}.from_string_noexcept(str);
    }
};

template <class J>
inline J serialize(Version const& ver) {
    return ver.to_string();
}
template <class J>
inline void deserialize(Version& ver, J const& j) {
    if (j.is_string()) {
        ver.from_string(j);
    }
}

namespace literals {
[[nodiscard]] constexpr Version operator""_version(char const* str, std::size_t length) {
    return Version{
        std::string_view{str, length}
    };
}
} // namespace literals

} // namespace ll::data
