#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct LavaTravelFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
// clang-format on

class LavaTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tickLavaTravelSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::LavaTravelFlagComponent>,
            ::MovementAttributesComponent const,
            ::MobTravelComponent> view
    );
    // NOLINTEND
};
