#pragma once

#include <algorithm>
#include <charconv>
#include <compare>
#include <concepts>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <system_error>
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>

#include "ll/api/reflection/ReflectionError.h"
#include "ll/api/utils/HashUtils.h"

#include "fmt/core.h"

namespace ll::data {

namespace detail {

struct from_chars_result : std::from_chars_result {
    [[nodiscard]] constexpr operator bool() const noexcept { return ec == std::errc{}; }
    constexpr void          value() const {
        if (ec != std::errc{}) {
            throw std::system_error{std::make_error_code(ec)};
        }
    }
};

constexpr inline auto min_version_string_length = 5;

constexpr bool is_digit(char c) noexcept { return c >= '0' && c <= '9'; }

constexpr bool is_letter(char c) noexcept { return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); }

constexpr bool is_identifier_char(char c) noexcept { return is_digit(c) || is_letter(c) || c == '-'; }

constexpr std::uint16_t to_digit(char c) noexcept { return static_cast<std::uint16_t>(c - '0'); }

constexpr void append_number(std::string& output, std::uint16_t value) {
    char   digits[5];
    size_t size{};
    do {
        digits[size++] = static_cast<char>('0' + value % 10);
        value          = static_cast<std::uint16_t>(value / 10);
    } while (value != 0);
    while (size != 0) {
        output.push_back(digits[--size]);
    }
}

constexpr from_chars_result from_chars(char const* first, char const* last, std::uint16_t& value) noexcept {
    if (first == nullptr || last == nullptr || first >= last || !is_digit(*first)) {
        return {first, std::errc::invalid_argument};
    }
    std::uint32_t parsed = 0;
    for (; first != last && is_digit(*first); ++first) {
        parsed = parsed * 10 + to_digit(*first);
        if (parsed > (std::numeric_limits<std::uint16_t>::max)()) {
            return {first, std::errc::result_out_of_range};
        }
    }
    value = static_cast<std::uint16_t>(parsed);
    return {first, std::errc{}};
}

constexpr from_chars_result
parse_numeric_identifier(char const* first, char const* last, std::uint16_t& value) noexcept {
    if (first == nullptr || last == nullptr || first >= last || (last - first > 1 && *first == '0')) {
        return {first, std::errc::invalid_argument};
    }
    auto result = from_chars(first, last, value);
    if (!result || result.ptr != last) {
        return {result.ptr, result.ec == std::errc{} ? std::errc::invalid_argument : result.ec};
    }
    return result;
}

constexpr bool check_delimiter(char const* first, char const* last, char delimiter) noexcept {
    return first != nullptr && first != last && *first == delimiter;
}

constexpr from_chars_result validate_identifiers(char const* first, char const* last) noexcept {
    if (first == nullptr || last == nullptr || first >= last) {
        return {first, std::errc::invalid_argument};
    }
    auto identifierBegin = first;
    for (auto current = first; current != last; ++current) {
        if (*current == '.') {
            if (identifierBegin == current) {
                return {current, std::errc::invalid_argument};
            }
            identifierBegin = current + 1;
        } else if (!is_identifier_char(*current)) {
            return {current, std::errc::invalid_argument};
        }
    }
    if (identifierBegin == last) {
        return {last, std::errc::invalid_argument};
    }
    return {last, std::errc{}};
}

} // namespace detail

struct PreRelease {
    std::vector<std::variant<std::string, std::uint16_t>> values;

    constexpr PreRelease()  = default;
    constexpr ~PreRelease() = default;
    constexpr explicit PreRelease(std::string_view str) { from_string(str); }

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
            } else if (std::holds_alternative<std::string>(other.values[i])) {
                return std::strong_ordering::less;
            } else if (std::get<std::uint16_t>(values[i]) != std::get<std::uint16_t>(other.values[i])) {
                return std::get<std::uint16_t>(values[i]) <=> std::get<std::uint16_t>(other.values[i]);
            }
        }
        return values.size() <=> other.values.size();
    }

    constexpr bool operator==(PreRelease const& other) const noexcept = default;

    constexpr detail::from_chars_result from_chars(char const* first, char const* last) noexcept {
        if (first == nullptr || last == nullptr || first >= last) {
            return {first, std::errc::invalid_argument};
        }

        std::vector<std::variant<std::string, std::uint16_t>> parsed;
        auto                                                  current = first;
        while (current != last && *current != '+') {
            auto identifierBegin = current;
            while (current != last && *current != '.' && *current != '+') {
                if (!detail::is_identifier_char(*current)) {
                    return {current, std::errc::invalid_argument};
                }
                ++current;
            }
            if (identifierBegin == current) {
                return {current, std::errc::invalid_argument};
            }

            bool numeric = std::all_of(identifierBegin, current, detail::is_digit);
            if (numeric) {
                std::uint16_t value{};
                auto          result = detail::parse_numeric_identifier(identifierBegin, current, value);
                if (!result) {
                    return result;
                }
                parsed.emplace_back(value);
            } else {
                parsed.emplace_back(std::string{identifierBegin, current});
            }

            if (current != last && *current == '.') {
                ++current;
                if (current == last || *current == '+' || *current == '.') {
                    return {current, std::errc::invalid_argument};
                }
            }
        }

        values = std::move(parsed);
        return {current, std::errc{}};
    }

    [[nodiscard]] constexpr detail::from_chars_result from_string_noexcept(std::string_view str) noexcept {
        auto result = from_chars(str.data(), str.data() + str.length());
        if (result && result.ptr != str.data() + str.length()) {
            return {result.ptr, std::errc::invalid_argument};
        }
        return result;
    }

    constexpr PreRelease& from_string(std::string_view str) {
        from_string_noexcept(str).value();
        return *this;
    }

    [[nodiscard]] constexpr std::string to_string() const {
        std::string str;
        for (auto const& value : values) {
            if (!str.empty()) {
                str += '.';
            }
            if (std::holds_alternative<std::string>(value)) {
                str += std::get<std::string>(value);
            } else {
                detail::append_number(str, std::get<std::uint16_t>(value));
            }
        }
        return str;
    }
};

