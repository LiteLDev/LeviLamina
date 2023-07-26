#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class RawSubscription {

public:
    // prevent constructor by default
    RawSubscription& operator=(RawSubscription const&) = delete;
    RawSubscription(RawSubscription const&)            = delete;
    RawSubscription()                                  = delete;
};

}; // namespace Bedrock::PubSub
