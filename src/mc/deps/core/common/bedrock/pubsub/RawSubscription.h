#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class RawSubscription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_RAWSUBSCRIPTION
public:
    RawSubscription& operator=(RawSubscription const&) = delete;
    RawSubscription(RawSubscription const&)            = delete;
    RawSubscription()                                  = delete;
#endif

public:
};

}; // namespace Bedrock::PubSub
