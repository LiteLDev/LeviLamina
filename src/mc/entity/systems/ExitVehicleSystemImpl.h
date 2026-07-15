#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct DimensionTypeComponent;
struct EjectedByActivatorRailFlagComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct PostTickPositionDeltaComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

struct ExitVehicleSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                   ::Filter<
                                       ::CanStandOnSnowFlagComponent,
                                       ::HasLightweightFamilyFlagComponent,
                                       ::HorseFlagComponent,
                                       ::MobFlagComponent,
                                       ::ParrotFlagComponent,
                                       ::VehicleComponent,
                                       ::CamelFlagComponent,
                                       ::PlayerComponent,
                                       ::StopRidingRequestComponent>,
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
                                       ::DimensionTypeComponent,
                                       ::EjectedByActivatorRailFlagComponent,
                                       ::PostTickPositionDeltaComponent>,
                                   ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
                                   ::AddRemove<::ActorSetPositionRequestComponent>,
                                   ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                                   ::GlobalWrite<>,
                                   ::EntityFactoryT<>>> {
public:
    // ExitVehicleSystemImpl inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::CanStandOnSnowFlagComponent,
            ::HasLightweightFamilyFlagComponent,
            ::HorseFlagComponent,
            ::MobFlagComponent,
            ::ParrotFlagComponent,
            ::VehicleComponent,
            ::CamelFlagComponent,
            ::PlayerComponent,
            ::StopRidingRequestComponent>,
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
            ::DimensionTypeComponent,
            ::EjectedByActivatorRailFlagComponent,
            ::PostTickPositionDeltaComponent>,
        ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
        ::AddRemove<::ActorSetPositionRequestComponent>,
        ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::BaseGameVersion const> mVersion;
    ::ll::TypedStorage<1, 1, bool const>               mIsClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
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
                ::StopRidingRequestComponent>,
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
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
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
                ::StopRidingRequestComponent>,
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
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
                ::StopRidingRequestComponent>,
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
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );

    MCAPI void $singleTick(
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
                ::StopRidingRequestComponent>,
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
                ::DimensionTypeComponent,
                ::EjectedByActivatorRailFlagComponent,
                ::PostTickPositionDeltaComponent>,
            ::Write<::AABBShapeComponent, ::ActorRotationComponent, ::StateVectorComponent>,
            ::AddRemove<::ActorSetPositionRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
