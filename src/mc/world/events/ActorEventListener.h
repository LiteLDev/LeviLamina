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
    // vIndex: 0, symbol: ??1ActorEventListener@@UEAA@XZ
    virtual ~ActorEventListener();

    // vIndex: 1, symbol: ?onEvent@ActorEventListener@@UEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ActorNotificationEvent const&);

    // vIndex: 2, symbol:
    // ?onActorDefinitionEvent@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@5@@Z
    virtual ::EventResult onActorDefinitionEvent(
        class Actor&                                 actor,
        std::string const&                           event,
        std::vector<struct ActorDefinitionModifier>& modifiers
    );

    // vIndex: 3, symbol: ?onActorTick@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
    virtual ::EventResult onActorTick(class Actor& actor);

    // vIndex: 4, symbol: ?onActorSneakChanged@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N@Z
    virtual ::EventResult onActorSneakChanged(class Actor& actor, bool isSneaking);

    // vIndex: 5, symbol: ?onActorStartRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    virtual ::EventResult onActorStartRiding(class Actor& actor, class Actor&);

    // vIndex: 6, symbol: ?onActorStopRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N11@Z
    virtual ::EventResult onActorStopRiding(class Actor& actor, bool, bool actorIsBeingDestroyed, bool);

    // vIndex: 7, symbol:
    // ?onActorCreated@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4ActorInitializationMethod@@@Z
    virtual ::EventResult onActorCreated(class Actor&, ::ActorInitializationMethod);

    // vIndex: 8, symbol:
    // ?onActorCreationAttemptFailed@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual ::EventResult onActorCreationAttemptFailed(class Actor& actor, std::string_view message);

    // vIndex: 9, symbol: ?onActorTeleported@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
    virtual ::EventResult onActorTeleported(class Actor& actor);

    // vIndex: 10, symbol: ?onActorAttackedActor@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    virtual ::EventResult onActorAttackedActor(class Actor& actor, class Actor& target);

    // vIndex: 11, symbol:
    // ?onActorMobInteraction@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4InteractionType@MinecraftEventing@@W4ActorType@@@Z
    virtual ::EventResult onActorMobInteraction(
        class Actor&                         actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );

    // vIndex: 12, symbol: ?onActorTargetAcquired@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    virtual ::EventResult onActorTargetAcquired(class Actor& actor, class Actor& target);

    // vIndex: 13, symbol: ?onPlayerAuthInputReceived@ActorEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    virtual ::EventResult onPlayerAuthInputReceived(class Player&);

    // vIndex: 14, symbol: ?onPlayerAuthInputApplied@ActorEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    virtual ::EventResult onPlayerAuthInputApplied(class Player&);

    // vIndex: 15, symbol: ?onPlayerAIStepBegin@ActorEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    virtual ::EventResult onPlayerAIStepBegin(class Player&);

    // vIndex: 16, symbol: ?onPlayerAIStepEnd@ActorEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    virtual ::EventResult onPlayerAIStepEnd(class Player&);

    // vIndex: 17, symbol:
    // ?onActorMovementRewindCorrected@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_KW4ReplayCorrectionResult@@@Z
    virtual ::EventResult onActorMovementRewindCorrected(class Actor&, uint64, ::ReplayCorrectionResult);

    // NOLINTEND
};
