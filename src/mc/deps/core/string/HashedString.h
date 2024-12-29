#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {
public:
    [[nodiscard]] static constexpr uint64 computeHash(std::string_view str) {
        if (str.empty()) return 0;
        uint64 hash = 0xCBF29CE484222325ull;
        for (char s : str) {
            hash = s ^ (0x100000001B3ull * hash);
        }
        return hash;
    }

    // Constructors
    [[nodiscard]] constexpr HashedString(std::nullptr_t = nullptr) noexcept : mStrHash(0), mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(uint64 h, char const* mStr) noexcept
    : mStrHash(h),
      mStr(mStr),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(std::string_view mStr) noexcept
    : mStrHash(computeHash(mStr)),
      mStr(mStr),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(std::string&& s) noexcept
    : mStrHash(computeHash(s)),
      mStr(std::move(s)),
      mLastMatch(nullptr) {}
    [[nodiscard]] constexpr HashedString(char const* mStr) noexcept : HashedString(std::string{mStr}) {}

    [[nodiscard]] constexpr HashedString(HashedString const& other) noexcept
    : mStrHash(other.mStrHash),
      mStr(other.mStr),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(HashedString&& other) noexcept
    : mStrHash(other.mStrHash),
      mStr(std::move(other.mStr)),
      mLastMatch(other.mLastMatch) {
        other.mStrHash   = 0;
        other.mLastMatch = nullptr;
    }

    [[nodiscard]] constexpr HashedString& operator=(HashedString const& other) noexcept {
        if (this == &other) {
            return *this;
        }
        mStrHash   = other.mStrHash;
        mStr       = other.mStr;
        mLastMatch = nullptr;
        return *this;
    }

    [[nodiscard]] constexpr HashedString& operator=(HashedString&& other) noexcept {
        if (this == &other) {
            return *this;
        }
        mStrHash         = other.mStrHash;
        mStr             = std::move(other.mStr);
        mLastMatch       = other.mLastMatch;
        other.mStrHash   = 0;
        other.mLastMatch = nullptr;
        return *this;
    }

    // Accessors
    [[nodiscard]] constexpr char const* c_str() const noexcept { return mStr.c_str(); }

    [[nodiscard]] constexpr std::string const& getString() const noexcept { return mStr; }

    [[nodiscard]] constexpr uint64 getHash() const noexcept { return mStrHash; }

    [[nodiscard]] constexpr bool empty() const noexcept { return mStr.empty(); }

    // Mutators
    constexpr void clear() noexcept {
        mStrHash = 0;
        mStr.clear();
        mLastMatch = nullptr;
    }

    // Operators
    template <typename StringType>
    [[nodiscard]] constexpr bool operator==(StringType const& rhs) const noexcept {
        return mStr == rhs;
    }

    [[nodiscard]] constexpr bool operator==(HashedString const& other) const noexcept {
        if (mStrHash == other.mStrHash) {
            if (mLastMatch == std::addressof(other) && other.mLastMatch == this) {
                return true;
            }
            if (mStr == other.mStr) {
                mLastMatch       = std::addressof(other);
                other.mLastMatch = this;
                return true;
            }
        }
        mLastMatch = nullptr;
        return false;
    }

    template <typename StringType>
    [[nodiscard]] constexpr bool operator!=(StringType const& rhs) const noexcept {
        return mStr != rhs;
    }

    [[nodiscard]] constexpr bool operator!=(HashedString const& other) const noexcept { return !(*this == other); }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(HashedString const& other) const noexcept {
        if (mStrHash != other.mStrHash) {
            return mStrHash <=> other.mStrHash;
        }
        return mStr <=> other.mStr;
    }

    // Convertors
    [[nodiscard]] constexpr operator std::string const&() const { return mStr; }

    [[nodiscard]] constexpr operator std::string_view() const { return std::string_view(mStr); }

public:
    // member variables
    // NOLINTBEGIN
    uint64                        mStrHash;
    ::std::string                 mStr;
    mutable ::HashedString const* mLastMatch;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getEmptyString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString& defaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(nullptr_t);

    MCAPI void* $ctor(::HashedString&& rhs);

    MCAPI void* $ctor(::HashedString const& rhs);

    MCAPI void* $ctor(::std::string const& str);

    MCAPI void* $ctor(char const* str);

    MCAPI void* $ctor(::std::string_view str);

    MCAPI void* $ctor(uint64 hash, char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

namespace std {

template <>
struct hash<HashedString> {
    size_t operator()(HashedString const& str) const noexcept { return str.getHash(); }
};

} // namespace std
