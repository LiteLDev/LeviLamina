/**
 * @file  DateManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -713776840
     * @symbol ?getCurrentTimestampFileName@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI static std::string getCurrentTimestampFileName();
    /**
     * @hash   -2092066613
     * @symbol ?getRealTime@DateManager@@SA_JXZ
     */
    MCAPI static __int64 getRealTime();
    /**
     * @hash   -908380027
     * @symbol ?toDateTime@DateManager@@SA?AUtm@@_JW4TimeZoneType@1@@Z
     */
    MCAPI static struct tm toDateTime(__int64, enum class DateManager::TimeZoneType);
    /**
     * @hash   1000432896
     * @symbol ?toString@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUtm@@AEBV23@@Z
     */
    MCAPI static std::string toString(struct tm const &, std::string const &);
    /**
     * @hash   1684551365
     * @symbol ?toString@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_JW4TimeZoneType@1@AEBV23@@Z
     */
    MCAPI static std::string toString(__int64 const &, enum class DateManager::TimeZoneType, std::string const &);
    /**
     * @hash   -1261729526
     * @symbol ?toString_DateTime@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUtm@@W4TimeZoneType@1@@Z
     */
    MCAPI static std::string toString_DateTime(struct tm const &, enum class DateManager::TimeZoneType);
    /**
     * @hash   1081276254
     * @symbol ?toString_DateTime@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_JW4TimeZoneType@1@@Z
     */
    MCAPI static std::string toString_DateTime(__int64 const &, enum class DateManager::TimeZoneType);

};