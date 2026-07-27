#pragma once

#include <algorithm>
#include <compare>
#include <concepts>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <optional>
#include <ranges>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

#include "ll/api/data/Version.h"
#include "ll/api/reflection/ReflectionError.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::data {

struct VersionRequirement {
    enum class Operator : std::uint8_t {
        Equal,
        Greater,
        GreaterEqual,
        Less,
        LessEqual,
    };

    struct Comparator {
        Operator operation;
        Version  version;

        [[nodiscard]] constexpr bool operator==(Comparator const&) const noexcept = default;
    };

    using ComparatorSet = std::vector<Comparator>;

private:
    struct PartialVersion {
        std::optional<std::uint16_t> major;
        std::optional<std::uint16_t> minor;
        std::optional<std::uint16_t> patch;
        std::optional<Version>       exact;
        std::uint8_t                 precision{};
    };

    std::vector<ComparatorSet> alternatives{{}};

    static constexpr bool isWhitespace(char c) noexcept { return c == ' ' || c == '\t' || c == '\r' || c == '\n'; }

    static constexpr bool isWildcard(std::string_view value) noexcept {
        return value == "*" || value == "x" || value == "X";
    }

    static constexpr std::string_view trim(std::string_view value) noexcept {
        while (!value.empty() && isWhitespace(value.front())) {
            value.remove_prefix(1);
        }
        while (!value.empty() && isWhitespace(value.back())) {
            value.remove_suffix(1);
        }
        return value;
    }

    static constexpr bool parseNumber(std::string_view value, std::uint16_t& result) noexcept {
        if (value.empty() || (value.size() > 1 && value.front() == '0')) {
            return false;
        }
        auto parsed = detail::from_chars(value.data(), value.data() + value.size(), result);
        return parsed && parsed.ptr == value.data() + value.size();
    }

    static constexpr bool parsePartial(std::string_view value, PartialVersion& result) noexcept {
        value = trim(value);
        if (value.empty()) {
            return false;
        }

        auto suffix = value.find_first_of("-+");
        if (suffix != std::string_view::npos) {
            if (!Version::valid(value)) {
                return false;
            }
            Version version{value};
            result.major     = version.major;
            result.minor     = version.minor;
            result.patch     = version.patch;
            result.exact     = std::move(version);
            result.precision = 3;
            return true;
        }

        std::vector<std::string_view> parts;
        size_t                        begin = 0;
        while (begin <= value.size()) {
            auto end = value.find('.', begin);
            if (end == std::string_view::npos) {
                end = value.size();
            }
            parts.emplace_back(value.substr(begin, end - begin));
            if (end == value.size()) {
                break;
            }
            begin = end + 1;
        }
        if (parts.empty() || parts.size() > 3) {
            return false;
        }

        bool wildcardFound = false;
        for (size_t i = 0; i < parts.size(); ++i) {
            if (isWildcard(parts[i])) {
                wildcardFound = true;
                continue;
            }
            if (wildcardFound) {
                return false;
            }

            std::uint16_t number{};
            if (!parseNumber(parts[i], number)) {
                return false;
            }
            if (i == 0) {
                result.major = number;
            } else if (i == 1) {
                result.minor = number;
            } else {
                result.patch = number;
            }
            result.precision = static_cast<std::uint8_t>(i + 1);
        }

        if (result.precision == 3) {
            result.exact = Version{*result.major, *result.minor, *result.patch};
        }
        return true;
    }

    static constexpr Version floor(PartialVersion const& partial) noexcept {
        return Version{partial.major.value_or(0), partial.minor.value_or(0), partial.patch.value_or(0)};
    }

    static constexpr std::optional<Version> nextMajor(Version const& version) noexcept {
        if (version.major == (std::numeric_limits<std::uint16_t>::max)()) {
            return std::nullopt;
        }
        return Version{static_cast<std::uint16_t>(version.major + 1), 0, 0};
    }

    static constexpr std::optional<Version> nextMinor(Version const& version) noexcept {
        if (version.minor != (std::numeric_limits<std::uint16_t>::max)()) {
            return Version{version.major, static_cast<std::uint16_t>(version.minor + 1), 0};
        }
        return nextMajor(version);
    }

