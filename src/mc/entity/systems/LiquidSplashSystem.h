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
    // symbol: ?createSystem@LiquidSplashSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_emitWaterSplashEffect@LiquidSplashSystem@@CAXAEAVActorOwnerComponent@@AEBUWaterSplashEffectRequestComponent@@@Z
    MCAPI static void
    _emitWaterSplashEffect(class ActorOwnerComponent&, struct WaterSplashEffectRequestComponent const&);

    // symbol:
    // ?_singleTickLiquidSplash@LiquidSplashSystem@@CAXAEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@$$CBUWaterSplashEffectRequestComponent@@VActorOwnerComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPostSplashGameEventRequestFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void
    _singleTickLiquidSplash(class StrictEntityContext const&, class ViewT<class StrictEntityContext, struct WaterSplashEffectRequestComponent const, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>, class ActorOwnerComponent>);

    // symbol:
    // ?_tickLiquidSplash@LiquidSplashSystem@@CAXV?$ViewT@VStrictEntityContext@@$$CBUWaterSplashEffectRequestComponent@@VActorOwnerComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPostSplashGameEventRequestFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void
        _tickLiquidSplash(class ViewT<class StrictEntityContext, struct WaterSplashEffectRequestComponent const, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>, class ActorOwnerComponent>);

    // NOLINTEND
};
