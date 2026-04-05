#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct LocalMoveVelocityComponent;
struct MoveInputComponent;
struct PlayerInputModeComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

struct RotateAndSetVelocitySystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void doTick(
        ::MoveInputComponent const& input,
        ::PlayerInputModeComponent const&,
        ::LocalMoveVelocityComponent& localVelocity
    );

    MCAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PlayerInputRequestComponent>,
            ::MoveInputComponent const,
            ::PlayerInputModeComponent const,
            ::LocalMoveVelocityComponent> view
    );
    // NOLINTEND
};
