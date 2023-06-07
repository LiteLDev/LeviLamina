/**
 * @file  VRFlyTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VRFlyTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VRFLYTRAVELSYSTEM
public:
    class VRFlyTravelSystem& operator=(class VRFlyTravelSystem const &) = delete;
    VRFlyTravelSystem(class VRFlyTravelSystem const &) = delete;
    VRFlyTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?_postPlayerTravelSystem\@VRFlyTravelSystem\@\@SAXAEBULocalPlayerPrePlayerTravelComponent\@\@AEAUAbilitiesComponent\@\@\@Z
     */
    MCAPI static void _postPlayerTravelSystem(struct LocalPlayerPrePlayerTravelComponent const &, struct AbilitiesComponent &);
    /**
     * @symbol ?_prePlayerTravelSystem\@VRFlyTravelSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUPlayerInputModeComponent\@\@AEAUMobTravelComponent\@\@AEAUAbilitiesComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@ULocalPlayerPrePlayerTravelComponent\@\@\@\@\@Z
     */
    MCAPI static void _prePlayerTravelSystem(class StrictEntityContext const &, struct PlayerInputModeComponent const &, struct MobTravelComponent &, struct AbilitiesComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct LocalPlayerPrePlayerTravelComponent>);
    /**
     * @symbol ?_tickPostPlayerTravelSystem\@VRFlyTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBULocalPlayerPrePlayerTravelComponent\@\@UAbilitiesComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickPostPlayerTravelSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct LocalPlayerPrePlayerTravelComponent const, struct AbilitiesComponent>);
    /**
     * @symbol ?_tickPrePlayerTravelSystem\@VRFlyTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@$$CBUPlayerInputModeComponent\@\@UMobTravelComponent\@\@UAbilitiesComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@ULocalPlayerPrePlayerTravelComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickPrePlayerTravelSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LocalPlayerComponentFlag>>, struct PlayerInputModeComponent const, struct MobTravelComponent, struct AbilitiesComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct LocalPlayerPrePlayerTravelComponent>);
    /**
     * @symbol ?createPostPlayerTravelSystem\@VRFlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostPlayerTravelSystem();
    /**
     * @symbol ?createPrePlayerTravelSystem\@VRFlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPrePlayerTravelSystem();
    /**
     * @symbol ?createSideBySideCatchupSystem\@VRFlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideCatchupSystem();

};
