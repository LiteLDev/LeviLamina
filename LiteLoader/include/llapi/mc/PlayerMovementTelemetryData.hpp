/**
 * @file  PlayerMovementTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerMovementTelemetryData.
 *
 */
class PlayerMovementTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTTELEMETRYDATA
public:
    class PlayerMovementTelemetryData& operator=(class PlayerMovementTelemetryData const &) = delete;
    PlayerMovementTelemetryData(class PlayerMovementTelemetryData const &) = delete;
#endif

public:
    /**
     * @hash   1015846031
     * @symbol  ??0PlayerMovementTelemetryData\@\@QEAA\@XZ
     */
    MCAPI PlayerMovementTelemetryData();
    /**
     * @hash   -1236861886
     * @symbol  ?getAverage\@PlayerMovementTelemetryData\@\@QEBAMXZ
     */
    MCAPI float getAverage() const;
    /**
     * @hash   1191327283
     * @symbol  ?reset\@PlayerMovementTelemetryData\@\@QEAAXXZ
     */
    MCAPI void reset();

};