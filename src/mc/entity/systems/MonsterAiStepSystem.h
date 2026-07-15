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
struct ActorMovementTickNeededComponent;
struct BlazeFlagComponent;
struct DimensionTypeComponent;
struct LavaSlimeFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MonsterFlagComponent;
struct NoActionTimeComponent;
struct OffsetsComponent;
struct StateVectorComponent;
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
    // MonsterAiStepSystem inner types define
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
