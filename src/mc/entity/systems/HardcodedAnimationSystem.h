#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
