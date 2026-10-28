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
struct ActorRotationComponent;
struct GetCollisionShapeViews;
struct LavaSlimeFlagComponent;
struct LavaSlimeJumpRequestComponent;
struct LocalPlayerComponent;
struct LocalPlayerJumpRequestComponent;
struct MobEffectsComponent;
struct MobJumpComponent;
struct OtherJumpRequestComponent;
struct PlayerActionComponent;
struct SquidFlagComponent;
struct SquidJumpRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TriggerJumpRequestComponent;
// clang-format on

namespace MobJumpFromGroundSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doFilter(
    ::StrictEntityContext const&                      context,
    ::Optional<::LocalPlayerComponent const> const&   localPlayer,
    ::Optional<::LavaSlimeFlagComponent const> const& lavaSlime,
    ::Optional<::SquidFlagComponent const> const&     squid,
    ::EntityModifier<
        ::LocalPlayerJumpRequestComponent,
        ::LavaSlimeJumpRequestComponent,
        ::SquidJumpRequestComponent,
        ::OtherJumpRequestComponent> const& mod
);

MCAPI void doLavaSlimeJumpFromGround(
    ::StrictEntityContext const&                           entity,
    ::AABBShapeComponent const&                            aabbShapeComponent,
    ::SynchedActorDataComponent const&                     synchedActorDataComponent,
    ::StateVectorComponent&                                stateVectorComponent,
    ::MobEffectsComponent const&                           mobEffectsComponent,
    ::EntityModifier<::TriggerJumpRequestComponent> const& modifier,
    ::IConstBlockSource const&                             region
);

MCAPI void doLocalPlayerJumpFromGround(
    ::StrictEntityContext const&                           entity,
    ::Optional<::JumpControlComponent const> const&        jumpControl,
    ::AABBShapeComponent const&                            aabbShapeComponent,
    ::ActorDataFlagComponent const&                        actorDataFlagComponent,
    ::ActorRotationComponent const&                        actorRotationComponent,
    ::MobEffectsComponent const&                           mobEffectsComponent,
    ::MobJumpComponent&                                    mobJumpComponent,
    ::StateVectorComponent&                                stateVectorComponent,
    ::PlayerActionComponent&                               playerAction,
    ::EntityModifier<::TriggerJumpRequestComponent> const& modifier,
    ::GetCollisionShapeViews const&                        collisionViews,
    ::IConstBlockSource const&                             region
);

MCAPI void doOtherMobJumpFromGround(
    ::StrictEntityContext const&                           entity,
    ::Optional<::JumpControlComponent const> const&        jumpControl,
    ::AABBShapeComponent const&                            aabbShapeComponent,
    ::ActorDataFlagComponent const&                        actorDataFlagComponent,
    ::ActorRotationComponent const&                        actorRotationComponent,
    ::MobEffectsComponent const&                           mobEffectsComponent,
    ::MobJumpComponent&                                    mobJumpComponent,
    ::StateVectorComponent&                                stateVectorComponent,
    ::EntityModifier<::TriggerJumpRequestComponent> const& modifier,
    bool                                                   isSquid,
    ::IConstBlockSource const&                             region
);

MCAPI void mobJumpFromGround(
    ::StrictEntityContext const&                           entity,
    ::AABBShapeComponent const&                            aabbShapeComponent,
    ::ActorDataFlagComponent const&                        actorDataFlagComponent,
    ::ActorRotationComponent const&                        actorRotationComponent,
    ::MobEffectsComponent const&                           mobEffectsComponent,
    ::JumpControlComponent const*                          jumpControlComponent,
    ::MobJumpComponent&                                    mobJumpComponent,
    ::StateVectorComponent&                                stateVectorComponent,
    ::EntityModifier<::TriggerJumpRequestComponent> const& modifier,
    ::IConstBlockSource const&                             region,
    bool                                                   isSquid
);
// NOLINTEND

} // namespace MobJumpFromGroundSystemImpl
