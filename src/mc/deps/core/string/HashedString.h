#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {
public:
    uint64                      hash;
    std::string                 str;
    mutable HashedString const* lastMatch;

    [[nodiscard]] constexpr static uint64 computeHash(std::string_view str) {
        if (str.empty()) return 0;
        uint64 hash = 0xCBF29CE484222325ULL;
        for (char s : str) {
            hash = s ^ (0x100000001B3ULL * hash);
        }
        return hash;
    }

    // Constructors
    [[nodiscard]] constexpr HashedString(std::nullptr_t = nullptr) noexcept : hash(0), lastMatch(nullptr) {} // NOLINT

    [[nodiscard]] constexpr HashedString(uint64 h, char const* str) noexcept : hash(h), str(str), lastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(std::string_view str) noexcept
    : hash(computeHash(str)),
      str(str),
      lastMatch(nullptr) {} // NOLINT

    [[nodiscard]] constexpr HashedString(std::string&& s) noexcept // NOLINT
    : hash(computeHash(s)),
      str(std::move(s)),
      lastMatch(nullptr) {}
    [[nodiscard]] constexpr HashedString(char const* str) noexcept : HashedString(std::string{str}) {} // NOLINT

    [[nodiscard]] constexpr HashedString(HashedString const& other) noexcept
    : hash(other.hash),
      str(other.str),
      lastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(HashedString&& other) noexcept
    : hash(other.hash),
      str(std::move(other.str)),
      lastMatch(other.lastMatch) {
        other.hash      = 0;
        other.lastMatch = nullptr;
    }

    [[nodiscard]] constexpr HashedString& operator=(HashedString const& other) noexcept {
        if (this == &other) {
            return *this;
        }
        hash      = other.hash;
        str       = other.str;
        lastMatch = nullptr;
        return *this;
    }

    [[nodiscard]] constexpr HashedString& operator=(HashedString&& other) noexcept {
        if (this == &other) {
            return *this;
        }
        hash            = other.hash;
        str             = std::move(other.str);
        lastMatch       = other.lastMatch;
        other.hash      = 0;
        other.lastMatch = nullptr;
        return *this;
    }

    // Accessors
    [[nodiscard]] constexpr char const* c_str() const noexcept { return str.c_str(); }

    [[nodiscard]] constexpr std::string const& getString() const noexcept { return str; }

    [[nodiscard]] constexpr uint64 getHash() const noexcept { return hash; }

    [[nodiscard]] constexpr bool isEmpty() const noexcept { return str.empty(); }

    // Mutators
    constexpr void clear() noexcept {
        hash = 0;
        str.clear();
        lastMatch = nullptr;
    }

    // Operators
    template <typename StringType>
    [[nodiscard]] constexpr bool operator==(StringType const& rhs) const noexcept {
        return str == rhs;
    }

    [[nodiscard]] constexpr bool operator==(HashedString const& other) const noexcept {
        if (hash == other.hash) {
            if (lastMatch == std::addressof(other) && other.lastMatch == this) {
                return true;
            }
            if (str == other.str) {
                lastMatch       = std::addressof(other);
                other.lastMatch = this;
                return true;
            }
        }
        lastMatch = nullptr;
        return false;
    }

    template <typename StringType>
    [[nodiscard]] constexpr bool operator!=(StringType const& rhs) const noexcept {
        return str != rhs;
    }

    [[nodiscard]] constexpr bool operator!=(HashedString const& other) const noexcept { return !(*this == other); }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(HashedString const& other) const noexcept {
        if (hash != other.hash) {
            return hash <=> other.hash;
        }
        return str <=> other.str;
    }

    // Convertors
    [[nodiscard]] constexpr operator std::string const&() const { return str; } // NOLINT

    [[nodiscard]] constexpr operator std::string_view() const { return std::string_view(str); } // NOLINT

public:
    // NOLINTBEGIN
    // symbol: ?getEmptyString@HashedString@@SAAEBV1@XZ
    MCAPI static class HashedString const& getEmptyString();

    // symbol: ?defaultErrorValue@HashedString@@2V1@A
    MCAPI static class HashedString defaultErrorValue;

    // NOLINTEND
};


namespace std {

template <>
struct hash<HashedString> {
    size_t operator()(HashedString const& str) const noexcept { return str.getHash(); }
};

} // namespace std
