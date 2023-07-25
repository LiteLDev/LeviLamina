#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_SUBSCRIPTIONBASE
public:
    SubscriptionBase& operator=(SubscriptionBase const&) = delete;
    SubscriptionBase(SubscriptionBase const&)            = delete;
    SubscriptionBase()                                   = delete;
#endif

public:
    /**
     * @symbol ?disconnect\@SubscriptionBase\@PubSub\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @symbol ?disconnect_async\@SubscriptionBase\@PubSub\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void disconnect_async();
    /**
     * @symbol ??8SubscriptionBase\@PubSub\@Bedrock\@\@QEBA_NAEBV012\@\@Z
     */
    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const&) const;
};

}; // namespace Bedrock::PubSub
