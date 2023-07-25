#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExitVehicleSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXITVEHICLESYSTEM
public:
    ExitVehicleSystem& operator=(ExitVehicleSystem const&) = delete;
    ExitVehicleSystem(ExitVehicleSystem const&)            = delete;
    ExitVehicleSystem()                                    = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ExitVehicleSystem\@\@SA?AUTickingSystemWithInfo\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(class BaseGameVersion const&);
};
