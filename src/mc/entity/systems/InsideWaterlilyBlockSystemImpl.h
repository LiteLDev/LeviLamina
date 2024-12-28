#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct WaterlilyBlockFlag;
// clang-format on

namespace InsideWaterlilyBlockSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickDestroyWaterlily(
    ::InsideBlockWithPosComponent<::WaterlilyBlockFlag> const& insideWaterlilyBlockComponent,
    ::ActorOwnerComponent&                                     actorOwnerComponent
);
// NOLINTEND

} // namespace InsideWaterlilyBlockSystemImpl
