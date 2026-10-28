#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/utilities/GetCollisionShapeViews.h"
#include "mc/entity/utilities/ViewEachWithBlockSourceArgs.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct DepenetrationComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MoveTowardsClosestSpaceFlagComponent;
struct MovementAbilitiesComponent;
struct MovementInterpolatorComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

struct MoveTowardsClosestSpaceSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<
          ::CanStandOnPowderSnowComponent,
          ::CanStandOnPowderSnowFromEquipmentComponent,
          ::HorseFlagComponent,
          ::MobFlagComponent,
          ::ParrotFlagComponent,
          ::VehicleComponent,
          ::CamelFlagComponent,
          ::PlayerComponent,
          ::ActorMovementTickNeededComponent,
          ::PassengerComponent>,
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
          ::DepenetrationComponent,
          ::DimensionTypeComponent,
          ::MovementInterpolatorComponent>,
      ::Write<::StateVectorComponent>,
      ::AddRemove<::MoveTowardsClosestSpaceFlagComponent>,
      ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // MoveTowardsClosestSpaceSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // MoveTowardsClosestSpaceSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            88,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorMovementTickNeededComponent, ::MoveTowardsClosestSpaceFlagComponent>,
                ::Exclude<::PassengerComponent>,
                ::ActorDataFlagComponent const,
                ::AABBShapeComponent const,
                ::DepenetrationComponent const,
                ::Optional<::MovementInterpolatorComponent const>,
                ::StateVectorComponent>>
                                                                 mView;
        ::ll::TypedStorage<8, 32, ::ViewEachWithBlockSourceArgs> mBlockSource;
        ::ll::TypedStorage<8, 728, ::GetCollisionShapeViews>     mCollisionViews;
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::CanStandOnPowderSnowComponent,
            ::CanStandOnPowderSnowFromEquipmentComponent,
            ::HorseFlagComponent,
            ::MobFlagComponent,
            ::ParrotFlagComponent,
            ::VehicleComponent,
            ::CamelFlagComponent,
            ::PlayerComponent,
            ::ActorMovementTickNeededComponent,
            ::PassengerComponent>,
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
            ::DepenetrationComponent,
            ::DimensionTypeComponent,
            ::MovementInterpolatorComponent>,
        ::Write<::StateVectorComponent>,
        ::AddRemove<::MoveTowardsClosestSpaceFlagComponent>,
        ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mIsClientSide;
    ::ll::TypedStorage<8, 856, ::std::optional<::MoveTowardsClosestSpaceSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnPowderSnowComponent,
                ::CanStandOnPowderSnowFromEquipmentComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::ActorMovementTickNeededComponent,
                ::PassengerComponent>,
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
                ::DepenetrationComponent,
                ::DimensionTypeComponent,
                ::MovementInterpolatorComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<::MoveTowardsClosestSpaceFlagComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void doTick(
        ::StrictEntityContext const&                      entity,
        ::ActorDataFlagComponent const&                   synchedActorData,
        ::AABBShapeComponent const&                       aabbShape,
        ::DepenetrationComponent const&                   depenetration,
        ::Optional<::MovementInterpolatorComponent const> moveInterpolator,
        ::StateVectorComponent&                           stateVector,
        bool                                              isClientSide,
        ::GetCollisionShapeViews const&                   collisionViews,
        ::IConstBlockSource const&                        region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnPowderSnowComponent,
                ::CanStandOnPowderSnowFromEquipmentComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::ActorMovementTickNeededComponent,
                ::PassengerComponent>,
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
                ::DepenetrationComponent,
                ::DimensionTypeComponent,
                ::MovementInterpolatorComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<::MoveTowardsClosestSpaceFlagComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND
};
