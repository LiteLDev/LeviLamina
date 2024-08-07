#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace StartGlidingActionSystemImpl {
// NOLINTBEGIN
MCAPI void
    doStartGlidingServerAction(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent>, struct PlayerActionComponent const, struct ActorDataFlagComponent, struct ActorDataDirtyFlagsComponent, struct ElytraFlightTimeTicksComponent>, class OptionalGlobal<struct CurrentTickComponent const>, class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent>);
// NOLINTEND

}; // namespace StartGlidingActionSystemImpl
