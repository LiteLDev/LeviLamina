#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/pubsub/SubscriptionBodyBase.h"

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    std::weak_ptr<Detail::SubscriptionBodyBase> mBody; // this+0x0

public:
    // NOLINTBEGIN
    // symbol: ?disconnect@SubscriptionBase@PubSub@Bedrock@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ??8SubscriptionBase@PubSub@Bedrock@@QEBA_NAEBV012@@Z
    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const& other) const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
