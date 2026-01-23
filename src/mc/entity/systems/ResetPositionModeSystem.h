#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct PlayerPositionModeComponent;
// clang-format on

class ResetPositionModeSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tickResetPositionModeSystem(
        ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::PlayerPositionModeComponent>
            view
    );
    // NOLINTEND
};
