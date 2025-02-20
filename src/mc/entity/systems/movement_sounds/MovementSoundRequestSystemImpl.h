#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/OptionalComponentWrapper.h"
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
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
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
                                                ::ActorDefinitionIdentifierComponent,
                                                ::DimensionTypeComponent,
                                                ::SoundEventPlayerComponent,
                                                ::ActorDataFlagComponent,
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
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::ShouldPlayMovementSoundComponent>,
                      ::Read<
                          ::ActorDefinitionIdentifierComponent,
                          ::DimensionTypeComponent,
                          ::SoundEventPlayerComponent,
                          ::ActorDataFlagComponent,
                          ::StateVectorComponent,
                          ::MovementSoundComponent,
                          ::ClimbingLadderBlockComponent,
                          ::CurrentlyStandingOnBlockComponent>,
                      ::Write<>,
                      ::AddRemove<::ShouldPlayStepSoundComponent>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDefinitionIdentifierComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::ActorDataFlagComponent,
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

    // vIndex: 0
    virtual ~MovementSoundRequestSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void doMovementSoundRequestSystem(
        ::StrictEntityContext const&                                      entity,
        ::ActorDefinitionIdentifierComponent const&                       actorDefinitionIdentifierComponent,
        ::ActorDataFlagComponent const&                                   synchedActorDataComponent,
        ::DimensionTypeComponent const&                                   dimensionTypeComponent,
        ::SoundEventPlayerComponent const&                                soundEventPlayerComponent,
        ::StateVectorComponent const&                                     stateVectorComponent,
        ::MovementSoundComponent const&                                   movementSoundComponent,
        ::Optional<::ClimbingLadderBlockComponent const>                  climbingLadderBlockComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const>             currentlyStandingOnBlockComponent,
        ::Optional<::MakesLavaStepSoundComponent const>                   makesLavaStepSoundComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent>                  entityModifier,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> requestQueueView
    );

    MCAPI static void prepareForStepSound(
        ::StrictEntityContext const&                          entity,
        ::MovementSoundComponent const&                       movementSoundComponent,
        ::Optional<::CurrentlyStandingOnBlockComponent const> currentlyStandingOnBlockComponent,
        ::EntityModifier<::ShouldPlayStepSoundComponent>&     entityModifier
    );

    MCAPI static void sendSoundRequest(
        ::StrictEntityContext const&                                  entity,
        ::DimensionTypeComponent const&                               dimensionTypeComponent,
        ::ActorDataFlagComponent const&                               synchedActorDataComponent,
        ::ActorDefinitionIdentifierComponent const&                   actorDefinitionIdentifierComponent,
        ::SharedTypes::Legacy::LevelSoundEvent const&                 soundEvent,
        ::SharedTypes::Legacy::ActorLocation const&                   location,
        ::OptionalComponentWrapper<::SoundEventRequestQueueComponent> soundEventRequestQueueComponent,
        int                                                           soundData
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
                     ::Filter<::ShouldPlayMovementSoundComponent>,
                     ::Read<
                         ::ActorDefinitionIdentifierComponent,
                         ::DimensionTypeComponent,
                         ::SoundEventPlayerComponent,
                         ::ActorDataFlagComponent,
                         ::StateVectorComponent,
                         ::MovementSoundComponent,
                         ::ClimbingLadderBlockComponent,
                         ::CurrentlyStandingOnBlockComponent>,
                     ::Write<>,
                     ::AddRemove<::ShouldPlayStepSoundComponent>,
                     ::GlobalRead<>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& context);

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDefinitionIdentifierComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::ActorDataFlagComponent,
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
