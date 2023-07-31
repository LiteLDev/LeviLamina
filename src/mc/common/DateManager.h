#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DateManager {
public:
    // DateManager inner types define
    enum class TimeZoneType {};

public:
    // prevent constructor by default
    DateManager& operator=(DateManager const&) = delete;
    DateManager(DateManager const&)            = delete;
    DateManager()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getCurrentTimestampFileName\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getCurrentTimestampFileName();
    /**
     * @symbol ?getRealTime\@DateManager\@\@SA_JXZ
     */
    MCAPI static int64_t getRealTime();
    /**
     * @symbol ?toDateTime\@DateManager\@\@SA?AUtm\@\@_JW4TimeZoneType\@1\@\@Z
     */
    MCAPI static struct tm toDateTime(int64_t, enum class DateManager::TimeZoneType);
    /**
     * @symbol
     * ?toString\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_JW4TimeZoneType\@1\@AEBV23\@\@Z
     */
    MCAPI static std::string toString(int64_t const&, enum class DateManager::TimeZoneType, std::string const&);
    /**
     * @symbol
     * ?toString\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUtm\@\@AEBV23\@\@Z
     */
    MCAPI static std::string toString(struct tm const&, std::string const&);
    /**
     * @symbol
     * ?toString_DateTime\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUtm\@\@W4TimeZoneType\@1\@\@Z
     */
    MCAPI static std::string toString_DateTime(struct tm const&, enum class DateManager::TimeZoneType);
    /**
     * @symbol
     * ?toString_DateTime\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_JW4TimeZoneType\@1\@\@Z
     */
    MCAPI static std::string toString_DateTime(int64_t const&, enum class DateManager::TimeZoneType);
    // NOLINTEND
};
