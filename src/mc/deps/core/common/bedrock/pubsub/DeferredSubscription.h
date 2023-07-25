#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class DeferredSubscription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_DEFERREDSUBSCRIPTION
public:
    DeferredSubscription& operator=(DeferredSubscription const&) = delete;
    DeferredSubscription(DeferredSubscription const&)            = delete;
    DeferredSubscription()                                       = delete;
#endif

public:
};

}; // namespace Bedrock::PubSub
