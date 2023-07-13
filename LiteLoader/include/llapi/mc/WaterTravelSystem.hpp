/**
 * @file  WaterTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class WaterTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERTRAVELSYSTEM
public:
    class WaterTravelSystem& operator=(class WaterTravelSystem const &) = delete;
    WaterTravelSystem(class WaterTravelSystem const &) = delete;
    WaterTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createWaterTravelSystem\@WaterTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterTravelSystem();

};
