#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/InsideBlockWithPosAndBlockComponent.h"

namespace InsideBlockComponentUtility {
// NOLINTBEGIN
MCAPI void entityInside(std::vector<struct InsideBlockData> const&, class Actor&);

MCAPI void
entityInsideLegacyRedirect(struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag> const&, class ActorOwnerComponent&);

MCAPI void
entityInsideLegacyRedirect(struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag> const&, class ActorOwnerComponent&);

MCAPI void entityInsideLegacyRedirect(struct InsideGenericBlockComponent const&, class ActorOwnerComponent&);
// NOLINTEND

}; // namespace InsideBlockComponentUtility
