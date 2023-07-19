/**
 * @file  InsideBlockComponentUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace InsideBlockComponentUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?entityInside\@InsideBlockComponentUtility\@\@YAXAEBV?$vector\@UInsideBlockData\@\@V?$allocator\@UInsideBlockData\@\@\@std\@\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI void entityInside(std::vector<struct InsideBlockData> const &, class Actor &);
    /**
     * @symbol ?entityInsideLegacyRedirect\@InsideBlockComponentUtility\@\@YAXAEBU?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI void entityInsideLegacyRedirect(struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag> const &, class ActorOwnerComponent &);
    /**
     * @symbol ?entityInsideLegacyRedirect\@InsideBlockComponentUtility\@\@YAXAEBUInsideGenericBlockComponent\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI void entityInsideLegacyRedirect(struct InsideGenericBlockComponent const &, class ActorOwnerComponent &);
    /**
     * @symbol ?entityInsideLegacyRedirect\@InsideBlockComponentUtility\@\@YAXAEBU?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI void entityInsideLegacyRedirect(struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag> const &, class ActorOwnerComponent &);

};