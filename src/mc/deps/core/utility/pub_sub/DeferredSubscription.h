#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

namespace Bedrock::PubSub {

class DeferredSubscription : public ::Bedrock::PubSub::SubscriptionBase {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    DeferredSubscription& operator=(DeferredSubscription const&);
    DeferredSubscription(DeferredSubscription const&);
    DeferredSubscription();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::PubSub::DeferredSubscription& operator=(::Bedrock::PubSub::DeferredSubscription&& other);

    MCNAPI uint64 runDeferredEvents(uint64 maxToRun);
#endif

    MCNAPI ~DeferredSubscription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
