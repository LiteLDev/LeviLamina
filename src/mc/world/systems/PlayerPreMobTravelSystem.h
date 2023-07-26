#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class PlayerPreMobTravelSystem {

public:
    // prevent constructor by default
    PlayerPreMobTravelSystem& operator=(PlayerPreMobTravelSystem const&) = delete;
    PlayerPreMobTravelSystem(PlayerPreMobTravelSystem const&)            = delete;
    PlayerPreMobTravelSystem()                                           = delete;

public:
    /**
     * @symbol ?createPlayerPreMobTravelSystem\@PlayerPreMobTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPreMobTravelSystem(); // NOLINT
    /**
     * @symbol
     * ?tickPlayerPreMobTravelSystem\@PlayerPreMobTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@UMobTravelComponent\@\@\@\@$$CBUAbilitiesComponent\@\@$$CBUStateVectorComponent\@\@$$CBUFlySpeedComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPlayerPreMobTravelComponent\@\@\@\@\@Z
     */
    MCAPI static void tickPlayerPreMobTravelSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>, struct MobTravelComponent>, struct AbilitiesComponent const, struct StateVectorComponent const, struct FlySpeedComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PlayerPreMobTravelComponent>); // NOLINT
};
