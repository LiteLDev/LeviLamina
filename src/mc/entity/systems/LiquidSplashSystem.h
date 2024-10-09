#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class LiquidSplashSystem {
public:
    // prevent constructor by default
    LiquidSplashSystem& operator=(LiquidSplashSystem const&);
    LiquidSplashSystem(LiquidSplashSystem const&);
    LiquidSplashSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _emitWaterSplashEffect(class ActorOwnerComponent& owner, struct WaterSplashEffectRequestComponent const& c);

    MCAPI static void _singleTickLiquidSplash(
        class StrictEntityContext const& entity,
        class ViewT<
            class StrictEntityContext,
            struct WaterSplashEffectRequestComponent const,
            class ActorOwnerComponent> splashEffects,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>,
            class ActorOwnerComponent> gameEvents
    );

    MCAPI static void _tickLiquidSplash(
        class ViewT<
            class StrictEntityContext,
            struct WaterSplashEffectRequestComponent const,
            class ActorOwnerComponent> waterSplashEffects,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>,
            class ActorOwnerComponent> splashGameEvents
    );

    // NOLINTEND
};
