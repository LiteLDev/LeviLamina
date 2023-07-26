/**
 * @file  WaterSinkInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WaterSinkInputSystem.
 *
 */
class WaterSinkInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERSINKINPUTSYSTEM
public:
    class WaterSinkInputSystem& operator=(class WaterSinkInputSystem const &) = delete;
    WaterSinkInputSystem(class WaterSinkInputSystem const &) = delete;
    WaterSinkInputSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createWaterSinkInputSystem\@WaterSinkInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterSinkInputSystem();

};