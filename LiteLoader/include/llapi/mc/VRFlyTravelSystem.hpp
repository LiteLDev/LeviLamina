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
     * @symbol ?_postPlayerTravelSystem\@VRFlyTravelSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUAbilitiesComponent\@\@AEBULocalPlayerPrePlayerTravelComponent\@\@\@Z
     */
    MCAPI static void _postPlayerTravelSystem(class StrictEntityContext const &, struct AbilitiesComponent &, struct LocalPlayerPrePlayerTravelComponent const &);
    /**
     * @symbol ?_prePlayerTravelSystem\@VRFlyTravelSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUMobTravelComponent\@\@AEAUAbilitiesComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@ULocalPlayerPrePlayerTravelComponent\@\@\@\@\@Z
     */
    MCAPI static void _prePlayerTravelSystem(class StrictEntityContext const &, struct MobTravelComponent &, struct AbilitiesComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct LocalPlayerPrePlayerTravelComponent>);
    /**
     * @symbol ?createPostPlayerTravelSystem\@VRFlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostPlayerTravelSystem();
    /**
     * @symbol ?createPrePlayerTravelSystem\@VRFlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPrePlayerTravelSystem();

};
