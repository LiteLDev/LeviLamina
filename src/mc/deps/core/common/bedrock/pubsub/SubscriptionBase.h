#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/pubsub/SubscriptionBodyBase.h"

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    std::weak_ptr<Detail::SubscriptionBodyBase> mBody; // this+0x0
    // prevent constructor by default
    SubscriptionBase& operator=(SubscriptionBase const&);
    SubscriptionBase(SubscriptionBase const&);
    SubscriptionBase();

public:
    // NOLINTBEGIN
    // symbol: ?disconnect@SubscriptionBase@PubSub@Bedrock@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ?disconnect_async@SubscriptionBase@PubSub@Bedrock@@QEAAXXZ
    MCAPI void disconnect_async();

    // symbol: ??8SubscriptionBase@PubSub@Bedrock@@QEBA_NAEBV012@@Z
    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const&) const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
