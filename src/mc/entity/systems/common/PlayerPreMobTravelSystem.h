#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class PlayerPreMobTravelSystem {
public:
    // prevent constructor by default
    PlayerPreMobTravelSystem& operator=(PlayerPreMobTravelSystem const&);
    PlayerPreMobTravelSystem(PlayerPreMobTravelSystem const&);
    PlayerPreMobTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createPlayerPreMobTravelSystem@PlayerPreMobTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPreMobTravelSystem();

    // symbol:
    // ?tickPlayerPreMobTravelSystem@PlayerPreMobTravelSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@UMobTravelComponent@@@@$$CBUAbilitiesComponent@@$$CBUStateVectorComponent@@$$CBUFlySpeedComponent@@@@V?$EntityModifier@UPlayerPreMobTravelComponent@@@@@Z
    MCAPI static void tickPlayerPreMobTravelSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PlayerComponentFlag>, struct MobTravelComponent>,
            struct AbilitiesComponent const,
            struct StateVectorComponent const,
            struct FlySpeedComponent const>                      view,
        class EntityModifier<struct PlayerPreMobTravelComponent> mod
    );

    // NOLINTEND
};
