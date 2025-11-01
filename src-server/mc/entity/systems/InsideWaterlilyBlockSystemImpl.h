#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct BoatFlagComponent;
struct WaterlilyBlockFlag;
// clang-format on

namespace InsideWaterlilyBlockSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void destroyWaterlilySystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::BoatFlagComponent>,
        ::InsideBlockWithPosComponent<::WaterlilyBlockFlag> const,
        ::ActorOwnerComponent> view
);

MCNAPI void tickDestroyWaterlily(
    ::InsideBlockWithPosComponent<::WaterlilyBlockFlag> const& insideWaterlilyBlockComponent,
    ::ActorOwnerComponent&                                     actorOwnerComponent
);
// NOLINTEND

} // namespace InsideWaterlilyBlockSystemImpl
