#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

namespace SwimControlSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doSwimControl@SwimControlSystemImpl@@YAXAEBVStrictEntityContext@@AEBUActorDataFlagComponent@@AEBUMovementAbilitiesComponent@@AEBUActorRotationComponent@@AEBUMoveInputComponent@@AEBUPlayerInputRequestComponent@@AEAUStateVectorComponent@@@Z
MCAPI void
doSwimControl(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct MovementAbilitiesComponent const&, struct ActorRotationComponent const&, struct MoveInputComponent const&, struct PlayerInputRequestComponent const&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace SwimControlSystemImpl
