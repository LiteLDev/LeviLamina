#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"

class VRFlyTravelSystem {

public:
    // prevent constructor by default
    VRFlyTravelSystem& operator=(VRFlyTravelSystem const&) = delete;
    VRFlyTravelSystem(VRFlyTravelSystem const&)            = delete;
    VRFlyTravelSystem()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_postPlayerTravelSystem\@VRFlyTravelSystem\@\@SAXAEBULocalPlayerPrePlayerTravelComponent\@\@AEAUAbilitiesComponent\@\@\@Z
     */
    MCAPI static void
    _postPlayerTravelSystem(struct LocalPlayerPrePlayerTravelComponent const&, struct AbilitiesComponent&);
    /**
     * @symbol
     * ?_prePlayerTravelSystem\@VRFlyTravelSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUPlayerInputModeComponent\@\@AEAUMobTravelComponent\@\@AEAUAbilitiesComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@ULocalPlayerPrePlayerTravelComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _prePlayerTravelSystem(class StrictEntityContext const&, struct PlayerInputModeComponent const&, struct MobTravelComponent&, struct AbilitiesComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct LocalPlayerPrePlayerTravelComponent>);
    /**
     * @symbol
     * ?_tickPostPlayerTravelSystem\@VRFlyTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBULocalPlayerPrePlayerTravelComponent\@\@UAbilitiesComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickPostPlayerTravelSystem(class ViewT<
                                                  class StrictEntityContext,
                                                  class EntityRegistryBase,
                                                  struct LocalPlayerPrePlayerTravelComponent const,
                                                  struct AbilitiesComponent>);
    /**
     * @symbol ?createPostPlayerTravelSystem\@VRFlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostPlayerTravelSystem();
    /**
     * @symbol ?createPrePlayerTravelSystem\@VRFlyTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPrePlayerTravelSystem();
    // NOLINTEND
};
