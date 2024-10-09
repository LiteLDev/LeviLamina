#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class JumpInputSystem {
public:
    // prevent constructor by default
    JumpInputSystem& operator=(JumpInputSystem const&);
    JumpInputSystem(JumpInputSystem const&);
    JumpInputSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createJumpInputSystem();

    MCAPI static void tickJumpInputSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PlayerInputRequestComponent>,
            struct MovementAbilitiesComponent const,
            struct MoveInputComponent const>                               view,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND
};
