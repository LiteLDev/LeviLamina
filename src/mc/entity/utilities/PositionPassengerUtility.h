#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionPassengerUtility {
public:
    // prevent constructor by default
    PositionPassengerUtility& operator=(PositionPassengerUtility const&);
    PositionPassengerUtility(PositionPassengerUtility const&);
    PositionPassengerUtility();

public:
    // NOLINTBEGIN
    MCAPI static class Vec3
    getNewPassengerPosition(struct ActorDataSeatOffsetComponent const&, class Vec3 const&, class Vec2 const&);

    // NOLINTEND
};
