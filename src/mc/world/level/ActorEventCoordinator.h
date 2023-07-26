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
    /**
     * @symbol ?getActorGameplayHandler\@ActorEventCoordinator\@\@QEAAAEAVActorGameplayHandler\@\@XZ
     */
    MCAPI class ActorGameplayHandler& getActorGameplayHandler(); // NOLINT
    /**
     * @symbol
     * ?registerActorGameplayHandler\@ActorEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VActorGameplayHandler\@\@U?$default_delete\@VActorGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerActorGameplayHandler(std::unique_ptr<class ActorGameplayHandler>&&); // NOLINT
    /**
     * @symbol ?sendActorCreated\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorCreated(class Actor&); // NOLINT
    /**
     * @symbol
     * ?sendActorCreationAttemptFailed\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void
    sendActorCreationAttemptFailed(class Actor&, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol
     * ?sendActorPredictedMove\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@W4MovePredictionType\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void sendActorPredictedMove(class Actor&, enum class MovePredictionType, class Vec3 const&); // NOLINT
    /**
     * @symbol ?sendActorSneakChanged\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void sendActorSneakChanged(class Actor&, bool); // NOLINT
    /**
     * @symbol ?sendActorStartRiding\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void sendActorStartRiding(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ?sendActorStopRiding\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@_N11\@Z
     */
    MCAPI void sendActorStopRiding(class Actor&, bool, bool, bool); // NOLINT
    /**
     * @symbol ?sendActorTargetAcquired\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void sendActorTargetAcquired(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ?sendActorTeleported\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorTeleported(class Actor&); // NOLINT
    /**
     * @symbol ?sendActorTick\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorTick(class Actor&); // NOLINT
    /**
     * @symbol
     * ?sendEvent\@ActorEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
        sendEvent(class EventRef<struct MutableActorGameplayEvent<enum class CoordinatorResult>>); // NOLINT
    /**
     * @symbol ?sendEvent\@ActorEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$ActorGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct ActorGameplayEvent<void>> const&); // NOLINT
    /**
     * @symbol
     * ?sendEvent\@ActorEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$ActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
    sendEvent(class EventRef<struct ActorGameplayEvent<enum class CoordinatorResult>> const&); // NOLINT
};
