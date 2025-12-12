#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

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
struct CanStandOnSnowFlagComponent;
struct DepenetrationComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
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
          ::CanStandOnSnowFlagComponent,
          ::HasLightweightFamilyFlagComponent,
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc85792;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveTowardsClosestSpaceSystemImpl& operator=(MoveTowardsClosestSpaceSystemImpl const&);
    MoveTowardsClosestSpaceSystemImpl(MoveTowardsClosestSpaceSystemImpl const&);
    MoveTowardsClosestSpaceSystemImpl();

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

    virtual ~MoveTowardsClosestSpaceSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doTick(
        ::StrictEntityContext const&                      entity,
        ::ActorDataFlagComponent const&                   synchedActorData,
        ::AABBShapeComponent const&                       aabbShape,
        ::DepenetrationComponent const&                   depenetration,
        ::Optional<::MovementInterpolatorComponent const> moveInterpolator,
        ::StateVectorComponent&                           stateVector,
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
            ::EntityFactoryT<>>&   executionContext,
        bool                       isClientSide,
        ::IConstBlockSource const& region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
