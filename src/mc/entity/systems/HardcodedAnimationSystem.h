#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorWalkAnimationComponent;
struct BlazeFlagComponent;
struct DynamicRenderOffsetComponent;
struct LavaSlimeFlagComponent;
struct MobAnimationComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MobHurtTimeComponent;
struct MobIsJumpingFlagComponent;
struct OnFireComponent;
struct PassengerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace HardcodedAnimationSystem {
// functions
// NOLINTBEGIN
MCAPI void
addOffsetToMovementThisTick(::DynamicRenderOffsetComponent const& offset, ::ActorWalkAnimationComponent& walk);

MCAPI void computeMovementThisTick(::StateVectorComponent const& stateVector, ::ActorWalkAnimationComponent& walk);

MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doHardcodedAnimation(
    ::StrictEntityContext const&,
    ::MobAnimationComponent&                      mobAnim,
    ::MobBodyRotationComponent const&             bodyRot,
    ::MobHurtTimeComponent const&                 mobHurtTime,
    ::ActorWalkAnimationComponent&                mobWalkAnimation,
    ::ActorDataFlagComponent const&               syncedActorData,
    ::Optional<::BlazeFlagComponent const>        blaze,
    ::Optional<::LavaSlimeFlagComponent const>    lavaSlime,
    ::Optional<::OnFireComponent const>           onFire,
    ::Optional<::PassengerComponent const>        passenger,
    ::Optional<::MobIsJumpingFlagComponent const> isJumping
);

MCAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::StateVectorComponent const,
        ::ActorWalkAnimationComponent> speedView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::DynamicRenderOffsetComponent const,
        ::ActorWalkAnimationComponent> offsetView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>,
        ::MobAnimationComponent,
        ::MobBodyRotationComponent const,
        ::MobHurtTimeComponent const,
        ::ActorWalkAnimationComponent,
        ::ActorDataFlagComponent const,
        ::Optional<::BlazeFlagComponent const>,
        ::Optional<::LavaSlimeFlagComponent const>,
        ::Optional<::OnFireComponent const>,
        ::Optional<::PassengerComponent const>,
        ::Optional<::MobIsJumpingFlagComponent const>> view
);
// NOLINTEND

} // namespace HardcodedAnimationSystem
