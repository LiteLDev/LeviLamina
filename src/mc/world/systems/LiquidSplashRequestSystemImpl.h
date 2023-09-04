#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace LiquidSplashRequestSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doTick@LiquidSplashRequestSystemImpl@@YAXAEBVStrictEntityContext@@AEBUUpdateWaterStateRequestComponent@@AEBV?$Optional@$$CBUActorGameTypeComponent@@@@AEBV?$Optional@$$CBV?$FlagComponent@UInLavaFlag@@@@@@AEBV?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UPostSplashGameEventRequestFlag@@@@V?$FlagComponent@UWaterSplashEffectRequestFlag@@@@@@AEBUExternalDataInterface@@@Z
MCAPI void doTick(class StrictEntityContext const&, struct UpdateWaterStateRequestComponent const&, class Optional<struct ActorGameTypeComponent const> const&, class Optional<class FlagComponent<struct InLavaFlag> const> const&, class Optional<class FlagComponent<struct InWaterFlag> const> const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PostSplashGameEventRequestFlag>, class FlagComponent<struct WaterSplashEffectRequestFlag>>, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace LiquidSplashRequestSystemImpl
