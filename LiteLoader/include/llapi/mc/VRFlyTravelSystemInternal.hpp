/**
 * @file  VRFlyTravelSystemInternal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace VRFlyTravelSystemInternal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_sideBySideCatchupSystem\@VRFlyTravelSystemInternal\@\@YAXAEBUPlayerInputModeComponent\@\@AEAUMobTravelComponent\@\@AEAUAbilitiesComponent\@\@\@Z
     */
    MCAPI void _sideBySideCatchupSystem(struct PlayerInputModeComponent const &, struct MobTravelComponent &, struct AbilitiesComponent &);
    /**
     * @symbol ?_tickSideBySideCatchupSystem\@VRFlyTravelSystemInternal\@\@YAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@$$CBUPlayerInputModeComponent\@\@UMobTravelComponent\@\@UAbilitiesComponent\@\@\@\@\@Z
     */
    MCAPI void _tickSideBySideCatchupSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LocalPlayerComponentFlag>>, struct PlayerInputModeComponent const, struct MobTravelComponent, struct AbilitiesComponent>);

};