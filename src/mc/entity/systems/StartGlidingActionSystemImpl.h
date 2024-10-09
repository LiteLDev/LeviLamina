#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

namespace StartGlidingActionSystemImpl {
// NOLINTBEGIN
MCAPI void doStartGlidingServerAction(
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent>,
        struct PlayerActionComponent const,
        struct ActorDataFlagComponent,
        struct ActorDataDirtyFlagsComponent,
        struct ElytraFlightTimeTicksComponent>                           view,
    class OptionalGlobal<struct CurrentTickComponent const>              tickComponent,
    class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent> modifier
);
// NOLINTEND

}; // namespace StartGlidingActionSystemImpl
