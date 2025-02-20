#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MoveRequestComponent;
struct OnGroundFlagComponent;
struct PlayerLastPosComponent;
struct StateVectorComponent;
struct WasOnGroundFlagComponent;
// clang-format on

namespace VanillaSystems::PlayerMoveSystemsImpl {
// functions
// NOLINTBEGIN
MCAPI void _doPlayerPreMoveSystem(
    ::StrictEntityContext const&                  entity,
    ::MoveRequestComponent const&                 request,
    ::StateVectorComponent const&                 stateVector,
    ::PlayerLastPosComponent&                     last,
    ::Optional<::OnGroundFlagComponent const>     onGround,
    ::EntityModifier<::WasOnGroundFlagComponent>& modifier
);
// NOLINTEND

} // namespace VanillaSystems::PlayerMoveSystemsImpl
