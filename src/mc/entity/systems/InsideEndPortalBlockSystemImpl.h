#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct EndPortalBlockFlag;
// clang-format on

namespace InsideEndPortalBlockSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickInsideEndPortalBlock(
    ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag> const& endPortalInsideComponent,
    ::ActorOwnerComponent&                                             actorOwnerComponent
);
// NOLINTEND

} // namespace InsideEndPortalBlockSystemImpl
