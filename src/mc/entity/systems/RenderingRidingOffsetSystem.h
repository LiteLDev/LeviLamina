#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PassengerRenderingRidingOffsetComponent;
// clang-format on

class RenderingRidingOffsetSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 getInterpolatedRenderingRidingOffset(
        ::PassengerRenderingRidingOffsetComponent const* passengerOffsetComponent,
        float                                            frameAlpha
    );
    // NOLINTEND
};
