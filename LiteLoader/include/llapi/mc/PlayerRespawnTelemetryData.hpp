/**
 * @file  PlayerRespawnTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -778077736
     * @symbol  ??0PlayerRespawnTelemetryData\@\@QEAA\@XZ
     */
    MCAPI PlayerRespawnTelemetryData();
    /**
     * @hash   -931632206
     * @symbol  ?WriteEventData\@PlayerRespawnTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event &) const;
    /**
     * @hash   87771628
     * @symbol  ?setChangedDimension\@PlayerRespawnTelemetryData\@\@QEAAX_N\@Z
     */
    MCAPI void setChangedDimension(bool);
    /**
     * @hash   529732304
     * @symbol  ?setJumpDistance\@PlayerRespawnTelemetryData\@\@QEAAXN\@Z
     */
    MCAPI void setJumpDistance(double);
    /**
     * @hash   1851881520
     * @symbol  ?setLongJumpCount\@PlayerRespawnTelemetryData\@\@QEAAXI\@Z
     */
    MCAPI void setLongJumpCount(unsigned int);
    /**
     * @hash   917608530
     * @symbol  ?setPositionSourceType\@PlayerRespawnTelemetryData\@\@QEAAXI\@Z
     */
    MCAPI void setPositionSourceType(unsigned int);
    /**
     * @hash   1846191344
     * @symbol  ?setSearchTime\@PlayerRespawnTelemetryData\@\@QEAAXN\@Z
     */
    MCAPI void setSearchTime(double);
    /**
     * @hash   -1103874110
     * @symbol  ?setShortJumpCount\@PlayerRespawnTelemetryData\@\@QEAAXI\@Z
     */
    MCAPI void setShortJumpCount(unsigned int);

//private:

private:
    /**
     * @hash   -1912580737
     * @symbol  ?mEventName\@PlayerRespawnTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName;

};