#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorWalkAnimationComponent.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorWalkAnimationComponent;
struct BlazeFlagComponent;
struct LavaSlimeFlagComponent;
struct MobAnimationComponent;
struct MobBodyRotationComponent;
struct MobHurtTimeComponent;
struct MobIsJumpingFlagComponent;
struct OnFireComponent;
struct PassengerComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace HardcodedAnimationSystem {
void computeMovementThisTick(::StateVectorComponent const& stateVector, ::ActorWalkAnimationComponent& walk) {
    // Horizontal distance travelled since last tick; the vertical component is deliberately excluded.
    float const dx = stateVector.mPos->x - stateVector.mPosPrev->x;
    float const dz = stateVector.mPos->z - stateVector.mPosPrev->z;
    walk.mMovementThisTick = std::sqrt(dx * dx + dz * dz);
}
// functions
// NOLINTBEGIN
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
// NOLINTEND

} // namespace HardcodedAnimationSystem
