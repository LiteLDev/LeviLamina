#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class WaterTravelSystem {
public:
    // prevent constructor by default
    WaterTravelSystem& operator=(WaterTravelSystem const&);
    WaterTravelSystem(WaterTravelSystem const&);
    WaterTravelSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createWaterTravelSystem();

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
            class Optional<struct OnGroundFlagComponent const>> view,
        class ViewT<
            class StrictEntityContext,
            struct MovementAttributesComponent const,
            struct MovementSpeedComponent const> speedData,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> players
    );

    // NOLINTEND
};
