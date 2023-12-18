#pragma once

#include "ll/api/base/Hash.h"
#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    uint64 a, b;

    UUID(uint64 a, uint64 b) : a(a), b(b) {}

    UUID() : UUID(EMPTY) {}

    UUID(std::string const& str) : UUID(fromString(str)) {} // NOLINT

    LLNDAPI static mce::UUID random();

    [[nodiscard]] inline explicit operator bool() const { return !isEmpty(); }

    [[nodiscard]] inline explicit operator std::string() const { return asString(); }

    bool operator==(UUID const& other) const { return (a == other.a) && (b == other.b); }

    std::strong_ordering operator<=>(UUID const& other) const {
        if (a != other.a) {
            return a <=> other.a;
        }
        return b <=> other.b;
    }

public:
    // NOLINTBEGIN
    // symbol: ?asString@UUID@mce@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string asString() const;

    // symbol: ?isEmpty@UUID@mce@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?canParse@UUID@mce@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool canParse(std::string const&);

    // symbol: ?fromString@UUID@mce@@SA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class mce::UUID fromString(std::string const&);

    // symbol: ?EMPTY@UUID@mce@@2V12@A
    MCAPI static class mce::UUID EMPTY;

    // symbol: ?STRING_LENGTH@UUID@mce@@2_KA
    MCAPI static uint64 STRING_LENGTH;

    // NOLINTEND
};

}; // namespace mce


namespace std {
template <>
struct hash<mce::UUID> {
    size_t operator()(mce::UUID id) const noexcept {
        size_t hash = id.a;
        ll::hash::hashCombine(id.b, hash);
        return hash;
    }
};
} // namespace std