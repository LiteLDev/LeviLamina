#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct EndPortalBlockFlag;
// clang-format on

namespace InsideEndPortalBlockSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void insideEndPortalBlockSystem(::ViewT<::StrictEntityContext, ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag> const, ::ActorOwnerComponent> view);

MCNAPI void tickInsideEndPortalBlock(::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag> const& endPortalInsideComponent, ::ActorOwnerComponent& actorOwnerComponent);
// NOLINTEND

}
