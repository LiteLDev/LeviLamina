#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/PriorityDeferredSubscriptionHub.h"

namespace Bedrock::PubSub {

class RecursiveFIFODeferredSubscriptionHub : public ::Bedrock::PubSub::PriorityDeferredSubscriptionHub {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkba7cf2;
    // NOLINTEND

public:
    // prevent constructor by default
    RecursiveFIFODeferredSubscriptionHub& operator=(RecursiveFIFODeferredSubscriptionHub const&);
    RecursiveFIFODeferredSubscriptionHub(RecursiveFIFODeferredSubscriptionHub const&);
    RecursiveFIFODeferredSubscriptionHub();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;

    // vIndex: 10
    virtual void _enqueue(::std::function<void()>, ::Bedrock::PubSub::ConnectPosition, ::std::optional<int>) /*override*/;

    // vIndex: 12
    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry const& entry) /*override*/;

    // vIndex: 0
    virtual ~RecursiveFIFODeferredSubscriptionHub() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
