#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct InsideGenericBlockComponent;
// clang-format on

namespace InsideGenericBlockSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void insideGenericBlockSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::InsideGenericBlockComponent, ::ActorOwnerComponent> view);

MCNAPI void tickInsideGenericBlock(::InsideGenericBlockComponent& insideGenericBlockComponent, ::ActorOwnerComponent& actorOwnerComponent);
// NOLINTEND

}