    static constexpr std::optional<Version> nextPatch(Version const& version) noexcept {
        if (version.patch != (std::numeric_limits<std::uint16_t>::max)()) {
            return Version{version.major, version.minor, static_cast<std::uint16_t>(version.patch + 1)};
        }
        return nextMinor(version);
    }

    static constexpr void addComparator(ComparatorSet& set, Operator operation, Version version) {
        version.build.reset();
        set.emplace_back(operation, std::move(version));
    }

    static constexpr void addUpperBound(ComparatorSet& set, std::optional<Version> upper) {
        if (upper) {
            addComparator(set, Operator::Less, std::move(*upper));
        }
    }

    static constexpr bool expandPartial(ComparatorSet& set, PartialVersion const& partial) {
        if (!partial.major) {
            return true;
        }
        auto lower = floor(partial);
        if (partial.exact) {
            addComparator(set, Operator::Equal, *partial.exact);
        } else {
            addComparator(set, Operator::GreaterEqual, lower);
            if (!partial.minor) {
                addUpperBound(set, nextMajor(lower));
            } else {
                addUpperBound(set, nextMinor(lower));
            }
        }
        return true;
    }

    static constexpr bool expandComparator(ComparatorSet& set, std::string_view token) noexcept try {
        enum class Prefix {
            Bare,
            Equal,
            Greater,
            GreaterEqual,
            Less,
            LessEqual,
            Caret,
            Tilde,
        };

        Prefix prefix = Prefix::Bare;
        if (token.starts_with(">=")) {
            prefix = Prefix::GreaterEqual;
            token.remove_prefix(2);
        } else if (token.starts_with("<=")) {
            prefix = Prefix::LessEqual;
            token.remove_prefix(2);
        } else if (token.starts_with('>')) {
            prefix = Prefix::Greater;
            token.remove_prefix(1);
        } else if (token.starts_with('<')) {
            prefix = Prefix::Less;
            token.remove_prefix(1);
        } else if (token.starts_with('=')) {
            prefix = Prefix::Equal;
            token.remove_prefix(1);
        } else if (token.starts_with('^')) {
            prefix = Prefix::Caret;
            token.remove_prefix(1);
        } else if (token.starts_with('~')) {
            prefix = Prefix::Tilde;
            token.remove_prefix(1);
        }
        if (token.empty()) {
            return false;
        }

        PartialVersion partial;
        if (!parsePartial(token, partial)) {
            return false;
        }
        if (!partial.major) {
            return prefix == Prefix::Bare || prefix == Prefix::Equal;
        }

        auto lower = floor(partial);
        switch (prefix) {
        case Prefix::Bare:
            if (partial.exact) {
                // TODO: Treat bare full versions as exact matches in the next breaking release.
                addComparator(set, Operator::GreaterEqual, *partial.exact);
                addUpperBound(set, nextMajor(*partial.exact));
                return true;
            }
            return expandPartial(set, partial);
        case Prefix::Equal:
            return expandPartial(set, partial);
        case Prefix::GreaterEqual:
            addComparator(set, Operator::GreaterEqual, partial.exact.value_or(lower));
            return true;
        case Prefix::Greater:
            if (partial.exact) {
                addComparator(set, Operator::Greater, *partial.exact);
            } else {
                auto upper = !partial.minor ? nextMajor(lower) : nextMinor(lower);
                if (!upper) {
                    return false;
                }
                addComparator(set, Operator::GreaterEqual, *upper);
            }
            return true;
        case Prefix::Less:
            addComparator(set, Operator::Less, partial.exact.value_or(lower));
            return true;
        case Prefix::LessEqual:
            if (partial.exact) {
                addComparator(set, Operator::LessEqual, *partial.exact);
            } else {
                auto upper = !partial.minor ? nextMajor(lower) : nextMinor(lower);
                if (!upper) {
                    return false;
                }
                addComparator(set, Operator::Less, *upper);
            }
            return true;
        case Prefix::Caret: {
            addComparator(set, Operator::GreaterEqual, partial.exact.value_or(lower));
            if (!partial.minor || lower.major != 0) {
                addUpperBound(set, nextMajor(lower));
            } else if (!partial.patch || lower.minor != 0) {
                addUpperBound(set, nextMinor(lower));
            } else {
                addUpperBound(set, nextPatch(lower));
            }
            return true;
        }
        case Prefix::Tilde:
            addComparator(set, Operator::GreaterEqual, partial.exact.value_or(lower));
            if (!partial.minor) {
                addUpperBound(set, nextMajor(lower));
            } else {
                addUpperBound(set, nextMinor(lower));
            }
            return true;
        }
        return false;
    } catch (...) {
        return false;
    }

