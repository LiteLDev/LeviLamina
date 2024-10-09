#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    // prevent constructor by default
    SubscriptionBase& operator=(SubscriptionBase const&);
    SubscriptionBase(SubscriptionBase const&);
    SubscriptionBase();

public:
    // NOLINTBEGIN
    MCAPI void disconnect();

    MCAPI void disconnect_async();

    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const&) const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
