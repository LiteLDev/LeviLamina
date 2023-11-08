#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/ConnectPosition.h"
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHub.h"
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHubBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class DeferredSubscriptionHubBase; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class FIFODeferredSubscriptionHub : public ::Bedrock::PubSub::DeferredSubscriptionHubBase {
public:
    // prevent constructor by default
    FIFODeferredSubscriptionHub& operator=(FIFODeferredSubscriptionHub const&);
    FIFODeferredSubscriptionHub(FIFODeferredSubscriptionHub const&);
    FIFODeferredSubscriptionHub();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FIFODeferredSubscriptionHub@PubSub@Bedrock@@UEAA@XZ
    virtual ~FIFODeferredSubscriptionHub() = default;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
