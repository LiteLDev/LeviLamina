/**
 * @file  VehicleServerPositionPassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleServerPositionPassengerSystem.
 *
 */
class VehicleServerPositionPassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLESERVERPOSITIONPASSENGERSYSTEM
public:
    class VehicleServerPositionPassengerSystem& operator=(class VehicleServerPositionPassengerSystem const &) = delete;
    VehicleServerPositionPassengerSystem(class VehicleServerPositionPassengerSystem const &) = delete;
    VehicleServerPositionPassengerSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@VehicleServerPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};