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
    MCAPI static class Vec3 getNewPassengerPosition(
        struct ActorDataSeatOffsetComponent const& seatOffsetComponent,
        class Vec3 const&                          origin,
        class Vec2 const&                          vehicleRot
    );

    // NOLINTEND
};