    static constexpr bool
    expandHyphen(ComparatorSet& set, std::string_view lowerText, std::string_view upperText) noexcept try {
        PartialVersion lowerPartial;
        PartialVersion upperPartial;
        if (!parsePartial(lowerText, lowerPartial) || !parsePartial(upperText, upperPartial) || !lowerPartial.major
            || !upperPartial.major) {
            return false;
        }

        addComparator(set, Operator::GreaterEqual, lowerPartial.exact.value_or(floor(lowerPartial)));
        auto upper = floor(upperPartial);
        if (upperPartial.exact) {
            addComparator(set, Operator::LessEqual, *upperPartial.exact);
        } else if (!upperPartial.minor) {
            addUpperBound(set, nextMajor(upper));
        } else {
            addUpperBound(set, nextMinor(upper));
        }
        return true;
    } catch (...) {
        return false;
    }

    static constexpr std::vector<std::string_view> tokenize(std::string_view value) {
        std::vector<std::string_view> result;
        size_t                        current = 0;
        while (current < value.size()) {
            while (current < value.size() && isWhitespace(value[current])) {
                ++current;
            }
            if (current == value.size()) {
                break;
            }
            auto begin = current;
            while (current < value.size() && !isWhitespace(value[current])) {
                ++current;
            }
            result.emplace_back(value.substr(begin, current - begin));
        }
        return result;
    }

    static constexpr bool comparatorLess(Comparator const& lhs, Comparator const& rhs) noexcept {
        if (lhs.operation != rhs.operation) {
            return lhs.operation < rhs.operation;
        }
        return lhs.version < rhs.version;
    }

    constexpr void normalize() {
        for (auto& set : alternatives) {
            std::ranges::sort(set, comparatorLess);
            set.erase(std::unique(set.begin(), set.end()), set.end());
        }
        std::ranges::sort(alternatives, [](ComparatorSet const& lhs, ComparatorSet const& rhs) {
            return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), comparatorLess);
        });
        alternatives.erase(std::unique(alternatives.begin(), alternatives.end()), alternatives.end());
    }

    [[nodiscard]] static constexpr bool compare(Version const& candidate, Comparator const& comparator) noexcept {
        switch (comparator.operation) {
        case Operator::Equal:
            return candidate == comparator.version;
        case Operator::Greater:
            return candidate > comparator.version;
        case Operator::GreaterEqual:
            return candidate >= comparator.version;
        case Operator::Less:
            return candidate < comparator.version;
        case Operator::LessEqual:
            return candidate <= comparator.version;
        }
        return false;
    }

    [[nodiscard]] static constexpr bool allowsPreRelease(ComparatorSet const& set, Version const& candidate) noexcept {
        if (!candidate.preRelease) {
            return true;
        }
        return std::ranges::any_of(set, [&](Comparator const& comparator) {
            auto const& version = comparator.version;
            return version.preRelease && version.major == candidate.major && version.minor == candidate.minor
                && version.patch == candidate.patch;
        });
    }

