/**
 * @file  BossEventSubscriptionManagerImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BossEventSubscriptionManagerImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSEVENTSUBSCRIPTIONMANAGERIMPL
public:
    class BossEventSubscriptionManagerImpl& operator=(class BossEventSubscriptionManagerImpl const &) = delete;
    BossEventSubscriptionManagerImpl(class BossEventSubscriptionManagerImpl const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSEVENTSUBSCRIPTIONMANAGERIMPL
    /**
     * @symbol ?areBossEventSubscribersReady\@BossEventSubscriptionManagerImpl\@\@UEBA_NXZ
     */
    MCVAPI bool areBossEventSubscribersReady() const;
    /**
     * @symbol ?broadcastBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAAXW4BossEventUpdateType\@\@\@Z
     */
    MCVAPI void broadcastBossEvent(enum class BossEventUpdateType);
    /**
     * @symbol ?broadcastBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAAXW4BossEventUpdateType\@\@AEBUActorUniqueID\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void broadcastBossEvent(enum class BossEventUpdateType, struct ActorUniqueID const &, class BossEventPacket const &);
    /**
     * @symbol ?subscribeToBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXW4BossEventUpdateType\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Bedrock::PubSub::Subscription subscribeToBossEvent(class std::function<void (enum class BossEventUpdateType)>);
    /**
     * @symbol ?subscribeToBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXW4BossEventUpdateType\@\@AEBUActorUniqueID\@\@AEBVBossEventPacket\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Bedrock::PubSub::Subscription subscribeToBossEvent(class std::function<void (enum class BossEventUpdateType, struct ActorUniqueID const &, class BossEventPacket const &)>);
#endif
    /**
     * @symbol ??0BossEventSubscriptionManagerImpl\@\@QEAA\@XZ
     */
    MCAPI BossEventSubscriptionManagerImpl();

};
