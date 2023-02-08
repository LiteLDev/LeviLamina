/**
 * @file  ActorEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorEventCoordinator.
 *
 */
class ActorEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTCOORDINATOR
public:
    class ActorEventCoordinator& operator=(class ActorEventCoordinator const &) = delete;
    ActorEventCoordinator(class ActorEventCoordinator const &) = delete;
    ActorEventCoordinator() = delete;
#endif

public:
    /**
     * @hash   -649031736
     * @symbol  ?getActorGameplayHandler\@ActorEventCoordinator\@\@QEAAAEAVActorGameplayHandler\@\@XZ
     */
    MCAPI class ActorGameplayHandler & getActorGameplayHandler();
    /**
     * @hash   1804833122
     * @symbol  ?registerActorGameplayHandler\@ActorEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VActorGameplayHandler\@\@U?$default_delete\@VActorGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerActorGameplayHandler(std::unique_ptr<class ActorGameplayHandler> &&);
    /**
     * @hash   1485764342
     * @symbol  ?sendActorCreated\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorCreated(class Actor &);
    /**
     * @hash   -2110388588
     * @symbol  ?sendActorDeath\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@W4ActorType\@\@\@Z
     */
    MCAPI void sendActorDeath(class Actor &, class ActorDamageSource const &, enum class ActorType);
    /**
     * @hash   586304861
     * @symbol  ?sendActorMove\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void sendActorMove(class Actor &, class Vec3 const &);
    /**
     * @hash   -1106993810
     * @symbol  ?sendActorPredictedMove\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@W4MovePredictionType\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void sendActorPredictedMove(class Actor &, enum class MovePredictionType, class Vec3 const &);
    /**
     * @hash   -1252689921
     * @symbol  ?sendActorSneakChanged\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void sendActorSneakChanged(class Actor &, bool);
    /**
     * @hash   -1495233013
     * @symbol  ?sendActorStartRiding\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void sendActorStartRiding(class Actor &, class Actor &);
    /**
     * @hash   -320203121
     * @symbol  ?sendActorStopRiding\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@_N11\@Z
     */
    MCAPI void sendActorStopRiding(class Actor &, bool, bool, bool);
    /**
     * @hash   1986942561
     * @symbol  ?sendActorTargetAcquired\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void sendActorTargetAcquired(class Actor &, class Actor &);
    /**
     * @hash   121273916
     * @symbol  ?sendActorTeleported\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorTeleported(class Actor &);
    /**
     * @hash   -175956218
     * @symbol  ?sendActorTick\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendActorTick(class Actor &);
    /**
     * @hash   405292146
     * @symbol  ?sendActorUseItemOn\@ActorEventCoordinator\@\@QEAAXAEAVActor\@\@AEBVItemStack\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI void sendActorUseItemOn(class Actor &, class ItemStack const &, class BlockPos const &, unsigned char);
    /**
     * @hash   826155133
     * @symbol  ?sendEvent\@ActorEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$ActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct ActorGameplayEvent<enum class CoordinatorResult>> const &);
    /**
     * @hash   783257221
     * @symbol  ?sendEvent\@ActorEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct MutableActorGameplayEvent<enum class CoordinatorResult>>);
    /**
     * @hash   547953400
     * @symbol  ?sendEvent\@ActorEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$ActorGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct ActorGameplayEvent<void>> const &);

};