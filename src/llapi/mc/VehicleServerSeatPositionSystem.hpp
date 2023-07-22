/**
 * @file  VehicleServerSeatPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleServerSeatPositionSystem.
 *
 */
class VehicleServerSeatPositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLESERVERSEATPOSITIONSYSTEM
public:
    class VehicleServerSeatPositionSystem& operator=(class VehicleServerSeatPositionSystem const &) = delete;
    VehicleServerSeatPositionSystem(class VehicleServerSeatPositionSystem const &) = delete;
    VehicleServerSeatPositionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@VehicleServerSeatPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};