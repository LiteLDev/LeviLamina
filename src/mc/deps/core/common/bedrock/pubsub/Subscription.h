#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class Subscription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_SUBSCRIPTION
public:
    Subscription& operator=(Subscription const&) = delete;
    Subscription(Subscription const&)            = delete;
#endif

public:
    /**
     * @symbol ??0Subscription\@PubSub\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI Subscription();
    /**
     * @symbol ??4Subscription\@PubSub\@Bedrock\@\@QEAAAEAV012\@$$QEAV012\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription& operator=(class Bedrock::PubSub::Subscription&&);
    /**
     * @symbol ??1Subscription\@PubSub\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~Subscription();
};

}; // namespace Bedrock::PubSub
