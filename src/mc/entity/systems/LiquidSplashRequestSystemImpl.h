#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace LiquidSplashRequestSystemImpl {
// NOLINTBEGIN
MCAPI void doTick(
    class StrictEntityContext const&                                                 entity,
    struct UpdateWaterStateRequestComponent const&                                   waterState,
    class Optional<struct ActorGameTypeComponent const> const&                       playerGameType,
    class Optional<class FlagComponent<struct InLavaFlag> const> const&              wasInLava,
    class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const> const&    headInWater,
    class Optional<class FlagComponent<struct ActorHeadWasInWaterFlag> const> const& headWasInWater,
    class EntityModifier<
        class FlagComponent<struct PostSplashGameEventRequestFlag>,
        struct WaterSplashEffectRequestComponent> modifier,
    struct ExternalDataInterface const&           externalData
);
// NOLINTEND

}; // namespace LiquidSplashRequestSystemImpl
