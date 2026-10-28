#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
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
    // CurrentlyStandingOnBlockSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // CurrentlyStandingOnBlockSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            72,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ShouldPlayMovementSoundComponent>,
                ::ActorOwnerComponent const,
                ::StateVectorComponent const,
                ::AABBShapeComponent const>>
                                                                                                  mView;
        ::ll::TypedStorage<8, 8, ::EntityModifier<::CurrentlyStandingOnBlockComponent>>           mModifier;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const>> mDimensionType;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const>> mBlockSource;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::std::optional<::CurrentlyStandingOnBlockSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<::CurrentlyStandingOnBlockComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void doCurrentlyStandingOnBlockSystem(
        ::StrictEntityContext const&                                 entity,
        ::ActorOwnerComponent const&                                 actorOwnerComponent,
        ::StateVectorComponent const&                                stateVectorComponent,
        ::AABBShapeComponent const&                                  aabbShapeComponent,
        ::EntityModifier<::CurrentlyStandingOnBlockComponent> const& entityModifier,
        ::IConstBlockSource const&                                   region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<::CurrentlyStandingOnBlockComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND
};
