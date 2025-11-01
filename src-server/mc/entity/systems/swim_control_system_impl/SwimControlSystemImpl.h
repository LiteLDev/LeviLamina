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
MCNAPI void doSwimControl(::StrictEntityContext const&, ::ActorDataFlagComponent const& synchedActorDataComponent, ::MovementAbilitiesComponent const& abilitiesComponent, ::ActorRotationComponent const& actorRotationComponent, ::MoveInputComponent const& moveInputComponent, ::PlayerInputRequestComponent const& request, ::StateVectorComponent& stateVectorComponent);
// NOLINTEND

}
