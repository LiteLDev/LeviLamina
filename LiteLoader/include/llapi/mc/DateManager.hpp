/**
 * @file  DateManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DateManager.
 *
 */
class DateManager {

#define AFTER_EXTRA
// Add Member There
public:
enum class TimeZoneType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATEMANAGER
public:
    class DateManager& operator=(class DateManager const &) = delete;
    DateManager(class DateManager const &) = delete;
    DateManager() = delete;
#endif

public:
    /**
     * @hash   35895416
     * @symbol  ?getCurrentTimestampFileName\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getCurrentTimestampFileName();
    /**
     * @hash   -1342363605
     * @symbol  ?getRealTime\@DateManager\@\@SA_JXZ
     */
    MCAPI static __int64 getRealTime();
    /**
     * @hash   -158677019
     * @symbol  ?toDateTime\@DateManager\@\@SA?AUtm\@\@_JW4TimeZoneType\@1\@\@Z
     */
    MCAPI static struct tm toDateTime(__int64, enum class DateManager::TimeZoneType);
    /**
     * @hash   1750135904
     * @symbol  ?toString\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUtm\@\@AEBV23\@\@Z
     */
    MCAPI static std::string toString(struct tm const &, std::string const &);
    /**
     * @hash   -1860805179
     * @symbol  ?toString\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_JW4TimeZoneType\@1\@AEBV23\@\@Z
     */
    MCAPI static std::string toString(__int64 const &, enum class DateManager::TimeZoneType, std::string const &);
    /**
     * @hash   -512118774
     * @symbol  ?toString_DateTime\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUtm\@\@W4TimeZoneType\@1\@\@Z
     */
    MCAPI static std::string toString_DateTime(struct tm const &, enum class DateManager::TimeZoneType);
    /**
     * @hash   1830887006
     * @symbol  ?toString_DateTime\@DateManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEB_JW4TimeZoneType\@1\@\@Z
     */
    MCAPI static std::string toString_DateTime(__int64 const &, enum class DateManager::TimeZoneType);

};