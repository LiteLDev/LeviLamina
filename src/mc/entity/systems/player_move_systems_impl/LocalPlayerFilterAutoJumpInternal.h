#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededFlag;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlag;
struct CanStandOnSnowFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlag;
struct HorseFlag;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerComponentFlag;
struct MobBodyRotationComponent;
struct MobFlag;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace PlayerMoveSystemsImpl {

struct LocalPlayerFilterAutoJumpInternal {
public:
    // prevent constructor by default
    LocalPlayerFilterAutoJumpInternal& operator=(LocalPlayerFilterAutoJumpInternal const&);
    LocalPlayerFilterAutoJumpInternal(LocalPlayerFilterAutoJumpInternal const&);
    LocalPlayerFilterAutoJumpInternal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LocalPlayerFilterAutoJumpInternal() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct CanStandOnSnowFlag>,
                          class FlagComponent<struct HasLightweightFamilyFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                          struct MovementAttributesComponent,
                          struct DimensionTypeComponent,
                          struct OnGroundFlagComponent,
                          struct StateVectorComponent>,
                      struct Write<struct MoveInputComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    // vIndex: 6
    virtual void singleTick(
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
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                struct MovementAttributesComponent,
                struct DimensionTypeComponent,
                struct OnGroundFlagComponent,
                struct StateVectorComponent>,
            struct Write<struct MoveInputComponent>,
            struct AddRemove<>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& context,
        class StrictEntityContext&    entity
    );

    MCAPI void commonTick(
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
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                struct MovementAttributesComponent,
                struct DimensionTypeComponent,
                struct OnGroundFlagComponent,
                struct StateVectorComponent>,
            struct Write<struct MoveInputComponent>,
            struct AddRemove<>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& context,
        class StrictEntityContext*    entity
    );

    MCAPI static void _setJumpingIfPlayerCanAutoJump(
        class StrictEntityContext const&                   entity,
        struct AABBShapeComponent const&                   aabbShape,
        struct ActorRotationComponent const&               actorRotation,
        struct MovementAttributesComponent const&          attributes,
        struct StateVectorComponent const&                 stateVector,
        struct ActorDataFlagComponent const&               synchedActorData,
        struct MoveInputComponent&                         moveInput,
        class Optional<struct OnGroundFlagComponent const> isOnGround,
        class Optional<struct PassengerComponent const>    isRiding,
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
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                struct MovementAttributesComponent,
                struct DimensionTypeComponent,
                struct OnGroundFlagComponent,
                struct StateVectorComponent>,
            struct Write<struct MoveInputComponent>,
            struct AddRemove<>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>&  executionContext,
        class IConstBlockSource const& region
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(
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
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                struct MovementAttributesComponent,
                struct DimensionTypeComponent,
                struct OnGroundFlagComponent,
                struct StateVectorComponent>,
            struct Write<struct MoveInputComponent>,
            struct AddRemove<>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& context,
        class StrictEntityContext&    entity
    );

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct CanStandOnSnowFlag>,
                         class FlagComponent<struct HasLightweightFamilyFlag>,
                         class FlagComponent<struct HorseFlag>,
                         class FlagComponent<struct MobFlag>,
                         class FlagComponent<struct ParrotFlag>,
                         struct VehicleComponent,
                         class FlagComponent<struct CamelFlag>,
                         class FlagComponent<struct PlayerComponentFlag>,
                         class FlagComponent<struct ActorMovementTickNeededFlag>,
                         class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                         struct MovementAttributesComponent,
                         struct DimensionTypeComponent,
                         struct OnGroundFlagComponent,
                         struct StateVectorComponent>,
                     struct Write<struct MoveInputComponent>,
                     struct AddRemove<>,
                     struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& context);

    // NOLINTEND
};

}; // namespace PlayerMoveSystemsImpl
