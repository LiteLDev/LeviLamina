#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class JumpControlComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct JumpFromGroundRequestComponent;
struct LavaSlimeFlagComponent;
struct LavaSlimeJumpRequestComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerComponent;
struct LocalPlayerJumpRequestComponent;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlagComponent;
struct MobJumpComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct OtherJumpRequestComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerActionComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct SquidFlagComponent;
struct SquidJumpRequestComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TriggerJumpRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MobJumpFromGroundSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doFilter(
    ::StrictEntityContext const&                      context,
    ::Optional<::LocalPlayerComponent const> const&   localPlayer,
    ::Optional<::LavaSlimeFlagComponent const> const& lavaSlime,
    ::Optional<::SquidFlagComponent const> const&     squid,
    ::EntityModifier<
        ::LocalPlayerJumpRequestComponent,
        ::LavaSlimeJumpRequestComponent,
        ::SquidJumpRequestComponent,
        ::OtherJumpRequestComponent> mod
);

MCNAPI void doLavaSlimeJumpFromGround(
    ::StrictEntityContext const&                     entity,
    ::AABBShapeComponent const&                      aabbShapeComponent,
    ::SynchedActorDataComponent const&               synchedActorDataComponent,
    ::StateVectorComponent&                          stateVectorComponent,
    ::MobEffectsComponent const&                     mobEffectsComponent,
    ::EntityModifier<::TriggerJumpRequestComponent>& modifier,
    ::IConstBlockSource const&                       region
);

MCNAPI void doLocalPlayerJumpFromGround(
    ::StrictEntityContext const&                     entity,
    ::Optional<::JumpControlComponent const> const&  jumpControl,
    ::AABBShapeComponent const&                      aabbShapeComponent,
    ::ActorDataFlagComponent const&                  actorDataFlagComponent,
    ::ActorRotationComponent const&                  actorRotationComponent,
    ::MobEffectsComponent const&                     mobEffectsComponent,
    ::MobJumpComponent&                              mobJumpComponent,
    ::StateVectorComponent&                          stateVectorComponent,
    ::PlayerActionComponent&                         playerAction,
    ::EntityModifier<::TriggerJumpRequestComponent>& modifier,
    ::StrictExecutionContext<
        ::Filter<
            ::CanStandOnSnowFlagComponent,
            ::HasLightweightFamilyFlagComponent,
            ::HorseFlagComponent,
            ::MobFlagComponent,
            ::ParrotFlagComponent,
            ::VehicleComponent,
            ::CamelFlagComponent,
            ::PlayerComponent,
            ::LocalPlayerJumpRequestComponent,
            ::LavaSlimeJumpRequestComponent,
            ::SquidJumpRequestComponent,
            ::OtherJumpRequestComponent>,
        ::Read<
            ::AABBShapeComponent,
            ::MovementAbilitiesComponent,
            ::ActorTypeComponent,
            ::FallDistanceComponent,
            ::PassengerComponent,
            ::ActorGameTypeComponent,
            ::ActorDataFlagComponent,
            ::VehicleComponent,
            ::ActorRotationComponent,
            ::MobBodyRotationComponent,
            ::RenderRotationComponent,
            ::StandAnimationComponent,
            ::OffsetsComponent,
            ::VanillaOffsetComponent,
            ::PassengerRenderingRidingOffsetComponent,
            ::MobEffectsComponent,
            ::SynchedActorDataComponent,
            ::JumpControlComponent,
            ::DimensionTypeComponent>,
        ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
        ::AddRemove<::TriggerJumpRequestComponent>,
        ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>&   executionContext,
    ::IConstBlockSource const& region
);

MCNAPI void doOtherMobJumpFromGround(
    ::StrictEntityContext const&                     entity,
    ::Optional<::JumpControlComponent const> const&  jumpControl,
    ::AABBShapeComponent const&                      aabbShapeComponent,
    ::ActorDataFlagComponent const&                  actorDataFlagComponent,
    ::ActorRotationComponent const&                  actorRotationComponent,
    ::MobEffectsComponent const&                     mobEffectsComponent,
    ::MobJumpComponent&                              mobJumpComponent,
    ::StateVectorComponent&                          stateVectorComponent,
    ::EntityModifier<::TriggerJumpRequestComponent>& modifier,
    bool                                             isSquid,
    ::IConstBlockSource const&                       region
);

MCNAPI void mobJumpFromGround(
    ::StrictEntityContext const&                     entity,
    ::AABBShapeComponent const&                      aabbShapeComponent,
    ::ActorDataFlagComponent const&                  actorDataFlagComponent,
    ::ActorRotationComponent const&                  actorRotationComponent,
    ::MobEffectsComponent const&                     mobEffectsComponent,
    ::JumpControlComponent const*                    jumpControlComponent,
    ::MobJumpComponent&                              mobJumpComponent,
    ::StateVectorComponent&                          stateVectorComponent,
    ::EntityModifier<::TriggerJumpRequestComponent>& modifier,
    ::IConstBlockSource const&                       region,
    bool                                             isSquid
);

MCNAPI void tickFilterSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::JumpFromGroundRequestComponent>,
        ::Optional<::LocalPlayerComponent const>,
        ::Optional<::LavaSlimeFlagComponent const>,
        ::Optional<::SquidFlagComponent const>> view,
    ::EntityModifier<
        ::LocalPlayerJumpRequestComponent,
        ::LavaSlimeJumpRequestComponent,
        ::SquidJumpRequestComponent,
        ::OtherJumpRequestComponent> mod
);
// NOLINTEND

} // namespace MobJumpFromGroundSystemImpl
