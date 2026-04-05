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
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ApplyRestitutionComponent;
struct BounceComponent;
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MinecartFlagComponent;
struct MoveRequestComponent;
struct PlayerComponent;
struct StateVectorComponent;
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
      ::AddRemove<::BounceComponent, ::ApplyRestitutionComponent>,
      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // VerticalCollisionSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
        ::Read<
            ::DimensionTypeComponent,
            ::StateVectorComponent,
            ::ActorDataFlagComponent,
            ::MoveRequestComponent,
            ::AABBShapeComponent>,
        ::Write<::StateVectorComponent>,
        ::AddRemove<::BounceComponent, ::ApplyRestitutionComponent>,
        ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::MoveRequestComponent,
                ::AABBShapeComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<::BounceComponent, ::ApplyRestitutionComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    ) /*override*/;

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
            ::AddRemove<::BounceComponent, ::ApplyRestitutionComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    ) /*override*/;

    virtual ~VerticalCollisionSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
            ::AddRemove<::BounceComponent, ::ApplyRestitutionComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::MinecartFlagComponent, ::PlayerComponent, ::VerticalCollisionFlagComponent>,
            ::Read<
                ::DimensionTypeComponent,
                ::StateVectorComponent,
                ::ActorDataFlagComponent,
                ::MoveRequestComponent,
                ::AABBShapeComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<::BounceComponent, ::ApplyRestitutionComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    );

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
            ::AddRemove<::BounceComponent, ::ApplyRestitutionComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
