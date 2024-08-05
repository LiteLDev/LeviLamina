#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/pubsub/SubscriptionBodyBase.h"

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    std::weak_ptr<Detail::SubscriptionBodyBase> mBody; // this+0x0

public:
    // NOLINTBEGIN
    MCAPI void disconnect();

    MCAPI void disconnect_async();

    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const& other) const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
