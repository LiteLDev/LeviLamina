#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_SUBSCRIPTIONCONTEXT
public:
    SubscriptionContext& operator=(SubscriptionContext const&) = delete;
    SubscriptionContext(SubscriptionContext const&)            = delete;
    SubscriptionContext()                                      = delete;
#endif

public:
};

}; // namespace Bedrock::PubSub
