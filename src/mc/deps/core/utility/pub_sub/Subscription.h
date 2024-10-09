#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

namespace Bedrock::PubSub {

class Subscription : public SubscriptionBase {
public:
    // NOLINTBEGIN
    MCAPI class Bedrock::PubSub::Subscription& operator=(class Bedrock::PubSub::Subscription&&);

    MCAPI ~Subscription();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
