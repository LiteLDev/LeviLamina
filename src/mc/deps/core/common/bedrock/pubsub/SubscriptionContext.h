#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionContext {
public:
    // prevent constructor by default
    SubscriptionContext& operator=(SubscriptionContext const&);
    SubscriptionContext(SubscriptionContext const&);
    SubscriptionContext();
};

}; // namespace Bedrock::PubSub
