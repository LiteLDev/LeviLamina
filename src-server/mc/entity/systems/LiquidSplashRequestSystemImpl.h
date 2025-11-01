#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorGameTypeComponent;
struct ActorHeadInWaterFlagComponent;
struct ActorHeadWasInWaterFlagComponent;
struct ExternalDataInterface;
struct PostSplashGameEventRequestComponent;
struct UpdateWaterStateRequestComponent;
struct WasInLavaFlagComponent;
struct WaterSplashEffectRequestComponent;
// clang-format on

namespace LiquidSplashRequestSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doTick(
    ::StrictEntityContext const&                                                                 entity,
    ::UpdateWaterStateRequestComponent const&                                                    waterState,
    ::Optional<::ActorGameTypeComponent const> const&                                            playerGameType,
    ::Optional<::WasInLavaFlagComponent const> const&                                            wasInLava,
    ::Optional<::ActorHeadInWaterFlagComponent const> const&                                     headInWater,
    ::Optional<::ActorHeadWasInWaterFlagComponent const> const&                                  headWasInWater,
    ::EntityModifier<::PostSplashGameEventRequestComponent, ::WaterSplashEffectRequestComponent> modifier,
    ::ExternalDataInterface const&                                                               externalData
);
// NOLINTEND

} // namespace LiquidSplashRequestSystemImpl
