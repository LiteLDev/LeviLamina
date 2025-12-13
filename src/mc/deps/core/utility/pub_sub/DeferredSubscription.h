#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

namespace Bedrock::PubSub {

class DeferredSubscription : public ::Bedrock::PubSub::SubscriptionBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C uint64 runDeferredEvents(uint64 maxToRun);

    MCNAPI_C ~DeferredSubscription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
