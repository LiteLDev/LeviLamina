/**
 * @file  VehicleClientPositionPassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleClientPositionPassengerSystem.
 *
 */
class VehicleClientPositionPassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLECLIENTPOSITIONPASSENGERSYSTEM
public:
    class VehicleClientPositionPassengerSystem& operator=(class VehicleClientPositionPassengerSystem const &) = delete;
    VehicleClientPositionPassengerSystem(class VehicleClientPositionPassengerSystem const &) = delete;
    VehicleClientPositionPassengerSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSetPositionRequestSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPositionRequestSystem();
    /**
     * @symbol  ?createSetPreviousPosRotSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPreviousPosRotSystem();
    /**
     * @symbol  ?createSetRotationLock\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetRotationLock();

};