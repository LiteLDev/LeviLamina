#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {

public:
    uint64_t            hash;
    std::string         str;
    class HashedString* lastMatch;

    constexpr static unsigned long long computeHash(std::string_view str) {
        unsigned long long hash = 0xCBF29CE484222325ULL;
        for (char s : str) {
            hash = s ^ (0x100000001B3ULL * hash);
        }
        return hash;
    }

    // Constructors
    constexpr HashedString(std::nullptr_t = nullptr) noexcept : hash(0), lastMatch(nullptr) {} // NOLINT

    constexpr HashedString(uint64_t h, const char* str) noexcept : hash(h), str(str), lastMatch(nullptr) {}

    constexpr HashedString(const char* str) noexcept : hash(computeHash(str)), str(str), lastMatch(nullptr) {} // NOLINT

    constexpr HashedString(const std::string& str) noexcept // NOLINT
    : hash(computeHash(str)), str(str), lastMatch(nullptr) {}

    constexpr HashedString(const HashedString& other) noexcept : hash(other.hash), str(other.str), lastMatch(nullptr) {}

    constexpr HashedString(HashedString&& other) noexcept
    : hash(other.hash), str(std::move(other.str)), lastMatch(other.lastMatch) {
        other.hash      = 0;
        other.lastMatch = nullptr;
    }

    [[nodiscard]] constexpr HashedString& operator=(const HashedString& other) noexcept {
        if (this == &other) {
            return *this;
        }
        hash      = other.hash;
        str       = other.str;
        lastMatch = nullptr;
        return *this;
    }

    [[nodiscard]] constexpr HashedString& operator=(HashedString&& other) noexcept {
        hash            = other.hash;
        str             = std::move(other.str);
        lastMatch       = other.lastMatch;
        other.hash      = 0;
        other.lastMatch = nullptr;
        return *this;
    }

    // Accessors
    [[nodiscard]] constexpr const char* c_str() const noexcept { return str.c_str(); }

    [[nodiscard]] constexpr const std::string& getString() const noexcept { return str; }

    [[nodiscard]] constexpr uint64_t getHash() const noexcept { return hash; }

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

    [[nodiscard]] constexpr bool operator==(const HashedString& other) const noexcept { return hash == other.hash; }

    template <typename StringType>
    [[nodiscard]] constexpr bool operator!=(StringType const& rhs) const noexcept {
        return str != rhs;
    }

    [[nodiscard]] constexpr bool operator!=(const HashedString& other) const noexcept { return hash != other.hash; }

    template <typename StringType>
    constexpr std::strong_ordering operator<=>(const StringType& other) const noexcept {
        return str <=> other.str;
    }

    constexpr std::strong_ordering operator<=>(const HashedString& other) const noexcept { return str <=> other.str; }

    // Convertors
    constexpr explicit operator std::string() const { return str; }

    constexpr explicit operator std::string_view() const { return std::string_view(str); }

public:
    // NOLINTBEGIN
    /**
     * @symbol ?bindType\@HashedString\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getEmptyString\@HashedString\@\@SAAEBV1\@XZ
     */
    MCAPI static class HashedString const& getEmptyString();
    /**
     * @symbol ?defaultErrorValue\@HashedString\@\@2V1\@A
     */
    MCAPI static class HashedString defaultErrorValue;
    // NOLINTEND
};


namespace std {

template <>
struct hash<HashedString> {
    std::size_t operator()(HashedString const& str) const noexcept { return str.getHash(); }
};

} // namespace std