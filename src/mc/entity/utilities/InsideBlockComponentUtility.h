#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct EndPortalBlockFlag;
struct InsideGenericBlockComponent;
struct SweetBerryBushBlockFlag;
// clang-format on

namespace InsideBlockComponentUtility {
// functions
// NOLINTBEGIN
MCNAPI void entityInsideLegacyRedirect(
    ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag> const& insideBlockComponent,
    ::ActorOwnerComponent&                                             actorOwnerComponent
);

MCNAPI void entityInsideLegacyRedirect(
    ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag> const& insideBlockComponent,
    ::ActorOwnerComponent&                                                  actorOwnerComponent
);

MCNAPI void entityInsideLegacyRedirect(
    ::InsideGenericBlockComponent const& insideBlockComponent,
    ::ActorOwnerComponent&               actorOwnerComponent
);
// NOLINTEND

} // namespace InsideBlockComponentUtility
