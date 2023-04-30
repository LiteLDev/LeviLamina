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
    PlayerRespawnTelemetryData() = delete;
#endif

public:
    /**
     * @symbol ?WriteEventData\@PlayerRespawnTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event &) const;

//private:

private:
    /**
     * @symbol ?mEventName\@PlayerRespawnTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName;

};
