#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class WaterTravelSystem {
public:
    // prevent constructor by default
    WaterTravelSystem& operator=(WaterTravelSystem const&);
    WaterTravelSystem(WaterTravelSystem const&);
    WaterTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createWaterTravelSystem@WaterTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createWaterTravelSystem();

    // symbol:
    // ?tickWaterTravelSystem@WaterTravelSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@$$CBV?$FlagComponent@UActorMovementTickNeededFlag@@@@$$CBV?$FlagComponent@UWaterTravelFlag@@@@@@$$CBUMovementAttributesComponent@@$$CBUSwimSpeedMultiplierComponent@@$$CBUWaterWalkSpeedEnchantComponent@@UMobTravelComponent@@V?$Optional@$$CBV?$FlagComponent@UDolphinFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUMovementAttributesComponent@@$$CBUMovementSpeedComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@@Z
    MCAPI static void tickWaterTravelSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag> const,
                class FlagComponent<struct WaterTravelFlag> const>,
            struct MovementAttributesComponent const,
            struct SwimSpeedMultiplierComponent const,
            struct WaterWalkSpeedEnchantComponent const,
            struct MobTravelComponent,
            class Optional<class FlagComponent<struct DolphinFlag> const>,
            class Optional<class FlagComponent<struct OnGroundFlag> const>> view,
        class ViewT<
            class StrictEntityContext,
            struct MovementAttributesComponent const,
            struct MovementSpeedComponent const>,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> players
    );

    // NOLINTEND
};
