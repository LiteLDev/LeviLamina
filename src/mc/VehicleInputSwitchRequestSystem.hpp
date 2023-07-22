/**
 * @file  VehicleInputSwitchRequestSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleInputSwitchRequestSystem.
 *
 */
class VehicleInputSwitchRequestSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLEINPUTSWITCHREQUESTSYSTEM
public:
    class VehicleInputSwitchRequestSystem& operator=(class VehicleInputSwitchRequestSystem const &) = delete;
    VehicleInputSwitchRequestSystem(class VehicleInputSwitchRequestSystem const &) = delete;
    VehicleInputSwitchRequestSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@VehicleInputSwitchRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};