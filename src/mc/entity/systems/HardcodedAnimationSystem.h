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
struct ActorWalkAnimationComponent;
struct BlazeFlagComponent;
struct DynamicRenderOffsetComponent;
struct InterpolateMovementNeededComponent;
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
    ::StrictEntityContext const&               mobAnim,
    ::MobAnimationComponent&                   bodyRot,
    ::MobBodyRotationComponent const&          mobHurtTime,
    ::MobHurtTimeComponent const&              mobWalkAnimation,
    ::ActorWalkAnimationComponent&             syncedActorData,
    ::ActorDataFlagComponent const&            blaze,
    ::Optional<::BlazeFlagComponent const>     lavaSlime,
    ::Optional<::LavaSlimeFlagComponent const> onFire,
    ::Optional<::OnFireComponent const>        passenger,
    ::Optional<::PassengerComponent const>     isJumping,
    ::Optional<::MobIsJumpingFlagComponent const>
);

MCAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent>,
        ::StateVectorComponent const,
        ::ActorWalkAnimationComponent> speedView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent>,
        ::DynamicRenderOffsetComponent const,
        ::ActorWalkAnimationComponent> offsetView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::MobFlagComponent>,
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
