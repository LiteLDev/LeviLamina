#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct FallDistanceComponent;
struct StateVectorComponent;
// clang-format on

namespace ScaffoldingActionSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void descendThroughBlockAllowed(
    ::ActorDataFlagComponent&       actorDataFlagComponent,
    ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
    ::StateVectorComponent&         stateVectorComponent,
    ::FallDistanceComponent&        fallDistanceComponent
);
// NOLINTEND

} // namespace ScaffoldingActionSystemImpl
