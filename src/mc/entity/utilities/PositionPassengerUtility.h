#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
struct ActorDataSeatOffsetComponent;
// clang-format on

struct PositionPassengerUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 getNewPassengerPosition(
        ::ActorDataSeatOffsetComponent const& seatOffsetComponent,
        ::Vec3 const&                         originPos,
        ::Vec2 const&                         vehicleRot
    );
    // NOLINTEND
};
