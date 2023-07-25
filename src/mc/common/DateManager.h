#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DateManager {
public:
    // DateManager inner types declare
    // clang-format off

    // clang-format on

    // DateManager inner types define
    enum class TimeZoneType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATEMANAGER
public:
    DateManager& operator=(DateManager const&) = delete;
    DateManager(DateManager const&)            = delete;
    DateManager()                              = delete;
#endif

public:
    /**
     * @symbol
     * ?getCurrentTimestampFileName\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getCurrentTimestampFileName();
    /**
     * @symbol ?getRealTime\@DateManager\@\@SA_JXZ
     */
    MCAPI static __int64 getRealTime();
    /**
     * @symbol ?toDateTime\@DateManager\@\@SA?AUtm\@\@_JW4TimeZoneType\@1\@\@Z
     */
    MCAPI static struct tm toDateTime(__int64, enum class DateManager::TimeZoneType);
    /**
     * @symbol
     * ?toString\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_JW4TimeZoneType\@1\@AEBV23\@\@Z
     */
    MCAPI static std::string toString(__int64 const&, enum class DateManager::TimeZoneType, std::string const&);
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
    MCAPI static std::string toString_DateTime(__int64 const&, enum class DateManager::TimeZoneType);
};
