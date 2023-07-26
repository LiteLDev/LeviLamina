#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {

public:
    // prevent constructor by default
    UUID& operator=(UUID const&) = delete;
    UUID(UUID const&)            = delete;
    UUID()                       = delete;

public:
    /**
     * @symbol ?asString\@UUID\@mce\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const; // NOLINT
    /**
     * @symbol ?isEmpty\@UUID\@mce\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol
     * ?canParse\@UUID\@mce\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool canParse(std::string const&); // NOLINT
    /**
     * @symbol
     * ?fromString\@UUID\@mce\@\@SA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class mce::UUID fromString(std::string const&); // NOLINT
    /**
     * @symbol
     * ?seedFromString\@UUID\@mce\@\@SA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class mce::UUID seedFromString(std::string const&); // NOLINT
    /**
     * @symbol ?EMPTY\@UUID\@mce\@\@2V12\@A
     */
    MCAPI static class mce::UUID EMPTY; // NOLINT
    /**
     * @symbol ?STRING_LENGTH\@UUID\@mce\@\@2_KA
     */
    MCAPI static unsigned __int64 STRING_LENGTH; // NOLINT
};

}; // namespace mce
