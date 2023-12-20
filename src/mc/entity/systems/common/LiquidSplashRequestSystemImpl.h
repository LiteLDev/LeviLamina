#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace LiquidSplashRequestSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doTick@LiquidSplashRequestSystemImpl@@YAXAEBVStrictEntityContext@@AEBUUpdateWaterStateRequestComponent@@AEBV?$Optional@$$CBUActorGameTypeComponent@@@@AEBV?$Optional@$$CBV?$FlagComponent@UInLavaFlag@@@@@@AEBV?$Optional@$$CBV?$FlagComponent@UActorHeadInWaterFlag@@@@@@AEBV?$Optional@$$CBV?$FlagComponent@UActorHeadWasInWaterFlag@@@@@@V?$EntityModifier@V?$FlagComponent@UPostSplashGameEventRequestFlag@@@@UWaterSplashEffectRequestComponent@@@@AEBUExternalDataInterface@@@Z
MCAPI void
doTick(class StrictEntityContext const&, struct UpdateWaterStateRequestComponent const&, class Optional<struct ActorGameTypeComponent const> const&, class Optional<class FlagComponent<struct InLavaFlag> const> const&, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const> const&, class Optional<class FlagComponent<struct ActorHeadWasInWaterFlag> const> const&, class EntityModifier<class FlagComponent<struct PostSplashGameEventRequestFlag>, struct WaterSplashEffectRequestComponent>, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace LiquidSplashRequestSystemImpl
