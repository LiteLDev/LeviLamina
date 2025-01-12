#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MobIsJumpingFlagComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class JumpInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createJumpInputSystem();

    MCAPI static void tickJumpInputSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PlayerInputRequestComponent>,
            ::MovementAbilitiesComponent const,
            ::MoveInputComponent const>               view,
        ::EntityModifier<::MobIsJumpingFlagComponent> mod
    );
    // NOLINTEND
};
