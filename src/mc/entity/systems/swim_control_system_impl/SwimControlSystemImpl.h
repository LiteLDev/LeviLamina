#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

namespace SwimControlSystemImpl {
// NOLINTBEGIN
MCAPI void doSwimControl(
    class StrictEntityContext const&,
    struct ActorDataFlagComponent const&      synchedActorDataComponent,
    struct MovementAbilitiesComponent const&  abilitiesComponent,
    struct ActorRotationComponent const&      actorRotationComponent,
    struct MoveInputComponent const&          moveInputComponent,
    struct PlayerInputRequestComponent const& request,
    struct StateVectorComponent&              stateVectorComponent
);
// NOLINTEND

}; // namespace SwimControlSystemImpl
