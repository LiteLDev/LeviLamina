#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
struct WalkDistComponent;
// clang-format on

class SetPreviousWalkDistSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickWalkDistPrevSystem(
        ::ViewT<::StrictEntityContext, ::Include<::InterpolateMovementNeededComponent>, ::WalkDistComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
