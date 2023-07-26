#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobResetPassengerYRotLimitSystem {

public:
    // prevent constructor by default
    MobResetPassengerYRotLimitSystem& operator=(MobResetPassengerYRotLimitSystem const&) = delete;
    MobResetPassengerYRotLimitSystem(MobResetPassengerYRotLimitSystem const&)            = delete;
    MobResetPassengerYRotLimitSystem()                                                   = delete;

public:
    /**
     * @symbol ?createSystem\@MobResetPassengerYRotLimitSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
