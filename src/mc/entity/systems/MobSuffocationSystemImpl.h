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
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorInWallDetectionComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct GetAttachPositionViews;
struct MobFlagComponent;
struct MobIsSuffocatingFlagComponent;
struct OffsetsComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

class MobSuffocationSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::MobFlagComponent, ::ActorMovementTickNeededComponent, ::PlayerComponent, ::PassengerComponent>,
      ::Read<
          ::StateVectorComponent,
          ::AABBShapeComponent,
          ::SynchedActorDataComponent,
          ::OffsetsComponent,
          ::VehicleComponent,
          ::ActorRotationComponent,
          ::VanillaOffsetComponent,
          ::PassengerRenderingRidingOffsetComponent>,
      ::Write<::ActorInWallDetectionComponent>,
      ::AddRemove<::MobIsSuffocatingFlagComponent>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::MobFlagComponent, ::ActorMovementTickNeededComponent, ::PlayerComponent, ::PassengerComponent>,
            ::Read<
                ::StateVectorComponent,
                ::AABBShapeComponent,
                ::SynchedActorDataComponent,
                ::OffsetsComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<::ActorInWallDetectionComponent>,
            ::AddRemove<::MobIsSuffocatingFlagComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual ~MobSuffocationSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _hasPlayerPassenger(
        ::Optional<::VehicleComponent const> optionalVehicleComponent,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent, ::PassengerComponent>> const& playerPassengers
    );

    MCNAPI static bool _isShulkerInWall(
        ::StateVectorComponent const&      stateVectorComponent,
        ::AABBShapeComponent const&        aabbShapeComponent,
        ::SynchedActorDataComponent const& synchedActorDataComponent,
        ::OffsetsComponent const&          offsetsComponent,
        ::IConstBlockSource const&         region
    );

    MCNAPI static void _tickCheckSuffocation(
        ::StrictEntityContext const&           entity,
        ::ActorInWallDetectionComponent const& actorInWallDetectionComponent,
        ::StateVectorComponent const&          stateVectorComponent,
        ::AABBShapeComponent const&            aabbShapeComponent,
        ::SynchedActorDataComponent const&     synchedActorDataComponent,
        ::OffsetsComponent const&              offsetsComponent,
        ::Optional<::VehicleComponent const>   vehicleComponent,
        ::GetAttachPositionViews const&        getAttachPosViews,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent, ::PassengerComponent>> const& playerPassengers,
        ::EntityModifier<::MobIsSuffocatingFlagComponent>                                         modifier,
        ::IConstBlockSource const&                                                                region
    );

    MCNAPI static bool isInWall(
        ::StrictEntityContext const&           entity,
        ::ActorInWallDetectionComponent const& actorInWallDetectionComponent,
        ::StateVectorComponent const&          stateVectorComponent,
        ::AABBShapeComponent const&            aabbShapeComponent,
        ::SynchedActorDataComponent const&     synchedActorDataComponent,
        ::OffsetsComponent const&              offsetsComponent,
        ::GetAttachPositionViews const&        views,
        ::IConstBlockSource const&             region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::MobFlagComponent, ::ActorMovementTickNeededComponent, ::PlayerComponent, ::PassengerComponent>,
            ::Read<
                ::StateVectorComponent,
                ::AABBShapeComponent,
                ::SynchedActorDataComponent,
                ::OffsetsComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<::ActorInWallDetectionComponent>,
            ::AddRemove<::MobIsSuffocatingFlagComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
