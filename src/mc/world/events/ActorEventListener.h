#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct ActorDefinitionModifier;
struct ActorNotificationEvent;
// clang-format on

class ActorEventListener {
public:
    // prevent constructor by default
    ActorEventListener& operator=(ActorEventListener const&);
    ActorEventListener(ActorEventListener const&);
    ActorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventListener();

    // vIndex: 1
    virtual ::EventResult onEvent(::ActorNotificationEvent const& event);

    // vIndex: 2
    virtual ::EventResult onActorDefinitionEvent(
        ::Actor&                                  actor,
        ::std::string const&                      event,
        ::std::vector<::ActorDefinitionModifier>& modifiers
    );

    // vIndex: 3
    virtual ::EventResult onActorTick(::Actor& actor);

    // vIndex: 4
    virtual ::EventResult onActorSneakChanged(::Actor& actor, bool isSneaking);

    // vIndex: 5
    virtual ::EventResult onActorStartRiding(::Actor& actor, ::Actor& vehicle);

    // vIndex: 6
    virtual ::EventResult
    onActorStopRiding(::Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    // vIndex: 7
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    // vIndex: 8
    virtual ::EventResult onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);

    // vIndex: 9
    virtual ::EventResult onActorTeleported(::Actor& actor);

    // vIndex: 10
    virtual ::EventResult onActorAttackedActor(::Actor& actor, ::Actor& target);

    // vIndex: 11
    virtual ::EventResult onActorMobInteraction(
        ::Actor&                             actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    // vIndex: 12
    virtual ::EventResult onActorTargetAcquired(::Actor& actor, ::Actor& target);

    // vIndex: 13
    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    // vIndex: 14
    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

    // vIndex: 15
    virtual ::EventResult onPlayerAIStepBegin(::Player&);

    // vIndex: 16
    virtual ::EventResult onPlayerAIStepEnd(::Player&);

    // vIndex: 17
    virtual ::EventResult onActorMovementRewindCorrected(::Actor&, uint64, ::ReplayCorrectionResult);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorNotificationEvent const& event);

    MCAPI ::EventResult $onActorDefinitionEvent(
        ::Actor&                                  actor,
        ::std::string const&                      event,
        ::std::vector<::ActorDefinitionModifier>& modifiers
    );

    MCAPI ::EventResult $onActorTick(::Actor& actor);

    MCAPI ::EventResult $onActorSneakChanged(::Actor& actor, bool isSneaking);

    MCAPI ::EventResult $onActorStartRiding(::Actor& actor, ::Actor& vehicle);

    MCAPI ::EventResult
    $onActorStopRiding(::Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI ::EventResult $onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);

    MCAPI ::EventResult $onActorTeleported(::Actor& actor);

    MCAPI ::EventResult $onActorAttackedActor(::Actor& actor, ::Actor& target);

    MCAPI ::EventResult $onActorMobInteraction(
        ::Actor&                             actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    MCAPI ::EventResult $onActorTargetAcquired(::Actor& actor, ::Actor& target);

    MCAPI ::EventResult $onPlayerAuthInputReceived(::Player&);

    MCAPI ::EventResult $onPlayerAuthInputApplied(::Player&);

    MCAPI ::EventResult $onPlayerAIStepBegin(::Player&);

    MCAPI ::EventResult $onPlayerAIStepEnd(::Player&);

    MCAPI ::EventResult $onActorMovementRewindCorrected(::Actor&, uint64, ::ReplayCorrectionResult);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
