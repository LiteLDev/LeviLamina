#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobResetPassengerYRotLimitSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBRESETPASSENGERYROTLIMITSYSTEM
public:
    MobResetPassengerYRotLimitSystem& operator=(MobResetPassengerYRotLimitSystem const&) = delete;
    MobResetPassengerYRotLimitSystem(MobResetPassengerYRotLimitSystem const&)            = delete;
    MobResetPassengerYRotLimitSystem()                                                   = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@MobResetPassengerYRotLimitSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
