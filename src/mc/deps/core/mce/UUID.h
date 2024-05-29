#pragma once

#include "ll/api/utils/HashUtils.h"
#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    uint64 a, b;

    [[nodiscard]] constexpr UUID(uint64 a = 0, uint64 b = 0) : a(a), b(b) {}

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
    // symbol: ?asString@UUID@mce@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string asString() const;

    // symbol: ?isEmpty@UUID@mce@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ??MUUID@mce@@QEBA_NAEBV01@@Z
    MCAPI bool operator<(class mce::UUID const&) const;

    // symbol: ?canParse@UUID@mce@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool canParse(std::string const& in);

    // symbol: ?fromString@UUID@mce@@SA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class mce::UUID fromString(std::string const& in);

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
    size_t operator()(mce::UUID const& id) const noexcept { return id.a ^ (522133279 * id.b); }
};
} // namespace std
