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
class AABB;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct BounceComponent;
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MinecartFlagComponent;
struct MoveRequestComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VerticalCollisionFlagComponent;
// clang-format on

class VerticalCollisionSystem
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
      ::Read<
          ::DimensionTypeComponent,
          ::StateVectorComponent,
          ::ActorDataFlagComponent,
          ::MoveRequestComponent,
          ::AABBShapeComponent>,
      ::Write<::StateVectorComponent>,
      ::AddRemove<::BounceComponent>,
      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
                      ::Read<
                          ::DimensionTypeComponent,
                          ::StateVectorComponent,
                          ::ActorDataFlagComponent,
                          ::MoveRequestComponent,
                          ::AABBShapeComponent>,
                      ::Write<::StateVectorComponent>,
                      ::AddRemove<::BounceComponent>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& strictContext) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::MoveRequestComponent,
                ::AABBShapeComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<::BounceComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    ) /*override*/;

    // vIndex: 0
    virtual ~VerticalCollisionSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();

    MCAPI static ::AABB getMaxCollisionVolume(::Vec3 const& speed, ::AABB const& shape);

    MCAPI static void tickVerticalCollisionSystem(
        ::StrictEntityContext const&  context,
        ::AABBShapeComponent const&   aabb,
        ::MoveRequestComponent const& request,
        ::StrictExecutionContext<
            ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::MoveRequestComponent,
                ::AABBShapeComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<::BounceComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
                     ::Read<
                         ::DimensionTypeComponent,
                         ::StateVectorComponent,
                         ::ActorDataFlagComponent,
                         ::MoveRequestComponent,
                         ::AABBShapeComponent>,
                     ::Write<::StateVectorComponent>,
                     ::AddRemove<::BounceComponent>,
                     ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& strictContext);

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::MoveRequestComponent,
                ::AABBShapeComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<::BounceComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
