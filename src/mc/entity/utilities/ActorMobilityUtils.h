#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class AABB;
class EntityContext;
class GetCollisionShapeInterface;
class IConstBlockSource;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorIsImmobileFlagComponent;
struct ActorIsKnockedBackOnDeathFlagComponent;
struct BlazeFlagComponent;
struct ExitFromPassengerFlagComponent;
struct HorseFlagComponent;
struct LavaSlimeFlagComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobFlagComponent;
struct MobIsJumpingFlagComponent;
struct MobJumpComponent;
struct MovedOnSpawnComponent;
struct MovementAttributesComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct SubBBsComponent;
struct VehicleComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace ActorMobilityUtils {
// functions
// NOLINTBEGIN
MCAPI bool canJump(
    ::ActorDataFlagComponent const&     actorData,
    ::IConstBlockSource const&          region,
    ::StateVectorComponent const&       stateVector,
    ::AABBShapeComponent const&         aabbShape,
    ::GetCollisionShapeInterface const& collisionShape
);

MCAPI void endJump(
    ::StrictEntityContext const&      context,
    ::StateVectorComponent const&     stateVectorComponent,
    ::ActorDataJumpDurationComponent& actorDataJumpDurationComponent,
    ::ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    ::MobJumpComponent&               mobJumpComponent,
    ::VehicleComponent const*         vehicleComponent,
    ::ViewT<::StrictEntityContext, ::Include<::ParrotFlagComponent>, ::PassengerComponent const> const&
        parrotPassengers,
    ::EntityModifier<::ExitFromPassengerFlagComponent, ::StopRidingRequestComponent, ::MobIsJumpingFlagComponent> const&
        modifier
);

MCAPI float getBrightness(
    ::StrictEntityContext const&                                               context,
    float                                                                      alpha,
    ::IConstBlockSource const&                                                 region,
    ::AABBShapeComponent const&                                                aabbShapeComponent,
    ::OffsetsComponent const&                                                  offsetsComponent,
    ::StateVectorComponent const&                                              stateVectorComponent,
    ::ViewT<::StrictEntityContext, ::Include<::BlazeFlagComponent>> const&     blazeView,
    ::ViewT<::StrictEntityContext, ::Include<::LavaSlimeFlagComponent>> const& lavaSlimeView
);

MCAPI bool isImmobile(
    ::StrictEntityContext const& context,
    ::ViewT<
        ::StrictEntityContext,
        ::ActorDataFlagComponent const,
        ::Optional<::ActorIsImmobileFlagComponent const>> const* actorView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobFlagComponent>,
        ::MovementAttributesComponent const,
        ::ActorDataFlagComponent const,
        ::Optional<::ActorIsKnockedBackOnDeathFlagComponent const>,
        ::Optional<::MovedOnSpawnComponent const>> const* mobView,
    ::ViewT<
        ::StrictEntityContext,
        ::ActorDataFlagComponent const,
        ::Optional<::VehicleInputIntentComponent const>,
        ::Include<::OnGroundFlagComponent, ::HorseFlagComponent>,
        ::Exclude<::MobAllowStandSlidingFlagComponent, ::MobIsJumpingFlagComponent>> const*               horseView,
    ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>> const*                                onlyHorseView,
    ::ViewT<::StrictEntityContext, ::PlayerIsSleepingFlagComponent const, ::PlayerComponent const> const* playerView
);

MCAPI void moveBBs(::Vec3 const& pos, ::AABBShapeComponent& aabb, ::SubBBsComponent& subBBs);

MCAPI bool onHoverableBlock(::IConstBlockSource const& region, ::Vec3 const& pos, ::AABB const& aabb);

MCAPI bool shouldApplyLava(::IConstBlockSource const& region, ::EntityContext const& entity);

MCAPI bool shouldApplyLava(
    ::IConstBlockSource const&  region,
    ::AABBShapeComponent const& aabb,
    ::SubBBsComponent const&    subBBs,
    bool                        isImmuneToLava
);

MCAPI void startSpinAttack(::EntityContext& entity, int riptideLevel);
// NOLINTEND

} // namespace ActorMobilityUtils
