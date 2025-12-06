#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PositionPassengerRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mVehicleRelativeSeatRotation;
    ::ll::TypedStorage<4, 4, float> mPassengerRelativeSeatRotation;
    // NOLINTEND
};
