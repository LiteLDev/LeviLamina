/**
 * @file  FlyTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyTravelSystem.
 *
 */
class FlyTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYTRAVELSYSTEM
public:
    class FlyTravelSystem& operator=(class FlyTravelSystem const &) = delete;
    FlyTravelSystem(class FlyTravelSystem const &) = delete;
    FlyTravelSystem() = delete;
#endif

public:
    /**
     * @symbol  ?getPlayerFlySpeed\@FlyTravelSystem\@\@SAMAEBVLayeredAbilities\@\@VSynchedActorDataReader\@\@\@Z
     */
    MCAPI static float getPlayerFlySpeed(class LayeredAbilities const &, class SynchedActorDataReader);

};