#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionContext {

public:
    // prevent constructor by default
    SubscriptionContext& operator=(SubscriptionContext const&) = delete;
    SubscriptionContext(SubscriptionContext const&)            = delete;
    SubscriptionContext()                                      = delete;
};

}; // namespace Bedrock::PubSub
