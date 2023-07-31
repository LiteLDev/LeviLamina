#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/ActorGameplayEvent.h"
#include "mc/events/MutableActorGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class ActorEventCoordinator {

public:
    // prevent constructor by default
    ActorEventCoordinator& operator=(ActorEventCoordinator const&) = delete;
    ActorEventCoordinator(ActorEventCoordinator const&)            = delete;
    ActorEventCoordinator()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getActorGameplayHandler\@ActorEventCoordinator\@\@QEAAAEAVActorGameplayHandler\@\@XZ
     */
    MCAPI class ActorGameplayHandler& getActorGameplayHandler();
    /**
     * @symbol
     * ?registerActorGameplayHandler\@ActorEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VActorGameplayHandler\@\@U?$default_delete\@VActorGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerActorGameplayHandler(std::unique_ptr<class ActorGameplayHandler>&&);
    /**
     * @symbol ?sendActorCreated\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorCreated(class Actor&);
    /**
     * @symbol
     * ?sendActorCreationAttemptFailed\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void sendActorCreationAttemptFailed(class Actor&, std::string_view);
    /**
     * @symbol
     * ?sendActorPredictedMove\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@W4MovePredictionType\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void sendActorPredictedMove(class Actor&, enum class MovePredictionType, class Vec3 const&);
    /**
     * @symbol ?sendActorSneakChanged\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void sendActorSneakChanged(class Actor&, bool);
    /**
     * @symbol ?sendActorStartRiding\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void sendActorStartRiding(class Actor&, class Actor&);
    /**
     * @symbol ?sendActorStopRiding\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@_N11\@Z
     */
    MCAPI void sendActorStopRiding(class Actor&, bool, bool, bool);
    /**
     * @symbol ?sendActorTargetAcquired\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void sendActorTargetAcquired(class Actor&, class Actor&);
    /**
     * @symbol ?sendActorTeleported\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorTeleported(class Actor&);
    /**
     * @symbol ?sendActorTick\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorTick(class Actor&);
    /**
     * @symbol
     * ?sendEvent\@ActorEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
        sendEvent(class EventRef<struct MutableActorGameplayEvent<enum class CoordinatorResult>>);
    /**
     * @symbol ?sendEvent\@ActorEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$ActorGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct ActorGameplayEvent<void>> const&);
    /**
     * @symbol
     * ?sendEvent\@ActorEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$ActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
    sendEvent(class EventRef<struct ActorGameplayEvent<enum class CoordinatorResult>> const&);
    // NOLINTEND
};
