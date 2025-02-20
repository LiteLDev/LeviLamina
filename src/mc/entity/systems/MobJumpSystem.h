#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class JumpControlComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorHeadInWaterFlagComponent;
struct CanStandOnSnowFlagComponent;
struct HasLightweightFamilyFlagComponent;
struct ImmuneToLavaDragComponent;
struct JumpFromGroundRequestComponent;
struct MobEffectsComponent;
struct MobJumpComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct SquidFlagComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct SwimAmountComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
// clang-format on

namespace MobJumpSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createCleanupSystem();

MCAPI void doDecrementNoJumpDelaySystem(::MobJumpComponent& mobJumpComponent);

MCAPI void doMobJumpSystem(
    ::StrictEntityContext const&                          context,
    ::Optional<::JumpControlComponent const>              jumpControl,
    ::Optional<::OnGroundFlagComponent const>             onGround,
    ::Optional<::PlayerComponent const>                   isPlayer,
    ::Optional<::SquidFlagComponent const>                isSquid,
    ::Optional<::WasInWaterFlagComponent const>           isInWater,
    ::Optional<::ActorHeadInWaterFlagComponent const>     breathingPointInWater,
    ::Optional<::CanStandOnSnowFlagComponent const>       canStandOnSnow,
    ::Optional<::HasLightweightFamilyFlagComponent const> isLightweightFamily,
    ::Optional<::ImmuneToLavaDragComponent const>         isImmuneToLavaDrag,
    ::AABBShapeComponent const&                           aabbShape,
    ::SwimAmountComponent const&                          swimAmount,
    ::MobEffectsComponent const&                          mobEffects,
    ::SubBBsComponent const&                              subBBs,
    ::ActorDataFlagComponent const&                       synchedActorData,
    ::MobJumpComponent&                                   mobJump,
    ::StateVectorComponent&                               stateVector,
    ::EntityModifier<::JumpFromGroundRequestComponent>    entityModifier,
    ::IConstBlockSource const&                            region
);

MCAPI void doResetNoJumpDelaySystem(::StrictEntityContext const&, ::MobJumpComponent& mobJumpComponent);

MCAPI void doSwimmerSwimUp(
    ::Optional<::JumpControlComponent const> const& jumpControl,
    ::Optional<::SquidFlagComponent const> const&   isSquid,
    ::MobEffectsComponent const&                    mobEffects,
    ::MobJumpComponent&                             mobJump,
    ::StateVectorComponent&                         stateVector
);

MCAPI bool shouldAscendLadder(
    ::Optional<::PlayerComponent const> const&                   isPlayer,
    ::Optional<::CanStandOnSnowFlagComponent const> const&       canStandOnSnow,
    ::Optional<::HasLightweightFamilyFlagComponent const> const& isLightweightFamily,
    ::AABBShapeComponent const&                                  aabbShapeComponent,
    ::ActorDataFlagComponent const&                              synchedActorDataComponent,
    ::StateVectorComponent const&                                stateVectorComponent,
    ::IConstBlockSource const&                                   region
);
// NOLINTEND

} // namespace MobJumpSystem
