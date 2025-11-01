#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct JumpRidingScaleComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

class ResetJumpRidingScaleSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doResetJumpRidingScaleSystem(::StrictEntityContext const&, ::JumpRidingScaleComponent& jumpRidingScaleComponent, ::VanillaClientGameplayComponent& vanillaClientGameplayComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tick(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent>, ::JumpRidingScaleComponent, ::VanillaClientGameplayComponent> view);
    // NOLINTEND

};
