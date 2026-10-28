#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/utilities/ViewEachWithBlockSourceArgs.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorMovementTickNeededComponent;
struct BlazeFlagComponent;
struct DimensionTypeComponent;
struct LavaSlimeFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MonsterFlagComponent;
struct NoActionTimeComponent;
struct OffsetsComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

struct MonsterAiStepSystem
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<
          ::ActorMovementTickNeededComponent,
          ::BlazeFlagComponent,
          ::LavaSlimeFlagComponent,
          ::MonsterFlagComponent>,
      ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
      ::Write<::NoActionTimeComponent>,
      ::AddRemove<>,
      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // MonsterAiStepSystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // MonsterAiStepSystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            88,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorMovementTickNeededComponent, ::MonsterFlagComponent>,
                ::AABBShapeComponent const,
                ::OffsetsComponent const,
                ::StateVectorComponent const,
                ::NoActionTimeComponent>>
                                                                                                       mView;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::Include<::BlazeFlagComponent>>>     mBlazeView;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::Include<::LavaSlimeFlagComponent>>> mLavaSlimeView;
        ::ll::TypedStorage<8, 32, ::ViewEachWithBlockSourceArgs>                                       mBlockSource;
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::ActorMovementTickNeededComponent,
            ::BlazeFlagComponent,
            ::LavaSlimeFlagComponent,
            ::MonsterFlagComponent>,
        ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
        ::Write<::NoActionTimeComponent>,
        ::AddRemove<>,
        ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MonsterAiStepSystem::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BlazeFlagComponent,
                ::LavaSlimeFlagComponent,
                ::MonsterFlagComponent>,
            ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
            ::Write<::NoActionTimeComponent>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    ) /*override*/;

    virtual ~MonsterAiStepSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void tickMonsterAiStep(
        ::StrictEntityContext const&                                               entity,
        ::AABBShapeComponent const&                                                aabbShapeComponent,
        ::OffsetsComponent const&                                                  offsetsComponent,
        ::StateVectorComponent const&                                              stateVectorComponent,
        ::NoActionTimeComponent&                                                   noActionTimeComponent,
        ::ViewT<::StrictEntityContext, ::Include<::BlazeFlagComponent>> const&     blazeView,
        ::ViewT<::StrictEntityContext, ::Include<::LavaSlimeFlagComponent>> const& lavaSlimeView,
        ::IConstBlockSource const&                                                 region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BlazeFlagComponent,
                ::LavaSlimeFlagComponent,
                ::MonsterFlagComponent>,
            ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
            ::Write<::NoActionTimeComponent>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    );


    // NOLINTEND
};
