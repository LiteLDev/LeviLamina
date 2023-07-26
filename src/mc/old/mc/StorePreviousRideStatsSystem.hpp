/**
 * @file  StorePreviousRideStatsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StorePreviousRideStatsSystem.
 *
 */
class StorePreviousRideStatsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOREPREVIOUSRIDESTATSSYSTEM
public:
    class StorePreviousRideStatsSystem& operator=(class StorePreviousRideStatsSystem const &) = delete;
    StorePreviousRideStatsSystem(class StorePreviousRideStatsSystem const &) = delete;
    StorePreviousRideStatsSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_storePreviousRideStats\@StorePreviousRideStatsSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAUVanillaClientGameplayComponent\@\@\@Z
     */
    MCAPI static void _storePreviousRideStats(class StrictEntityContext const &, struct StateVectorComponent const &, struct VanillaClientGameplayComponent &);
    /**
     * @symbol  ?createSystem\@StorePreviousRideStatsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};