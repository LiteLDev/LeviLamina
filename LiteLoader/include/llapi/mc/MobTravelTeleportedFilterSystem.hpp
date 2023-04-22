/**
 * @file  MobTravelTeleportedFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class MobTravelTeleportedFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBTRAVELTELEPORTEDFILTERSYSTEM
public:
    class MobTravelTeleportedFilterSystem& operator=(class MobTravelTeleportedFilterSystem const &) = delete;
    MobTravelTeleportedFilterSystem(class MobTravelTeleportedFilterSystem const &) = delete;
    MobTravelTeleportedFilterSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@MobTravelTeleportedFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};
