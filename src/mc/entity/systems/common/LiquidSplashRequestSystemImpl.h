#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace LiquidSplashRequestSystemImpl {
// NOLINTBEGIN
MCAPI void
doTick(class StrictEntityContext const&, struct UpdateWaterStateRequestComponent const&, class Optional<struct ActorGameTypeComponent const> const&, class Optional<class FlagComponent<struct InLavaFlag> const> const&, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const> const&, class Optional<class FlagComponent<struct ActorHeadWasInWaterFlag> const> const&, class EntityModifier<class FlagComponent<struct PostSplashGameEventRequestFlag>, struct WaterSplashEffectRequestComponent>, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace LiquidSplashRequestSystemImpl
