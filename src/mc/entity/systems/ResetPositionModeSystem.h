#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct PlayerPositionModeComponent;
// clang-format on

class ResetPositionModeSystem {
public:
    // ResetPositionModeSystem inner types define
    using ViewType =
        ::ViewT<::StrictEntityContext, ::Include<::InterpolateMovementNeededComponent>, ::PlayerPositionModeComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickResetPositionModeSystem(
        ::ViewT<::StrictEntityContext, ::Include<::InterpolateMovementNeededComponent>, ::PlayerPositionModeComponent>
            view
    );
    // NOLINTEND
};
