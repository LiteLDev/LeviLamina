#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> struct InsideBlockWithPosAndBlockComponent;
// clang-format on

namespace InsideBlockComponentUtility {
// NOLINTBEGIN
/**
 * @symbol
 * ?entityInside\@InsideBlockComponentUtility\@\@YAXAEBV?$vector\@UInsideBlockData\@\@V?$allocator\@UInsideBlockData\@\@\@std\@\@\@std\@\@AEAVActor\@\@\@Z
 */
MCAPI void entityInside(std::vector<struct InsideBlockData> const&, class Actor&);
/**
 * @symbol
 * ?entityInsideLegacyRedirect\@InsideBlockComponentUtility\@\@YAXAEBU?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
 */
MCAPI void
entityInsideLegacyRedirect(struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag> const&, class ActorOwnerComponent&);
/**
 * @symbol
 * ?entityInsideLegacyRedirect\@InsideBlockComponentUtility\@\@YAXAEBUInsideGenericBlockComponent\@\@AEAVActorOwnerComponent\@\@\@Z
 */
MCAPI void entityInsideLegacyRedirect(struct InsideGenericBlockComponent const&, class ActorOwnerComponent&);
/**
 * @symbol
 * ?entityInsideLegacyRedirect\@InsideBlockComponentUtility\@\@YAXAEBU?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
 */
MCAPI void
entityInsideLegacyRedirect(struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag> const&, class ActorOwnerComponent&);
// NOLINTEND

}; // namespace InsideBlockComponentUtility
