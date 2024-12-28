#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPSCQueue.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHubBase.h"

namespace Bedrock::PubSub {

class FIFODeferredSubscriptionHub : public ::Bedrock::PubSub::DeferredSubscriptionHubBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 560> mUnke1f3f8;
    // NOLINTEND

public:
    // prevent constructor by default
    FIFODeferredSubscriptionHub& operator=(FIFODeferredSubscriptionHub const&);
    FIFODeferredSubscriptionHub(FIFODeferredSubscriptionHub const&);
    FIFODeferredSubscriptionHub();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void flushPendingEvents() /*override*/;

    // vIndex: 8
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;

    // vIndex: 11
    virtual bool _runOneEvent() /*override*/;

    // vIndex: 10
    virtual void
        _enqueue(::std::function<void()>, ::Bedrock::PubSub::ConnectPosition, ::std::optional<int>) /*override*/;

    // vIndex: 0
    virtual ~FIFODeferredSubscriptionHub() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $flushPendingEvents();

    MCAPI ::Bedrock::PubSub::DeferredSubscriptionHub::HubType $getHubType() const;

    MCAPI bool $_runOneEvent();

    MCAPI void $_enqueue(::std::function<void()>, ::Bedrock::PubSub::ConnectPosition, ::std::optional<int>);
    // NOLINTEND
};

} // namespace Bedrock::PubSub
