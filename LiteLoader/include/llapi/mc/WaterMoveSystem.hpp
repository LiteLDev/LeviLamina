/**
 * @file  WaterMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class WaterMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVESYSTEM
public:
    class WaterMoveSystem& operator=(class WaterMoveSystem const &) = delete;
    WaterMoveSystem(class WaterMoveSystem const &) = delete;
    WaterMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createWaterMoveSystem\@WaterMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterMoveSystem();

};
