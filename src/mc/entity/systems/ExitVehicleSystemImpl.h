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
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

struct ExitVehicleSystemImpl {
public:
    // prevent constructor by default
    ExitVehicleSystemImpl& operator=(ExitVehicleSystemImpl const&);
    ExitVehicleSystemImpl(ExitVehicleSystemImpl const&);
    ExitVehicleSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExitVehicleSystemImpl() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void
    tick(class StrictExecutionContext<
         struct Filter<
             class FlagComponent<struct CanStandOnSnowFlag>,
             class FlagComponent<struct HasLightweightFamilyFlag>,
             class FlagComponent<struct HorseFlag>,
             class FlagComponent<struct MobFlag>,
             class FlagComponent<struct ParrotFlag>,
             struct VehicleComponent,
             class FlagComponent<struct CamelFlag>,
             class FlagComponent<struct PlayerComponentFlag>,
             class FlagComponent<struct StopRidingRequestFlag>>,
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
             struct DimensionTypeComponent,
             class FlagComponent<struct EjectedByActivatorRailFlag>,
             struct PostTickPositionDeltaComponent>,
         struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
         struct AddRemove<struct ActorSetPositionRequestComponent>,
         struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
         struct GlobalWrite<>,
         struct EntityFactoryT<>>& executionContext);

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
                class FlagComponent<struct StopRidingRequestFlag>>,
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
                struct DimensionTypeComponent,
                class FlagComponent<struct EjectedByActivatorRailFlag>,
                struct PostTickPositionDeltaComponent>,
            struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
            struct AddRemove<struct ActorSetPositionRequestComponent>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI static void _tickExitVehicle(
        class StrictEntityContext const&                                            entity,
        struct PassengerComponent const&                                            passenger,
        struct AABBShapeComponent const&                                            aabb,
        struct StateVectorComponent const&                                          svc,
        struct OffsetsComponent const&                                              offsetsComponent,
        struct ActorRotationComponent&                                              rotation,
        class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>     exitFromPassengerFlag,
        class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const> actorIsBeingDestroyedFlag,
        class Optional<class FlagComponent<struct EjectedByActivatorRailFlag> const>
                                     ejectedByActivatorRailFlagComponent,
        class BaseGameVersion const& baseGameVersion,
        class ViewT<
            class StrictEntityContext,
            struct VehicleComponent const,
            struct StateVectorComponent const,
            class Optional<struct PostTickPositionDeltaComponent const>> vehicleView,
        class EntityModifier<struct ActorSetPositionRequestComponent>&   modifier,
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
                class FlagComponent<struct StopRidingRequestFlag>>,
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
                struct DimensionTypeComponent,
                class FlagComponent<struct EjectedByActivatorRailFlag>,
                struct PostTickPositionDeltaComponent>,
            struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
            struct AddRemove<struct ActorSetPositionRequestComponent>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>&  executionContext,
        bool                           isClientSide,
        class IConstBlockSource const& region
    );

    MCAPI static auto
    createViews(class StrictExecutionContext<
                struct Filter<
                    class FlagComponent<struct CanStandOnSnowFlag>,
                    class FlagComponent<struct HasLightweightFamilyFlag>,
                    class FlagComponent<struct HorseFlag>,
                    class FlagComponent<struct MobFlag>,
                    class FlagComponent<struct ParrotFlag>,
                    struct VehicleComponent,
                    class FlagComponent<struct CamelFlag>,
                    class FlagComponent<struct PlayerComponentFlag>,
                    class FlagComponent<struct StopRidingRequestFlag>>,
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
                    struct DimensionTypeComponent,
                    class FlagComponent<struct EjectedByActivatorRailFlag>,
                    struct PostTickPositionDeltaComponent>,
                struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
                struct AddRemove<struct ActorSetPositionRequestComponent>,
                struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                struct GlobalWrite<>,
                struct EntityFactoryT<>>&);

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
                class FlagComponent<struct StopRidingRequestFlag>>,
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
                struct DimensionTypeComponent,
                class FlagComponent<struct EjectedByActivatorRailFlag>,
                struct PostTickPositionDeltaComponent>,
            struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
            struct AddRemove<struct ActorSetPositionRequestComponent>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI void
    tick$(class StrictExecutionContext<
          struct Filter<
              class FlagComponent<struct CanStandOnSnowFlag>,
              class FlagComponent<struct HasLightweightFamilyFlag>,
              class FlagComponent<struct HorseFlag>,
              class FlagComponent<struct MobFlag>,
              class FlagComponent<struct ParrotFlag>,
              struct VehicleComponent,
              class FlagComponent<struct CamelFlag>,
              class FlagComponent<struct PlayerComponentFlag>,
              class FlagComponent<struct StopRidingRequestFlag>>,
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
              struct DimensionTypeComponent,
              class FlagComponent<struct EjectedByActivatorRailFlag>,
              struct PostTickPositionDeltaComponent>,
          struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
          struct AddRemove<struct ActorSetPositionRequestComponent>,
          struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
          struct GlobalWrite<>,
          struct EntityFactoryT<>>& executionContext);

    // NOLINTEND
};
