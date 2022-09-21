/**
 * @file  MC/PlayerRespawnTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerRespawnTelemetryData.
 *
 */
class PlayerRespawnTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNTELEMETRYDATA
public:
    class PlayerRespawnTelemetryData& operator=(class PlayerRespawnTelemetryData const &) = delete;
    PlayerRespawnTelemetryData(class PlayerRespawnTelemetryData const &) = delete;
#endif

public:
    /**
     * @hash   -151828632
     * @symbol ??0PlayerRespawnTelemetryData@@QEAA@XZ
     */
    MCAPI PlayerRespawnTelemetryData();
    /**
     * @hash   -305383102
     * @symbol ?WriteEventData@PlayerRespawnTelemetryData@@QEBAXAEAVEvent@Events@Social@@@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event &) const;
    /**
     * @hash   714020732
     * @symbol ?setChangedDimension@PlayerRespawnTelemetryData@@QEAAX_N@Z
     */
    MCAPI void setChangedDimension(bool);
    /**
     * @hash   1155981408
     * @symbol ?setJumpDistance@PlayerRespawnTelemetryData@@QEAAXN@Z
     */
    MCAPI void setJumpDistance(double);
    /**
     * @hash   1719986192
     * @symbol ?setLongJumpCount@PlayerRespawnTelemetryData@@QEAAXI@Z
     */
    MCAPI void setLongJumpCount(unsigned int);
    /**
     * @hash   1543857634
     * @symbol ?setPositionSourceType@PlayerRespawnTelemetryData@@QEAAXI@Z
     */
    MCAPI void setPositionSourceType(unsigned int);
    /**
     * @hash   -1822526848
     * @symbol ?setSearchTime@PlayerRespawnTelemetryData@@QEAAXN@Z
     */
    MCAPI void setSearchTime(double);
    /**
     * @hash   -1231433406
     * @symbol ?setShortJumpCount@PlayerRespawnTelemetryData@@QEAAXI@Z
     */
    MCAPI void setShortJumpCount(unsigned int);

//private:

private:
    /**
     * @hash   681539567
     * @symbol ?mEventName@PlayerRespawnTelemetryData@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const mEventName;

};