public:
    constexpr VersionRequirement()  = default;
    constexpr ~VersionRequirement() = default;
    explicit constexpr VersionRequirement(std::string_view str) { from_string(str); }

    [[nodiscard]] constexpr detail::from_chars_result from_chars(char const* first, char const* last) noexcept {
        if (first == nullptr || last == nullptr || first > last) {
            return {first, std::errc::invalid_argument};
        }
        try {
            std::string_view           input{first, static_cast<size_t>(last - first)};
            std::vector<ComparatorSet> parsedAlternatives;

            if (trim(input).empty()) {
                parsedAlternatives.emplace_back();
            } else {
                size_t begin = 0;
                while (begin <= input.size()) {
                    auto end = input.find("||", begin);
                    if (end == std::string_view::npos) {
                        end = input.size();
                    }
                    auto group = trim(input.substr(begin, end - begin));
                    if (group.empty()) {
                        return {first + begin, std::errc::invalid_argument};
                    }

                    auto          tokens = tokenize(group);
                    ComparatorSet comparators;
                    for (size_t i = 0; i < tokens.size();) {
                        if (i + 2 < tokens.size() && tokens[i + 1] == "-") {
                            if (!expandHyphen(comparators, tokens[i], tokens[i + 2])) {
                                return {first + begin, std::errc::invalid_argument};
                            }
                            i += 3;
                            continue;
                        }

                        std::string combined;
                        auto        token = tokens[i];
                        if ((token == ">" || token == ">=" || token == "<" || token == "<=" || token == "="
                             || token == "^" || token == "~")
                            && i + 1 < tokens.size()) {
                            combined = std::string{token} + std::string{tokens[++i]};
                            token    = combined;
                        }
                        if (!expandComparator(comparators, token)) {
                            return {first + begin, std::errc::invalid_argument};
                        }
                        ++i;
                    }
                    parsedAlternatives.emplace_back(std::move(comparators));
                    if (end == input.size()) {
                        break;
                    }
                    begin = end + 2;
                }
            }

            alternatives = std::move(parsedAlternatives);
            normalize();
            return {last, std::errc{}};
        } catch (...) {
            return {first, std::errc::not_enough_memory};
        }
    }

    [[nodiscard]] constexpr detail::from_chars_result from_string_noexcept(std::string_view str) noexcept {
        return from_chars(str.data(), str.data() + str.size());
    }

    constexpr VersionRequirement& from_string(std::string_view str) {
        from_string_noexcept(str).value();
        return *this;
    }

    [[nodiscard]] constexpr bool matches(Version const& version) const noexcept {
        return std::ranges::any_of(alternatives, [&](ComparatorSet const& set) {
            return allowsPreRelease(set, version)
                && std::ranges::all_of(set, [&](Comparator const& comparator) { return compare(version, comparator); });
        });
    }

    [[nodiscard]] constexpr std::vector<ComparatorSet> const& comparatorSets() const noexcept { return alternatives; }

    [[nodiscard]] constexpr std::string to_string() const {
        auto operatorString = [](Operator operation) -> std::string_view {
            switch (operation) {
            case Operator::Equal:
                return "=";
            case Operator::Greater:
                return ">";
            case Operator::GreaterEqual:
                return ">=";
            case Operator::Less:
                return "<";
            case Operator::LessEqual:
                return "<=";
            }
            return {};
        };

        std::string result;
        for (auto const& set : alternatives) {
            if (!result.empty()) {
                result += " || ";
            }
            if (set.empty()) {
                result += '*';
                continue;
            }
            for (auto const& comparator : set) {
                if (!result.empty() && !result.ends_with(" || ")) {
                    result += ' ';
                }
                result += operatorString(comparator.operation);
                result += comparator.version.to_string();
            }
        }
        return result;
    }

    [[nodiscard]] constexpr bool operator==(VersionRequirement const& other) const noexcept {
        return alternatives == other.alternatives;
    }

    [[nodiscard]] static constexpr bool valid(std::string_view str) noexcept {
        return VersionRequirement{}.from_string_noexcept(str);
    }
};

template <class J, class T>
[[nodiscard]] inline Expected<J> serialize(T&& requirement) noexcept
    requires(std::same_as<std::remove_cvref_t<T>, VersionRequirement>)
try {
    return requirement.to_string();
} catch (...) {
    return makeExceptionError();
}

template <class T, class J>
[[nodiscard]] inline Expected<> deserialize(T& requirement, J const& j) noexcept
    requires(std::same_as<T, VersionRequirement>)
{
    if (!j.is_string()) {
        return reflection::makeDeserStringTypeError();
    }
    if (auto result = requirement.from_string_noexcept((std::string const&)j); result) {
        return {};
    } else {
        return makeErrorCodeError(result.ec);
    }
}

} // namespace ll::data

namespace std {
template <>
struct hash<ll::data::VersionRequirement::Comparator> {
    size_t operator()(ll::data::VersionRequirement::Comparator const& comparator) const noexcept {
        return ll::hash_utils::HashCombiner{}
            .add(static_cast<std::uint8_t>(comparator.operation))
            .add(comparator.version);
    }
};

template <>
struct hash<ll::data::VersionRequirement> {
    size_t operator()(ll::data::VersionRequirement const& requirement) const noexcept {
        ll::hash_utils::HashCombiner result;
        for (auto const& set : requirement.comparatorSets()) {
            result.add(set.size()).addRange(set);
        }
        return result;
    }
};
} // namespace std
