/**
 * @file  WaterMoveFinalizeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class WaterMoveFinalizeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEFINALIZESYSTEM
public:
    class WaterMoveFinalizeSystem& operator=(class WaterMoveFinalizeSystem const &) = delete;
    WaterMoveFinalizeSystem(class WaterMoveFinalizeSystem const &) = delete;
    WaterMoveFinalizeSystem() = delete;
#endif

public:
    /**
     * @symbol ?createWaterMoveFinalizeSideBySideSystem\@WaterMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterMoveFinalizeSideBySideSystem();
    /**
     * @symbol ?createWaterMoveFinalizeSystem\@WaterMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterMoveFinalizeSystem();

};
