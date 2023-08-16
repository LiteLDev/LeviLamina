#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {

public:
    uint64_t a, b;

    explicit constexpr operator bool() const { return !isEmpty(); }
    UUID() = delete;
    // LLAPI UUID();
    UUID(uint64_t a, uint64_t b) : a(a), b(b) {}

public:
    // NOLINTBEGIN
    /**
     * @symbol ?asString\@UUID\@mce\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @symbol ?isEmpty\@UUID\@mce\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol
     * ?canParse\@UUID\@mce\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool canParse(std::string const&);
    /**
     * @symbol
     * ?fromString\@UUID\@mce\@\@SA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class mce::UUID fromString(std::string const&);
    /**
     * @symbol
     * ?seedFromString\@UUID\@mce\@\@SA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class mce::UUID seedFromString(std::string const&);
    /**
     * @symbol ?EMPTY\@UUID\@mce\@\@2V12\@A
     */
    MCAPI static class mce::UUID EMPTY;
    /**
     * @symbol ?STRING_LENGTH\@UUID\@mce\@\@2_KA
     */
    MCAPI static uint64_t STRING_LENGTH;
    // NOLINTEND
};

}; // namespace mce
