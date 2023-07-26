/**
 * @file  UpdateWaterStateRequestSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateWaterStateRequestSystem.
 *
 */
class UpdateWaterStateRequestSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEWATERSTATEREQUESTSYSTEM
public:
    class UpdateWaterStateRequestSystem& operator=(class UpdateWaterStateRequestSystem const &) = delete;
    UpdateWaterStateRequestSystem(class UpdateWaterStateRequestSystem const &) = delete;
    UpdateWaterStateRequestSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@UpdateWaterStateRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};