struct Version {
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
    )
    : major{mj},
      minor{mn},
      patch{pt},
      preRelease{PreRelease{prt}},
      build{std::move(bu)} {}

    explicit constexpr Version(std::string_view str) : Version() { from_string(str); }

    [[nodiscard]] constexpr detail::from_chars_result from_chars(char const* first, char const* last) noexcept {
        if (first == nullptr || last == nullptr || first >= last
            || (last - first) < detail::min_version_string_length) {
            return {first, std::errc::invalid_argument};
        }

        auto parseCorePart = [last](char const*& current, std::uint16_t& value) -> detail::from_chars_result {
            auto begin  = current;
            auto result = detail::from_chars(current, last, value);
            if (!result) {
                return result;
            }
            if (result.ptr - begin > 1 && *begin == '0') {
                return {begin, std::errc::invalid_argument};
            }
            current = result.ptr;
            return result;
        };

        auto          current = first;
        std::uint16_t parsedMajor{};
        std::uint16_t parsedMinor{};
        std::uint16_t parsedPatch{};

        if (auto result = parseCorePart(current, parsedMajor); !result) {
            return result;
        }
        if (!detail::check_delimiter(current, last, '.')) {
            return {current, std::errc::invalid_argument};
        }
        ++current;
        if (auto result = parseCorePart(current, parsedMinor); !result) {
            return result;
        }
        if (!detail::check_delimiter(current, last, '.')) {
            return {current, std::errc::invalid_argument};
        }
        ++current;
        if (auto result = parseCorePart(current, parsedPatch); !result) {
            return result;
        }

        std::optional<PreRelease>  parsedPreRelease;
        std::optional<std::string> parsedBuild;
        if (detail::check_delimiter(current, last, '-')) {
            PreRelease preRelease;
            auto       result = preRelease.from_chars(++current, last);
            if (!result) {
                return result;
            }
            parsedPreRelease = std::move(preRelease);
            current          = result.ptr;
        }
        if (detail::check_delimiter(current, last, '+')) {
            auto buildBegin = ++current;
            auto result     = detail::validate_identifiers(buildBegin, last);
            if (!result) {
                return result;
            }
            parsedBuild = std::string{buildBegin, last};
            current     = last;
        }
        if (current != last) {
            return {current, std::errc::invalid_argument};
        }

        major      = parsedMajor;
        minor      = parsedMinor;
        patch      = parsedPatch;
        preRelease = std::move(parsedPreRelease);
        build      = std::move(parsedBuild);
        return {current, std::errc{}};
    }

    [[nodiscard]] constexpr detail::from_chars_result from_string_noexcept(std::string_view str) noexcept {
        return from_chars(str.data(), str.data() + str.length());
    }

    constexpr Version& from_string(std::string_view str) {
        from_string_noexcept(str).value();
        return *this;
    }

    [[nodiscard]] constexpr std::string to_string() const {
        std::string str;
        detail::append_number(str, major);
        str += '.';
        detail::append_number(str, minor);
        str += '.';
        detail::append_number(str, patch);
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
        }
        if (other.preRelease) {
            return std::strong_ordering::greater;
        }
        return std::strong_ordering::equal;
    }

    [[nodiscard]] constexpr bool operator==(Version const& other) const noexcept {
        return *this <=> other == std::strong_ordering::equal;
    }

    [[nodiscard]] constexpr bool isIdenticalTo(Version const& other) const noexcept {
        return *this == other && build == other.build;
    }

    [[nodiscard]] [[maybe_unused]] static constexpr bool valid(std::string_view str) noexcept {
        return Version{}.from_string_noexcept(str);
    }
};

template <class J, class T>
[[nodiscard]] inline Expected<J> serialize(T&& ver) noexcept
    requires(std::same_as<std::remove_cvref_t<T>, Version>)
try {
    return ver.to_string();
} catch (...) {
    return makeExceptionError();
}

template <class T, class J>
[[nodiscard]] inline Expected<> deserialize(T& ver, J const& j) noexcept
    requires(std::same_as<T, Version>)
{
    if (!j.is_string()) {
        return reflection::makeDeserStringTypeError();
    }
    if (auto result = ver.from_string_noexcept((std::string const&)j); result) {
        return {};
    } else {
        return makeErrorCodeError(result.ec);
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

namespace std {
template <>
struct hash<ll::data::PreRelease> {
    size_t operator()(ll::data::PreRelease const& preRelease) const noexcept {
        return ll::hash_utils::HashCombiner{preRelease.values.size()}.addRange(preRelease.values);
    }
};

template <>
struct hash<ll::data::Version> {
    size_t operator()(ll::data::Version const& version) const noexcept {
        return ll::hash_utils::HashCombiner{version.major}
            .add(version.minor)
            .add(version.patch)
            .add(version.preRelease);
    }
};
} // namespace std
