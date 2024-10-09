#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/detail/SubscriptionBodyBase.h"

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    std::weak_ptr<Detail::SubscriptionBodyBase> mBody; // this+0x0

public:
    // NOLINTBEGIN
    MCAPI void disconnect();

    MCAPI void disconnect_async();

    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const&) const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
