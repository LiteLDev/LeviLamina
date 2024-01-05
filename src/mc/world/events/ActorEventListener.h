#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MovePredictionType.h"
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
    // vIndex: 0, symbol: ??1ActorEventListener@@UEAA@XZ
    virtual ~ActorEventListener();

    // vIndex: 1, symbol: ?onEvent@ActorEventListener@@UEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ActorNotificationEvent const&);

    // symbol: ?onActorAttackedActor@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    MCVAPI ::EventResult onActorAttackedActor(class Actor& actor, class Actor& target);

    // symbol: ?onActorCreated@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4ActorInitializationMethod@@@Z
    MCVAPI ::EventResult onActorCreated(class Actor&, ::ActorInitializationMethod);

    // symbol:
    // ?onActorCreationAttemptFailed@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI ::EventResult onActorCreationAttemptFailed(class Actor& actor, std::string_view message);

    // symbol:
    // ?onActorDefinitionEvent@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@5@@Z
    MCVAPI ::EventResult onActorDefinitionEvent(
        class Actor&                                 actor,
        std::string const&                           event,
        std::vector<struct ActorDefinitionModifier>& modifiers
    );

    // symbol:
    // ?onActorMobInteraction@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4InteractionType@MinecraftEventing@@W4ActorType@@@Z
    MCVAPI ::EventResult onActorMobInteraction(
        class Actor&                         actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    // symbol:
    // ?onActorPredictedMove@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4MovePredictionType@@AEBVVec3@@@Z
    MCVAPI ::EventResult
    onActorPredictedMove(class Actor& actor, ::MovePredictionType predictionType, class Vec3 const& pos);

    // symbol: ?onActorSneakChanged@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N@Z
    MCVAPI ::EventResult onActorSneakChanged(class Actor& actor, bool isSneaking);

    // symbol: ?onActorStartRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    MCVAPI ::EventResult onActorStartRiding(class Actor& actor, class Actor& vehicle);

    // symbol: ?onActorStopRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N11@Z
    MCVAPI ::EventResult
    onActorStopRiding(class Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    // symbol: ?onActorTargetAcquired@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    MCVAPI ::EventResult onActorTargetAcquired(class Actor& actor, class Actor& target);

    // symbol: ?onActorTeleported@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
    MCVAPI ::EventResult onActorTeleported(class Actor& actor);

    // symbol: ?onActorTick@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
    MCVAPI ::EventResult onActorTick(class Actor& actor);

    // NOLINTEND
};
