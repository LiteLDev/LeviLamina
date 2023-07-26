/**
 * @file  PlayerRespawnTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ??0PlayerRespawnTelemetryData\@\@QEAA\@XZ
     */
    MCAPI PlayerRespawnTelemetryData();
    /**
     * @symbol  ?WriteEventData\@PlayerRespawnTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event &) const;
    /**
     * @symbol  ?setChangedDimension\@PlayerRespawnTelemetryData\@\@QEAAX_N\@Z
     */
    MCAPI void setChangedDimension(bool);
    /**
     * @symbol  ?setJumpDistance\@PlayerRespawnTelemetryData\@\@QEAAXN\@Z
     */
    MCAPI void setJumpDistance(double);
    /**
     * @symbol  ?setLongJumpCount\@PlayerRespawnTelemetryData\@\@QEAAXI\@Z
     */
    MCAPI void setLongJumpCount(unsigned int);
    /**
     * @symbol  ?setPositionSourceType\@PlayerRespawnTelemetryData\@\@QEAAXI\@Z
     */
    MCAPI void setPositionSourceType(unsigned int);
    /**
     * @symbol  ?setSearchTime\@PlayerRespawnTelemetryData\@\@QEAAXN\@Z
     */
    MCAPI void setSearchTime(double);
    /**
     * @symbol  ?setShortJumpCount\@PlayerRespawnTelemetryData\@\@QEAAXI\@Z
     */
    MCAPI void setShortJumpCount(unsigned int);

//private:

private:
    /**
     * @symbol  ?mEventName\@PlayerRespawnTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName;

};