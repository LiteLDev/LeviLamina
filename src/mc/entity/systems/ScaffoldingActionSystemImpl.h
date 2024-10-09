#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScaffoldingActionSystemImpl {
// NOLINTBEGIN
MCAPI void descendThroughBlockAllowed(
    struct ActorDataFlagComponent&       actorDataFlagComponent,
    struct ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    struct StateVectorComponent&         stateVectorComponent,
    struct FallDistanceComponent&        fallDistanceComponent
);
// NOLINTEND

}; // namespace ScaffoldingActionSystemImpl
