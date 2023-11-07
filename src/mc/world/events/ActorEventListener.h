#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/InitializationMethod.h"
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
    MCVAPI ::EventResult onActorAttackedActor(class Actor&, class Actor&);

    // symbol: ?onActorCreated@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4InitializationMethod@@@Z
    MCVAPI ::EventResult onActorCreated(class Actor&, ::InitializationMethod);

    // symbol:
    // ?onActorCreationAttemptFailed@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI ::EventResult onActorCreationAttemptFailed(class Actor&, std::string_view);

    // symbol:
    // ?onActorDefinitionEvent@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@5@@Z
    MCVAPI ::EventResult
    onActorDefinitionEvent(class Actor&, std::string const&, std::vector<struct ActorDefinitionModifier>&);

    // symbol:
    // ?onActorMobInteraction@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4InteractionType@MinecraftEventing@@W4ActorType@@@Z
    MCVAPI ::EventResult onActorMobInteraction(class Actor&, ::MinecraftEventing::InteractionType, ::ActorType);

    // symbol:
    // ?onActorPredictedMove@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4MovePredictionType@@AEBVVec3@@@Z
    MCVAPI ::EventResult onActorPredictedMove(class Actor&, ::MovePredictionType, class Vec3 const&);

    // symbol: ?onActorSneakChanged@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N@Z
    MCVAPI ::EventResult onActorSneakChanged(class Actor&, bool);

    // symbol: ?onActorStartRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    MCVAPI ::EventResult onActorStartRiding(class Actor&, class Actor&);

    // symbol: ?onActorStopRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N11@Z
    MCVAPI ::EventResult onActorStopRiding(class Actor&, bool, bool, bool);

    // symbol: ?onActorTargetAcquired@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
    MCVAPI ::EventResult onActorTargetAcquired(class Actor&, class Actor&);

    // symbol: ?onActorTeleported@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
    MCVAPI ::EventResult onActorTeleported(class Actor&);

    // symbol: ?onActorTick@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
    MCVAPI ::EventResult onActorTick(class Actor&);

    // NOLINTEND
};
