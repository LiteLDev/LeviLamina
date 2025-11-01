#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    uint64 a, b;

    [[nodiscard]] constexpr UUID(uint64 a = 0, uint64 b = 0) noexcept : a(a), b(b) {}

    [[nodiscard]] inline explicit UUID(std::string const& uuidStr) : UUID(fromString(uuidStr)) {}

    [[nodiscard]] inline explicit UUID(std::string_view uuidStr) : UUID(fromString(std::string{uuidStr})) {}

    LLNDAPI static mce::UUID random();

    [[nodiscard]] inline static mce::UUID fromStringHash(std::string_view sv) {
        return {ll::hash_utils::doHash(sv), ll::hash_utils::doHash2(sv)};
    }

    [[nodiscard]] inline explicit operator bool() const { return a != 0 && b != 0; }

    [[nodiscard]] inline explicit operator std::string() const { return asString(); }

    [[nodiscard]] constexpr bool operator==(UUID const& other) const { return (a == other.a) && (b == other.b); }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(UUID const& other) const {
        if (a != other.a) {
            return a <=> other.a;
        }
        return b <=> other.b;
    }

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::string asString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canParse(::std::string_view in);

    MCAPI static ::mce::UUID fromString(::std::string_view in);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID& EMPTY();

    MCAPI static uint64& STRING_LENGTH();
    // NOLINTEND

};

}

namespace std {
template <>
struct hash<mce::UUID> {
    size_t operator()(mce::UUID const& id) const noexcept { return id.a ^ (522133279 * id.b); }
};
} // namespace std
