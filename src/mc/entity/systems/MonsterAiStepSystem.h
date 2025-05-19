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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
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

    // vIndex: 0
    virtual ~MonsterAiStepSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tickMonsterAiStep(
        ::StrictEntityContext const&                                        entity,
        ::AABBShapeComponent const&                                         aabbShapeComponent,
        ::OffsetsComponent const&                                           offsetsComponent,
        ::StateVectorComponent const&                                       stateVectorComponent,
        ::NoActionTimeComponent&                                            noActionTimeComponent,
        ::ViewT<::StrictEntityContext, ::Include<::BlazeFlagComponent>>     blazeView,
        ::ViewT<::StrictEntityContext, ::Include<::LavaSlimeFlagComponent>> lavaSlimeView,
        ::IConstBlockSource const&                                          region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
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
