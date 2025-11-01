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
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doTick(::MoveInputComponent const& input, ::PlayerInputModeComponent const&, ::LocalMoveVelocityComponent& localVelocity);

    MCNAPI static void tick(::ViewT<::StrictEntityContext, ::Include<::PlayerInputRequestComponent>, ::MoveInputComponent const, ::PlayerInputModeComponent const, ::LocalMoveVelocityComponent> view);
    // NOLINTEND

};
