#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    uint64 a, b;

    [[nodiscard]] constexpr UUID(uint64 a = 0, uint64 b = 0) noexcept : a(a), b(b) {}

    [[nodiscard]] inline UUID(std::string const& uuidStr) : UUID(fromString(uuidStr)) {}

    [[nodiscard]] inline UUID(std::string_view uuidStr) : UUID(fromString(std::string{uuidStr})) {}

    LLNDAPI static mce::UUID random();

    [[nodiscard]] inline mce::UUID fromStringHash(std::string_view sv) {
        return {ll::hash_utils::doHash(sv), ll::hash_utils::doHash2(sv)};
    }

    [[nodiscard]] inline explicit operator bool() const { return !isEmpty(); }

    [[nodiscard]] inline explicit operator std::string() const { return asString(); }

    [[nodiscard]] constexpr bool operator==(UUID const& other) const { return (a == other.a) && (b == other.b); }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string asString() const;

    MCAPI bool isEmpty() const;

    MCAPI bool operator<(::mce::UUID const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canParse(::std::string const& in);

    MCAPI static ::mce::UUID fromString(::std::string const& in);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID& EMPTY();

    MCAPI static uint64& STRING_LENGTH();
    // NOLINTEND
};

} // namespace mce

namespace std {
template <>
struct hash<mce::UUID> {
    size_t operator()(mce::UUID const& id) const noexcept { return id.a ^ (522133279 * id.b); }
};
} // namespace std
