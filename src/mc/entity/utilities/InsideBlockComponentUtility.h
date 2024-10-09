#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"

namespace InsideBlockComponentUtility {
// NOLINTBEGIN
MCAPI void entityInside(std::vector<struct InsideBlockData> const& insideBlockDataVector, class Actor& actor);

MCAPI void entityInsideLegacyRedirect(
    struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag> const& insideBlockComponent,
    class ActorOwnerComponent&                                                   actorOwnerComponent
);

MCAPI void entityInsideLegacyRedirect(
    struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag> const& insideBlockComponent,
    class ActorOwnerComponent&                                                        actorOwnerComponent
);

MCAPI void entityInsideLegacyRedirect(
    struct InsideGenericBlockComponent const& insideBlockComponent,
    class ActorOwnerComponent&                actorOwnerComponent
);
// NOLINTEND

}; // namespace InsideBlockComponentUtility
