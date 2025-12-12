#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct PostSplashGameEventRequestComponent;
struct TickingSystemWithInfo;
struct WaterSplashEffectRequestComponent;
// clang-format on

struct LiquidSplashSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _singleTickLiquidSplash(
        ::StrictEntityContext const&                                                                     entity,
        ::ViewT<::StrictEntityContext, ::WaterSplashEffectRequestComponent const, ::ActorOwnerComponent> splashEffects,
        ::ViewT<::StrictEntityContext, ::Include<::PostSplashGameEventRequestComponent>, ::ActorOwnerComponent>
            gameEvents
    );

    MCNAPI static void _tickLiquidSplash(
        ::ViewT<::StrictEntityContext, ::WaterSplashEffectRequestComponent const, ::ActorOwnerComponent>
            waterSplashEffects,
        ::ViewT<::StrictEntityContext, ::Include<::PostSplashGameEventRequestComponent>, ::ActorOwnerComponent>
            splashGameEvents
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
