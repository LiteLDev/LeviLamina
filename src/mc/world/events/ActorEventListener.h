#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/events/EventResult.h"

class ActorEventListener {
public:
    // prevent constructor by default
    ActorEventListener& operator=(ActorEventListener const&);
    ActorEventListener(ActorEventListener const&);
    ActorEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventListener();

    // vIndex: 1
    virtual ::EventResult onEvent(struct ActorNotificationEvent const&);

    // vIndex: 2
    virtual ::EventResult onActorDefinitionEvent(
        class Actor&                                 actor,
        std::string const&                           event,
        std::vector<struct ActorDefinitionModifier>& modifiers
    );

    // vIndex: 3
    virtual ::EventResult onActorTick(class Actor& actor);

    // vIndex: 4
    virtual ::EventResult onActorSneakChanged(class Actor& actor, bool isSneaking);

    // vIndex: 5
    virtual ::EventResult onActorStartRiding(class Actor& actor, class Actor& vehicle);

    // vIndex: 6
    virtual ::EventResult
    onActorStopRiding(class Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    // vIndex: 7
    virtual ::EventResult onActorCreated(class Actor& actor, ::ActorInitializationMethod initializationMethod);

    // vIndex: 8
    virtual ::EventResult onActorCreationAttemptFailed(class Actor& actor, std::string_view message);

    // vIndex: 9
    virtual ::EventResult onActorTeleported(class Actor& actor);

    // vIndex: 10
    virtual ::EventResult onActorAttackedActor(class Actor& actor, class Actor& target);

    // vIndex: 11
    virtual ::EventResult onActorMobInteraction(
        class Actor&                         actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    // vIndex: 12
    virtual ::EventResult onActorTargetAcquired(class Actor& actor, class Actor& target);

    // vIndex: 13
    virtual ::EventResult onPlayerAuthInputReceived(class Player&);

    // vIndex: 14
    virtual ::EventResult onPlayerAuthInputApplied(class Player&);

    // vIndex: 15
    virtual ::EventResult onPlayerAIStepBegin(class Player&);

    // vIndex: 16
    virtual ::EventResult onPlayerAIStepEnd(class Player&);

    // vIndex: 17
    virtual ::EventResult onActorMovementRewindCorrected(class Actor&, uint64, ::ReplayCorrectionResult);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI ::EventResult onActorAttackedActor$(class Actor& actor, class Actor& target);

    MCAPI ::EventResult onActorCreated$(class Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCAPI ::EventResult onActorCreationAttemptFailed$(class Actor& actor, std::string_view message);

    MCAPI ::EventResult onActorDefinitionEvent$(
        class Actor&                                 actor,
        std::string const&                           event,
        std::vector<struct ActorDefinitionModifier>& modifiers
    );

    MCAPI ::EventResult onActorMobInteraction$(
        class Actor&                         actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    MCAPI ::EventResult onActorMovementRewindCorrected$(class Actor&, uint64, ::ReplayCorrectionResult);

    MCAPI ::EventResult onActorSneakChanged$(class Actor& actor, bool isSneaking);

    MCAPI ::EventResult onActorStartRiding$(class Actor& actor, class Actor& vehicle);

    MCAPI ::EventResult
    onActorStopRiding$(class Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    MCAPI ::EventResult onActorTargetAcquired$(class Actor& actor, class Actor& target);

    MCAPI ::EventResult onActorTeleported$(class Actor& actor);

    MCAPI ::EventResult onActorTick$(class Actor& actor);

    MCAPI ::EventResult onEvent$(struct ActorNotificationEvent const&);

    MCAPI ::EventResult onPlayerAIStepBegin$(class Player&);

    MCAPI ::EventResult onPlayerAIStepEnd$(class Player&);

    MCAPI ::EventResult onPlayerAuthInputApplied$(class Player&);

    MCAPI ::EventResult onPlayerAuthInputReceived$(class Player&);

    // NOLINTEND
};
