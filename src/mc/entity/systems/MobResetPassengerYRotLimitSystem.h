#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobResetPassengerYRotLimitSystem {
public:
    // prevent constructor by default
    MobResetPassengerYRotLimitSystem& operator=(MobResetPassengerYRotLimitSystem const&);
    MobResetPassengerYRotLimitSystem(MobResetPassengerYRotLimitSystem const&);
    MobResetPassengerYRotLimitSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@MobResetPassengerYRotLimitSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
