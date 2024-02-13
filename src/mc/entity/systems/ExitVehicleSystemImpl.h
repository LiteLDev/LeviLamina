#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

struct ExitVehicleSystemImpl {
public:
    // prevent constructor by default
    ExitVehicleSystemImpl& operator=(ExitVehicleSystemImpl const&);
    ExitVehicleSystemImpl(ExitVehicleSystemImpl const&);
    ExitVehicleSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExitVehicleSystemImpl@@UEAA@XZ
    virtual ~ExitVehicleSystemImpl() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@ExitVehicleSystemImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@U?$Read@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorDataFlagComponent@@UAABBShapeComponent@@UActorRotationComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UPassengerComponent@@UVehicleComponent@@UOffsetsComponent@@V?$FlagComponent@UEjectedByActivatorRailFlag@@@@@@U?$Write@UAABBShapeComponent@@UActorRotationComponent@@UStateVectorComponent@@@@U?$AddRemove@UActorSetPositionRequestComponent@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
             struct MovementAbilitiesComponent,
             struct ActorTypeComponent,
             struct FallDistanceComponent,
             struct ActorGameTypeComponent,
             struct MobBodyRotationComponent,
             struct RenderRotationComponent,
             struct StandAnimationComponent,
             struct ActorDataFlagComponent,
             struct AABBShapeComponent,
             struct ActorRotationComponent,
             struct VanillaOffsetComponent,
             struct PassengerRenderingRidingOffsetComponent,
             struct DimensionTypeComponent,
             struct PassengerComponent,
             struct VehicleComponent,
             struct OffsetsComponent,
             class FlagComponent<struct EjectedByActivatorRailFlag>>,
         struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
         struct AddRemove<struct ActorSetPositionRequestComponent>,
         struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
         struct GlobalWrite<>,
         struct EntityFactoryT<>>& executionContext);

    // vIndex: 6, symbol:
    // ?singleTick@ExitVehicleSystemImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@U?$Read@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorDataFlagComponent@@UAABBShapeComponent@@UActorRotationComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UPassengerComponent@@UVehicleComponent@@UOffsetsComponent@@V?$FlagComponent@UEjectedByActivatorRailFlag@@@@@@U?$Write@UAABBShapeComponent@@UActorRotationComponent@@UStateVectorComponent@@@@U?$AddRemove@UActorSetPositionRequestComponent@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
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
                struct MovementAbilitiesComponent,
                struct ActorTypeComponent,
                struct FallDistanceComponent,
                struct ActorGameTypeComponent,
                struct MobBodyRotationComponent,
                struct RenderRotationComponent,
                struct StandAnimationComponent,
                struct ActorDataFlagComponent,
                struct AABBShapeComponent,
                struct ActorRotationComponent,
                struct VanillaOffsetComponent,
                struct PassengerRenderingRidingOffsetComponent,
                struct DimensionTypeComponent,
                struct PassengerComponent,
                struct VehicleComponent,
                struct OffsetsComponent,
                class FlagComponent<struct EjectedByActivatorRailFlag>>,
            struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
            struct AddRemove<struct ActorSetPositionRequestComponent>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    // symbol:
    // ?_tickExitVehicle@ExitVehicleSystemImpl@@SAXAEBVStrictEntityContext@@AEBUPassengerComponent@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@AEBUOffsetsComponent@@AEAUActorRotationComponent@@V?$Optional@$$CBV?$FlagComponent@UExitFromPassengerFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UEjectedByActivatorRailFlag@@@@@@AEBVBaseGameVersion@@V?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@$$CBUStateVectorComponent@@@@AEAV?$EntityModifier@UActorSetPositionRequestComponent@@@@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@U?$Read@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorDataFlagComponent@@UAABBShapeComponent@@UActorRotationComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UPassengerComponent@@UVehicleComponent@@UOffsetsComponent@@V?$FlagComponent@UEjectedByActivatorRailFlag@@@@@@U?$Write@UAABBShapeComponent@@UActorRotationComponent@@UStateVectorComponent@@@@U?$AddRemove@UActorSetPositionRequestComponent@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void _tickExitVehicle(
        class StrictEntityContext const& entity,
        struct PassengerComponent const&,
        struct AABBShapeComponent const& aabb,
        struct StateVectorComponent const&,
        struct OffsetsComponent const&,
        struct ActorRotationComponent& rotation,
        class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>,
        class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>,
        class Optional<class FlagComponent<struct EjectedByActivatorRailFlag> const>,
        class BaseGameVersion const& baseGameVersion,
        class ViewT<class StrictEntityContext, struct VehicleComponent const, struct StateVectorComponent const>,
        class EntityModifier<struct ActorSetPositionRequestComponent>& modifier,
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
                struct MovementAbilitiesComponent,
                struct ActorTypeComponent,
                struct FallDistanceComponent,
                struct ActorGameTypeComponent,
                struct MobBodyRotationComponent,
                struct RenderRotationComponent,
                struct StandAnimationComponent,
                struct ActorDataFlagComponent,
                struct AABBShapeComponent,
                struct ActorRotationComponent,
                struct VanillaOffsetComponent,
                struct PassengerRenderingRidingOffsetComponent,
                struct DimensionTypeComponent,
                struct PassengerComponent,
                struct VehicleComponent,
                struct OffsetsComponent,
                class FlagComponent<struct EjectedByActivatorRailFlag>>,
            struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
            struct AddRemove<struct ActorSetPositionRequestComponent>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>&  executionContext,
        class IConstBlockSource const& region
    );

    // symbol:
    // ?createViews@ExitVehicleSystemImpl@@SA@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@U?$Read@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UActorDataFlagComponent@@UAABBShapeComponent@@UActorRotationComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UPassengerComponent@@UVehicleComponent@@UOffsetsComponent@@V?$FlagComponent@UEjectedByActivatorRailFlag@@@@@@U?$Write@UAABBShapeComponent@@UActorRotationComponent@@UStateVectorComponent@@@@U?$AddRemove@UActorSetPositionRequestComponent@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
                    struct MovementAbilitiesComponent,
                    struct ActorTypeComponent,
                    struct FallDistanceComponent,
                    struct ActorGameTypeComponent,
                    struct MobBodyRotationComponent,
                    struct RenderRotationComponent,
                    struct StandAnimationComponent,
                    struct ActorDataFlagComponent,
                    struct AABBShapeComponent,
                    struct ActorRotationComponent,
                    struct VanillaOffsetComponent,
                    struct PassengerRenderingRidingOffsetComponent,
                    struct DimensionTypeComponent,
                    struct PassengerComponent,
                    struct VehicleComponent,
                    struct OffsetsComponent,
                    class FlagComponent<struct EjectedByActivatorRailFlag>>,
                struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>,
                struct AddRemove<struct ActorSetPositionRequestComponent>,
                struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                struct GlobalWrite<>,
                struct EntityFactoryT<>>& context);

    // NOLINTEND
};
