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
#include "mc/entity/utilities/GetAttachPositionViews.h"
#include "mc/entity/utilities/ViewEachWithBlockSourceArgs.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorInWallDetectionComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
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
    // MobSuffocationSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // MobSuffocationSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            96,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>,
                ::ActorInWallDetectionComponent const,
                ::StateVectorComponent const,
                ::AABBShapeComponent const,
                ::SynchedActorDataComponent const,
                ::OffsetsComponent const,
                ::Optional<::VehicleComponent const>>>
                                                                 mMainView;
        ::ll::TypedStorage<8, 32, ::ViewEachWithBlockSourceArgs> mBlockSource;
        ::ll::TypedStorage<8, 480, ::GetAttachPositionViews>     mAttachViews;
        ::ll::TypedStorage<8, 56, ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent, ::PassengerComponent>>>
                                                                                    mPlayerPassengers;
        ::ll::TypedStorage<8, 8, ::EntityModifier<::MobIsSuffocatingFlagComponent>> mModifier;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 680, ::std::optional<::MobSuffocationSystemImpl::Views>> mViews;
    // NOLINTEND

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickCheckSuffocation(
        ::StrictEntityContext const&           entity,
        ::ActorInWallDetectionComponent const& actorInWallDetectionComponent,
        ::StateVectorComponent const&          stateVectorComponent,
        ::AABBShapeComponent const&            aabbShapeComponent,
        ::SynchedActorDataComponent const&     synchedActorDataComponent,
        ::OffsetsComponent const&              offsetsComponent,
        ::Optional<::VehicleComponent const>   vehicleComponent,
        ::GetAttachPositionViews const&        getAttachPosViews,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent, ::PassengerComponent>> const& playerPassengers,
        ::EntityModifier<::MobIsSuffocatingFlagComponent> const&                                  modifier,
        ::IConstBlockSource const&                                                                region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
