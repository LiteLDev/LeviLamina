#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace SwimControlSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doSwimControl(
    ::StrictEntityContext const&         synchedActorDataComponent,
    ::ActorDataFlagComponent const&      abilitiesComponent,
    ::MovementAbilitiesComponent const&  actorRotationComponent,
    ::ActorRotationComponent const&      moveInputComponent,
    ::MoveInputComponent const&          request,
    ::PlayerInputRequestComponent const& stateVectorComponent,
    ::StateVectorComponent&
);
// NOLINTEND

} // namespace SwimControlSystemImpl
