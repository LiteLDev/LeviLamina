#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

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
    _emitWaterSplashEffect(class ActorOwnerComponent&, struct WaterSplashEffectRequestComponent const&);

    MCAPI static void
    _singleTickLiquidSplash(class StrictEntityContext const&, class ViewT<class StrictEntityContext, struct WaterSplashEffectRequestComponent const, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>, class ActorOwnerComponent>);

    MCAPI static void
        _tickLiquidSplash(class ViewT<class StrictEntityContext, struct WaterSplashEffectRequestComponent const, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>, class ActorOwnerComponent>);

    // NOLINTEND
};
