#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorGameTypeComponent;
struct ExternalDataInterface;
struct FrictionModifierComponent;
struct MoveInputComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace VerticalFlySpeedControlSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doFlySpeedControlSystem(
    ::StrictEntityContext const&,
    ::MoveInputComponent const&          moveInputComponent,
    ::PlayerInputRequestComponent const& playerInputRequestComponent,
    ::ActorGameTypeComponent const&      actorGameTypeComponent,
    ::FrictionModifierComponent&         frictionModifierComponent,
    ::StateVectorComponent&              stateVectorComponent,
    ::ExternalDataInterface const&       externalData
);
// NOLINTEND

} // namespace VerticalFlySpeedControlSystem
