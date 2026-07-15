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

// auto generated forward declare list
// clang-format off
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
