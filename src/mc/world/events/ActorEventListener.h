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
    // ActorEventListener inner types define
    using EventType = ::ActorNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorEventListener();

    virtual ::EventResult onEvent(::ActorNotificationEvent const& event);

    virtual ::EventResult onActorDefinitionEvent(
        ::Actor&                                  actor,
        ::std::string const&                      event,
        ::std::vector<::ActorDefinitionModifier>& modifiers
    );

    virtual ::EventResult onActorTick(::Actor& actor);

    virtual ::EventResult onActorSneakChanged(::Actor& actor, bool isSneaking);

    virtual ::EventResult onActorStartRiding(::Actor& actor, ::Actor& vehicle);

    virtual ::EventResult
    onActorStopRiding(::Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    virtual ::EventResult onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);

    virtual ::EventResult onActorTeleported(::Actor& actor);

    virtual ::EventResult onActorAttackedActor(::Actor& actor, ::Actor& target);

    virtual ::EventResult onActorMobInteraction(
        ::Actor&                             actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    virtual ::EventResult onActorTargetAcquired(::Actor& actor, ::Actor& target);

    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

    virtual ::EventResult onPlayerAIStepBegin(::Player&);

    virtual ::EventResult onPlayerAIStepEnd(::Player&);

    virtual ::EventResult onActorMovementRewindCorrected(::Actor&, uint64, ::ReplayCorrectionResult);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorNotificationEvent const& event);

    MCNAPI ::EventResult $onActorDefinitionEvent(
        ::Actor&                                  actor,
        ::std::string const&                      event,
        ::std::vector<::ActorDefinitionModifier>& modifiers
    );

    MCNAPI ::EventResult $onActorTick(::Actor& actor);

    MCNAPI ::EventResult $onActorSneakChanged(::Actor& actor, bool isSneaking);

    MCNAPI ::EventResult $onActorStartRiding(::Actor& actor, ::Actor& vehicle);

    MCNAPI ::EventResult
    $onActorStopRiding(::Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    MCNAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCNAPI ::EventResult $onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);

    MCNAPI ::EventResult $onActorTeleported(::Actor& actor);

    MCNAPI ::EventResult $onActorAttackedActor(::Actor& actor, ::Actor& target);

    MCNAPI ::EventResult $onActorMobInteraction(
        ::Actor&                             actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    MCNAPI ::EventResult $onActorTargetAcquired(::Actor& actor, ::Actor& target);

    MCNAPI ::EventResult $onPlayerAuthInputReceived(::Player&);

    MCNAPI ::EventResult $onPlayerAuthInputApplied(::Player&);

    MCNAPI ::EventResult $onPlayerAIStepBegin(::Player&);

    MCNAPI ::EventResult $onPlayerAIStepEnd(::Player&);

    MCNAPI ::EventResult $onActorMovementRewindCorrected(::Actor&, uint64, ::ReplayCorrectionResult);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
