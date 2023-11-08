#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/enums/InitializationMethod.h"
#include "mc/enums/MovePredictionType.h"
#include "mc/events/ActorGameplayEvent.h"
#include "mc/events/MutableActorGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class ActorEventCoordinator {
public:
    // prevent constructor by default
    ActorEventCoordinator& operator=(ActorEventCoordinator const&);
    ActorEventCoordinator(ActorEventCoordinator const&);
    ActorEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorEventCoordinator@@UEAA@XZ
    virtual ~ActorEventCoordinator() = default;

    // symbol: ?getActorGameplayHandler@ActorEventCoordinator@@QEAAAEAVActorGameplayHandler@@XZ
    MCAPI class ActorGameplayHandler& getActorGameplayHandler();

    // symbol:
    // ?registerActorGameplayHandler@ActorEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VActorGameplayHandler@@U?$default_delete@VActorGameplayHandler@@@std@@@std@@@Z
    MCAPI void registerActorGameplayHandler(std::unique_ptr<class ActorGameplayHandler>&&);

    // symbol: ?sendActorCreated@ActorEventCoordinator@@QEAAXAEAVActor@@W4InitializationMethod@@@Z
    MCAPI void sendActorCreated(class Actor&, ::InitializationMethod);

    // symbol:
    // ?sendActorCreationAttemptFailed@ActorEventCoordinator@@QEAAXAEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void sendActorCreationAttemptFailed(class Actor&, std::string_view);

    // symbol: ?sendActorPredictedMove@ActorEventCoordinator@@QEAAXAEAVActor@@W4MovePredictionType@@AEBVVec3@@@Z
    MCAPI void sendActorPredictedMove(class Actor&, ::MovePredictionType, class Vec3 const&);

    // symbol: ?sendActorSneakChanged@ActorEventCoordinator@@QEAAXAEAVActor@@_N@Z
    MCAPI void sendActorSneakChanged(class Actor&, bool);

    // symbol: ?sendActorStartRiding@ActorEventCoordinator@@QEAAXAEAVActor@@0@Z
    MCAPI void sendActorStartRiding(class Actor&, class Actor&);

    // symbol: ?sendActorStopRiding@ActorEventCoordinator@@QEAAXAEAVActor@@_N11@Z
    MCAPI void sendActorStopRiding(class Actor&, bool, bool, bool);

    // symbol: ?sendActorTargetAcquired@ActorEventCoordinator@@QEAAXAEAVActor@@0@Z
    MCAPI void sendActorTargetAcquired(class Actor&, class Actor&);

    // symbol: ?sendActorTeleported@ActorEventCoordinator@@QEAAXAEAVActor@@@Z
    MCAPI void sendActorTeleported(class Actor&);

    // symbol: ?sendActorTick@ActorEventCoordinator@@QEAAXAEAVActor@@@Z
    MCAPI void sendActorTick(class Actor&);

    // symbol:
    // ?sendEvent@ActorEventCoordinator@@QEAA?AW4CoordinatorResult@@AEBV?$EventRef@U?$ActorGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct ActorGameplayEvent<::CoordinatorResult>> const&);

    // symbol:
    // ?sendEvent@ActorEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableActorGameplayEvent<::CoordinatorResult>>);

    // symbol: ?sendEvent@ActorEventCoordinator@@QEAAXAEBV?$EventRef@U?$ActorGameplayEvent@X@@@@@Z
    MCAPI void sendEvent(class EventRef<struct ActorGameplayEvent<void>> const&);

    // NOLINTEND
};
