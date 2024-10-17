#pragma once

#include "ll/api/utils/HashUtils.h"
#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    uint64 a, b;

    [[nodiscard]] constexpr UUID(uint64 a = 0, uint64 b = 0) noexcept : a(a), b(b) {}

    [[nodiscard]] inline UUID(std::string const& uuidStr) : UUID(fromString(uuidStr)) {} // NOLINT

    [[nodiscard]] inline UUID(std::string_view uuidStr) : UUID(fromString(std::string{uuidStr})) {} // NOLINT

    LLNDAPI static mce::UUID random();

    [[nodiscard]] inline mce::UUID fromStringHash(std::string_view sv) {
        return {ll::hash_utils::doHash(sv), ll::hash_utils::doHash2(sv)};
    }

    [[nodiscard]] inline explicit operator bool() const { return !isEmpty(); }

    [[nodiscard]] inline explicit operator std::string() const { return asString(); }

    [[nodiscard]] constexpr bool operator==(UUID const& other) const { return (a == other.a) && (b == other.b); }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(UUID const& other) const {
        if (a != other.a) {
            return a <=> other.a;
        }
        return b <=> other.b;
    }

public:
    // NOLINTBEGIN
    MCAPI std::string asString() const;

    MCAPI bool isEmpty() const;

    MCAPI bool operator<(class mce::UUID const& rhs) const;

    MCAPI static bool canParse(std::string const& in);

    MCAPI static class mce::UUID fromString(std::string const& in);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class mce::UUID& EMPTY();

    MCAPI static uint64& STRING_LENGTH();

    // NOLINTEND
};

}; // namespace mce

namespace std {
template <>
struct hash<mce::UUID> {
    size_t operator()(mce::UUID const& id) const noexcept { return id.a ^ (522133279 * id.b); }
};
} // namespace std
