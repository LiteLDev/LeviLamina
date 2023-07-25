#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace LiquidSplashRequestSystemImpl {
/**
 * @symbol
 * ?doTick\@LiquidSplashRequestSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUUpdateWaterStateRequestComponent\@\@AEBV?$Optional\@$$CBUActorGameTypeComponent\@\@\@\@AEBV?$Optional\@$$CBV?$FlagComponent\@UInLavaFlag\@\@\@\@\@\@AEBV?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UPostSplashGameEventRequestFlag\@\@\@\@V?$FlagComponent\@UWaterSplashEffectRequestFlag\@\@\@\@\@\@AEBUExternalDataInterface\@\@\@Z
 */
MCAPI void doTick(class StrictEntityContext const&, struct UpdateWaterStateRequestComponent const&, class Optional<struct ActorGameTypeComponent const> const&, class Optional<class FlagComponent<struct InLavaFlag> const> const&, class Optional<class FlagComponent<struct InWaterFlag> const> const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PostSplashGameEventRequestFlag>, class FlagComponent<struct WaterSplashEffectRequestFlag>>, struct ExternalDataInterface const&);

}; // namespace LiquidSplashRequestSystemImpl
