#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class RawSubscription {
public:
    // prevent constructor by default
    RawSubscription& operator=(RawSubscription const&);
    RawSubscription(RawSubscription const&);
    RawSubscription();
};

}; // namespace Bedrock::PubSub
