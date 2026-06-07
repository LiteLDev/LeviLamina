#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorGameTypeComponent;
struct ExternalDataInterface;
struct FrictionModifierOverrideComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace VerticalFlySpeedControlSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doFlySpeedControlSystem(
    ::StrictEntityContext const&                           entity,
    ::MoveInputComponent const&                            moveInputComponent,
    ::PlayerInputRequestComponent const&                   playerInputRequestComponent,
    ::ActorGameTypeComponent const&                        actorGameTypeComponent,
    ::MovementAbilitiesComponent const&                    movementAbilitiesComponent,
    ::StateVectorComponent&                                stateVectorComponent,
    ::EntityModifier<::FrictionModifierOverrideComponent>& modifier,
    ::ExternalDataInterface const&                         externalData
);
// NOLINTEND

} // namespace VerticalFlySpeedControlSystem
