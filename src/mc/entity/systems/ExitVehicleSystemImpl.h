#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/world/actor/VehicleUtils.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class GetCollisionShapeInterface;
class IConstBlockSource;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct ActorGameTypeComponent;
struct ActorIsBeingDestroyedFlagComponent;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct DimensionTypeComponent;
struct EjectedByActivatorRailFlagComponent;
struct ExitFromPassengerFlagComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MovementAbilitiesComponent;
struct MovementInterpolatorComponent;
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk391aec;
    ::ll::UntypedStorage<1, 1>  mUnk380d8c;
    // NOLINTEND

public:
    // prevent constructor by default
    ExitVehicleSystemImpl& operator=(ExitVehicleSystemImpl const&);
    ExitVehicleSystemImpl(ExitVehicleSystemImpl const&);
    ExitVehicleSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
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

    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
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
                      ::EntityFactoryT<>>& executionContext) /*override*/;

    // vIndex: 0
    virtual ~ExitVehicleSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickExitVehicle(
        ::StrictEntityContext const&                            entity,
        ::PassengerComponent const&                             passenger,
        ::AABBShapeComponent const&                             aabb,
        ::StateVectorComponent const&                           svc,
        ::OffsetsComponent const&                               offsetsComponent,
        ::ActorDataSeatOffsetComponent const&                   actorDataSeatOffset,
        ::ActorRotationComponent&                               rotation,
        ::Optional<::ExitFromPassengerFlagComponent const>      exitFromPassengerFlag,
        ::Optional<::ActorIsBeingDestroyedFlagComponent const>  actorIsBeingDestroyedFlag,
        ::Optional<::EjectedByActivatorRailFlagComponent const> ejectedByActivatorRailFlagComponent,
        ::BaseGameVersion const&                                baseGameVersion,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::VehicleComponent>,
            ::StateVectorComponent const,
            ::ActorRotationComponent const,
            ::Optional<::PostTickPositionDeltaComponent const>,
            ::Optional<::MovementInterpolatorComponent const>> const& vehicleView,
        ::EntityModifier<::ActorSetPositionRequestComponent>&         modifier,
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
            ::EntityFactoryT<>>&   executionContext,
        bool                       isClientSide,
        ::IConstBlockSource const& region
    );

    MCNAPI static auto createViews(::StrictExecutionContext<
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
                                   ::EntityFactoryT<>>& context);

    MCNAPI static auto getExitStrategy(
        ::BaseGameVersion const&                                       version,
        ::Optional<::EjectedByActivatorRailFlagComponent const> const& ejectedByActivatorRail,
        ::Optional<::ExitFromPassengerFlagComponent const> const&      exitFromPassenger
    )
        -> ::std::optional<
            ::Vec3> (*)(::VehicleUtils::VehicleDirections const&, ::std::function<bool(::Vec3 const&, ::Vec3 const&)>);

    MCNAPI static bool tryPlaceAt(
        ::Vec3 const&                                      groundPos,
        ::AABB const&                                      aabbEntity,
        ::IConstBlockSource const&                         region,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $singleTick(
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

    MCNAPI void $tick(::StrictExecutionContext<
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
                      ::EntityFactoryT<>>& executionContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
