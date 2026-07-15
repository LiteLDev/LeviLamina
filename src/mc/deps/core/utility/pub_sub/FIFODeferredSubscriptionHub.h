#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPSCQueue.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHubBase.h"
#include "mc/platform/brstd/move_only_function.h"

namespace Bedrock::PubSub {

class FIFODeferredSubscriptionHub : public ::Bedrock::PubSub::DeferredSubscriptionHubBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 560> mUnka66d8b;
    // NOLINTEND

public:
    // prevent constructor by default
    FIFODeferredSubscriptionHub& operator=(FIFODeferredSubscriptionHub const&);
    FIFODeferredSubscriptionHub(FIFODeferredSubscriptionHub const&);
    FIFODeferredSubscriptionHub();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void flushPendingEvents() /*override*/;

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;

    virtual bool _runOneEvent() /*override*/;

    virtual void _enqueue(
        ::brstd::move_only_function<void()>,
        ::Bedrock::PubSub::ConnectPosition,
        ::std::optional<int>
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::PubSub
