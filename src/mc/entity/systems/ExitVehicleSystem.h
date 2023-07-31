#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExitVehicleSystem {

public:
    // prevent constructor by default
    ExitVehicleSystem& operator=(ExitVehicleSystem const&) = delete;
    ExitVehicleSystem(ExitVehicleSystem const&)            = delete;
    ExitVehicleSystem()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@ExitVehicleSystem\@\@SA?AUTickingSystemWithInfo\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(class BaseGameVersion const&);
    // NOLINTEND
};
