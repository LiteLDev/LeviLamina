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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
