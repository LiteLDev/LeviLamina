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
    // vIndex: 0
    virtual ~ExitVehicleSystemImpl() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

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
         struct EntityFactoryT<>>&);

    // vIndex: 6
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct DimensionTypeComponent, class FlagComponent<struct EjectedByActivatorRailFlag>, struct PostTickPositionDeltaComponent>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>, struct AddRemove<struct ActorSetPositionRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    MCAPI static void
    _tickExitVehicle(class StrictEntityContext const&, struct PassengerComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent const&, struct OffsetsComponent const&, struct ActorRotationComponent&, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct EjectedByActivatorRailFlag> const>, class BaseGameVersion const&, class ViewT<class StrictEntityContext, struct VehicleComponent const, struct StateVectorComponent const, class Optional<struct PostTickPositionDeltaComponent const>>, class EntityModifier<struct ActorSetPositionRequestComponent>&, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct DimensionTypeComponent, class FlagComponent<struct EjectedByActivatorRailFlag>, struct PostTickPositionDeltaComponent>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent>, struct AddRemove<struct ActorSetPositionRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, bool, class IConstBlockSource const&);

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
};
