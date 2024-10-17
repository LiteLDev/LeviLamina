#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

namespace MobJumpFromGroundSystemImpl {
// NOLINTBEGIN
MCAPI void doFilter(
    class StrictEntityContext const&                                                  context,
    class Optional<class FlagComponent<struct LocalPlayerComponentFlag> const> const& localPlayer,
    class Optional<class FlagComponent<struct LavaSlimeFlag> const> const&            lavaSlime,
    class Optional<class FlagComponent<struct SquidFlag> const> const&                squid,
    class EntityModifier<
        class FlagComponent<struct LocalPlayerJumpRequestFlag>,
        class FlagComponent<struct LavaSlimeJumpRequestFlag>,
        class FlagComponent<struct SquidJumpRequestFlag>,
        class FlagComponent<struct OtherJumpRequestFlag>> mod
);

MCAPI void doLavaSlimeJumpFromGround(
    class StrictEntityContext const&                          entity,
    struct AABBShapeComponent const&                          aabbShapeComponent,
    struct SynchedActorDataComponent const&                   synchedActorDataComponent,
    struct StateVectorComponent&                              stateVectorComponent,
    struct MobEffectsComponent const&                         mobEffectsComponent,
    class EntityModifier<struct TriggerJumpRequestComponent>& modifier,
    class IConstBlockSource const&                            region
);

MCAPI void doLocalPlayerJumpFromGround(
    class StrictEntityContext const&                          entity,
    class Optional<class JumpControlComponent const> const&   jumpControl,
    struct AABBShapeComponent const&                          aabbShapeComponent,
    struct ActorDataFlagComponent const&                      actorDataFlagComponent,
    struct ActorRotationComponent const&                      actorRotationComponent,
    struct MobEffectsComponent const&                         mobEffectsComponent,
    struct MobJumpComponent&                                  mobJumpComponent,
    struct StateVectorComponent&                              stateVectorComponent,
    struct PlayerActionComponent&                             playerAction,
    class EntityModifier<struct TriggerJumpRequestComponent>& modifier,
    class StrictExecutionContext<
        struct Filter<
            class FlagComponent<struct CanStandOnSnowFlag>,
            class FlagComponent<struct HasLightweightFamilyFlag>,
            class FlagComponent<struct HorseFlag>,
            class FlagComponent<struct MobFlag>,
            class FlagComponent<struct ParrotFlag>,
            struct VehicleComponent,
            class FlagComponent<struct CamelFlag>,
            class FlagComponent<struct PlayerComponentFlag>,
            class FlagComponent<struct LocalPlayerJumpRequestFlag>,
            class FlagComponent<struct LavaSlimeJumpRequestFlag>,
            class FlagComponent<struct SquidJumpRequestFlag>,
            class FlagComponent<struct OtherJumpRequestFlag>>,
        struct Read<
            struct AABBShapeComponent,
            struct MovementAbilitiesComponent,
            struct ActorTypeComponent,
            struct FallDistanceComponent,
            struct PassengerComponent,
            struct ActorGameTypeComponent,
            struct ActorDataFlagComponent,
            struct VehicleComponent,
            struct ActorRotationComponent,
            struct MobBodyRotationComponent,
            struct RenderRotationComponent,
            struct StandAnimationComponent,
            struct OffsetsComponent,
            struct VanillaOffsetComponent,
            struct PassengerRenderingRidingOffsetComponent,
            struct MobEffectsComponent,
            struct SynchedActorDataComponent,
            class JumpControlComponent,
            struct DimensionTypeComponent>,
        struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>,
        struct AddRemove<struct TriggerJumpRequestComponent>,
        struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
        struct GlobalWrite<>,
        struct EntityFactoryT<>>&  executionContext,
    class IConstBlockSource const& region
);

MCAPI void doOtherMobJumpFromGround(
    class StrictEntityContext const&                          entity,
    class Optional<class JumpControlComponent const> const&   jumpControl,
    struct AABBShapeComponent const&                          aabbShapeComponent,
    struct ActorDataFlagComponent const&                      actorDataFlagComponent,
    struct ActorRotationComponent const&                      actorRotationComponent,
    struct MobEffectsComponent const&                         mobEffectsComponent,
    struct MobJumpComponent&                                  mobJumpComponent,
    struct StateVectorComponent&                              stateVectorComponent,
    class EntityModifier<struct TriggerJumpRequestComponent>& modifier,
    bool                                                      isSquid,
    class IConstBlockSource const&                            region
);

MCAPI void mobJumpFromGround(
    class StrictEntityContext const&                          entity,
    struct AABBShapeComponent const&                          aabbShapeComponent,
    struct ActorDataFlagComponent const&                      actorDataFlagComponent,
    struct ActorRotationComponent const&                      actorRotationComponent,
    struct MobEffectsComponent const&                         mobEffectsComponent,
    class JumpControlComponent const*                         jumpControlComponent,
    struct MobJumpComponent&                                  mobJumpComponent,
    struct StateVectorComponent&                              stateVectorComponent,
    class EntityModifier<struct TriggerJumpRequestComponent>& modifier,
    class IConstBlockSource const&                            region,
    bool                                                      isSquid
);
// NOLINTEND

}; // namespace MobJumpFromGroundSystemImpl
