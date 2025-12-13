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

    virtual ~MovementSoundRequestSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doMovementSoundRequestSystem(
        ::StrictEntityContext const&                                      entity,
        ::ActorDataFlagComponent const&                                   actorFlags,
        ::ActorDefinitionIdentifierComponent const&                       actorIdentifier,
        ::ActorUniqueIDComponent const&                                   actorUniqueID,
        ::DimensionTypeComponent const&                                   dimensionType,
        ::SoundEventPlayerComponent const&                                soundEventPlayerComponent,
        ::StateVectorComponent const&                                     stateVectorComponent,
        ::MovementSoundComponent const&                                   movementSoundComponent,
        ::Optional<::ClimbingLadderBlockComponent const>                  climbingLadderBlockComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const>             currentlyStandingOnBlockComponent,
        ::Optional<::MakesLavaStepSoundComponent const>                   makesLavaStepSoundComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent>                  entityModifier,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> requestQueueView
    );

    MCNAPI static void prepareForStepSound(
        ::StrictEntityContext const&                          entity,
        ::MovementSoundComponent const&                       movementSoundComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const> currentlyStandingOnBlockComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent>&     entityModifier
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
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

    MCNAPI void $singleTick(
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
