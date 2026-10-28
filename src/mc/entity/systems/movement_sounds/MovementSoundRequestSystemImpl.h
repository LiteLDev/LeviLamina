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
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct ClimbingLadderBlockComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct MakesLavaStepSoundComponent;
struct MovementSoundComponent;
struct ShouldPlayMovementSoundComponent;
struct ShouldPlayStepSoundComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct StateVectorComponent;
// clang-format on

struct MovementSoundRequestSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                            ::Filter<::ShouldPlayMovementSoundComponent>,
                                            ::Read<
                                                ::ActorDataFlagComponent,
                                                ::ActorDefinitionIdentifierComponent,
                                                ::ActorUniqueIDComponent,
                                                ::DimensionTypeComponent,
                                                ::SoundEventPlayerComponent,
                                                ::StateVectorComponent,
                                                ::MovementSoundComponent,
                                                ::ClimbingLadderBlockComponent,
                                                ::CurrentlyStandingOnBlockComponent>,
                                            ::Write<>,
                                            ::AddRemove<::ShouldPlayStepSoundComponent>,
                                            ::GlobalRead<>,
                                            ::GlobalWrite<>,
                                            ::EntityFactoryT<>>> {
public:
    // MovementSoundRequestSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // MovementSoundRequestSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            104,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ShouldPlayMovementSoundComponent>,
                ::ActorDataFlagComponent const,
                ::ActorDefinitionIdentifierComponent const,
                ::ActorUniqueIDComponent const,
                ::DimensionTypeComponent const,
                ::SoundEventPlayerComponent const,
                ::StateVectorComponent const,
                ::MovementSoundComponent const,
                ::Optional<::ClimbingLadderBlockComponent const>,
                ::Optional<::CurrentlyStandingOnBlockComponent const>,
                ::Optional<::MakesLavaStepSoundComponent const>>>
                                                                                   mRequestView;
        ::ll::TypedStorage<8, 8, ::EntityModifier<::ShouldPlayStepSoundComponent>> mEntityModifier;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>>
            mSoundEventRequestView;
        // NOLINTEND

    public:
        // prevent constructor by default
        Views();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Views(
            ::StrictExecutionContext<
                ::Filter<::ShouldPlayMovementSoundComponent>,
                ::Read<
                    ::ActorDataFlagComponent,
                    ::ActorDefinitionIdentifierComponent,
                    ::ActorUniqueIDComponent,
                    ::DimensionTypeComponent,
                    ::SoundEventPlayerComponent,
                    ::StateVectorComponent,
                    ::MovementSoundComponent,
                    ::ClimbingLadderBlockComponent,
                    ::CurrentlyStandingOnBlockComponent>,
                ::Write<>,
                ::AddRemove<::ShouldPlayStepSoundComponent>,
                ::GlobalRead<>,
                ::GlobalWrite<>,
                ::EntityFactoryT<>>& context
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::StrictExecutionContext<
                ::Filter<::ShouldPlayMovementSoundComponent>,
                ::Read<
                    ::ActorDataFlagComponent,
                    ::ActorDefinitionIdentifierComponent,
                    ::ActorUniqueIDComponent,
                    ::DimensionTypeComponent,
                    ::SoundEventPlayerComponent,
                    ::StateVectorComponent,
                    ::MovementSoundComponent,
                    ::ClimbingLadderBlockComponent,
                    ::CurrentlyStandingOnBlockComponent>,
                ::Write<>,
                ::AddRemove<::ShouldPlayStepSoundComponent>,
                ::GlobalRead<>,
                ::GlobalWrite<>,
                ::EntityFactoryT<>>& context
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::std::optional<::MovementSoundRequestSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void doMovementSoundRequestSystem(
        ::StrictEntityContext const&                                             entity,
        ::ActorDataFlagComponent const&                                          actorFlags,
        ::ActorDefinitionIdentifierComponent const&                              actorIdentifier,
        ::ActorUniqueIDComponent const&                                          actorUniqueID,
        ::DimensionTypeComponent const&                                          dimensionType,
        ::SoundEventPlayerComponent const&                                       soundEventPlayerComponent,
        ::StateVectorComponent const&                                            stateVectorComponent,
        ::MovementSoundComponent const&                                          movementSoundComponent,
        ::Optional<::ClimbingLadderBlockComponent const>                         climbingLadderBlockComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const>                    currentlyStandingOnBlockComponent,
        ::Optional<::MakesLavaStepSoundComponent const>                          makesLavaStepSoundComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent> const&                  entityModifier,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> const& requestQueueView
    );

    MCAPI static void prepareForStepSound(
        ::StrictEntityContext const&                            entity,
        ::MovementSoundComponent const&                         movementSoundComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const>   currentlyStandingOnBlockComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent> const& entityModifier
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND
};
