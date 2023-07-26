#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionBase {

public:
    // prevent constructor by default
    SubscriptionBase& operator=(SubscriptionBase const&) = delete;
    SubscriptionBase(SubscriptionBase const&)            = delete;
    SubscriptionBase()                                   = delete;

public:
    /**
     * @symbol ?disconnect\@SubscriptionBase\@PubSub\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void disconnect(); // NOLINT
    /**
     * @symbol ?disconnect_async\@SubscriptionBase\@PubSub\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void disconnect_async(); // NOLINT
    /**
     * @symbol ??8SubscriptionBase\@PubSub\@Bedrock\@\@QEBA_NAEBV012\@\@Z
     */
    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const&) const; // NOLINT
};

}; // namespace Bedrock::PubSub
