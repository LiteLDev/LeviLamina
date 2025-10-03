#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorGameTypeComponent;
struct ExternalDataInterface;
struct FrictionModifierComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace VerticalFlySpeedControlSystem {
// functions
// NOLINTBEGIN
MCNAPI void doFlySpeedControlSystem(
    ::StrictEntityContext const&,
    ::MoveInputComponent const&          moveInputComponent,
    ::PlayerInputRequestComponent const& playerInputRequestComponent,
    ::ActorGameTypeComponent const&      actorGameTypeComponent,
    ::FrictionModifierComponent&         frictionModifierComponent,
    ::MovementAbilitiesComponent const&  movementAbilitiesComponent,
    ::StateVectorComponent&              stateVectorComponent,
    ::ExternalDataInterface const&       externalData
);
// NOLINTEND

} // namespace VerticalFlySpeedControlSystem
