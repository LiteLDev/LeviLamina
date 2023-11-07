#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/ConnectPosition.h"
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHub.h"
#include "mc/deps/core/common/bedrock/pubsub/PriorityDeferredSubscriptionHub.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class PriorityDeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class RecursiveFIFODeferredSubscriptionHub : public ::Bedrock::PubSub::PriorityDeferredSubscriptionHub {
public:
    // prevent constructor by default
    RecursiveFIFODeferredSubscriptionHub& operator=(RecursiveFIFODeferredSubscriptionHub const&);
    RecursiveFIFODeferredSubscriptionHub(RecursiveFIFODeferredSubscriptionHub const&);
    RecursiveFIFODeferredSubscriptionHub();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RecursiveFIFODeferredSubscriptionHub@PubSub@@@UEAA@XZ
    virtual ~RecursiveFIFODeferredSubscriptionHub();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
