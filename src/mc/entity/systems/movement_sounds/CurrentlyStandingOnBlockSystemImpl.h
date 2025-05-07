#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
struct ShouldPlayMovementSoundComponent;
struct StateVectorComponent;
// clang-format on

struct CurrentlyStandingOnBlockSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ShouldPlayMovementSoundComponent>,
      ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
      ::Write<>,
      ::AddRemove<::CurrentlyStandingOnBlockComponent>,
      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void
    tick(::StrictExecutionContext<
         ::Filter<::ShouldPlayMovementSoundComponent>,
         ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
         ::Write<>,
         ::AddRemove<::CurrentlyStandingOnBlockComponent>,
         ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
         ::GlobalWrite<>,
         ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 0
    virtual ~CurrentlyStandingOnBlockSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doCurrentlyStandingOnBlockSystem(
        ::StrictEntityContext const&                          entity,
        ::ActorOwnerComponent const&                          actorOwnerComponent,
        ::StateVectorComponent const&                         stateVectorComponent,
        ::AABBShapeComponent const&                           aabbShapeComponent,
        ::EntityModifier<::CurrentlyStandingOnBlockComponent> entityModifier,
        ::IConstBlockSource const&                            region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $tick(::StrictExecutionContext<
          ::Filter<::ShouldPlayMovementSoundComponent>,
          ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
          ::Write<>,
          ::AddRemove<::CurrentlyStandingOnBlockComponent>,
          ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
          ::GlobalWrite<>,
          ::EntityFactoryT<>>& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
