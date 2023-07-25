#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CheckFallDamageSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHECKFALLDAMAGESYSTEM
public:
    CheckFallDamageSystem& operator=(CheckFallDamageSystem const&) = delete;
    CheckFallDamageSystem(CheckFallDamageSystem const&)            = delete;
    CheckFallDamageSystem()                                        = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@CheckFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
