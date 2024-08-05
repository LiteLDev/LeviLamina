#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ReplayCorrectionResult.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/MinecraftEventing.h"
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
    virtual ::EventResult onActorStartRiding(class Actor& actor, class Actor&);

    // vIndex: 6
    virtual ::EventResult onActorStopRiding(class Actor& actor, bool, bool actorIsBeingDestroyed, bool);

    // vIndex: 7
    virtual ::EventResult onActorCreated(class Actor&, ::ActorInitializationMethod);

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
};
