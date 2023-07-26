#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class DeferredSubscription {

public:
    // prevent constructor by default
    DeferredSubscription& operator=(DeferredSubscription const&) = delete;
    DeferredSubscription(DeferredSubscription const&)            = delete;
    DeferredSubscription()                                       = delete;
};

}; // namespace Bedrock::PubSub
