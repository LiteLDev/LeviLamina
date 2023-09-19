#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class DeferredSubscription {
public:
    // prevent constructor by default
    DeferredSubscription& operator=(DeferredSubscription const&);
    DeferredSubscription(DeferredSubscription const&);
    DeferredSubscription();
};

}; // namespace Bedrock::PubSub
