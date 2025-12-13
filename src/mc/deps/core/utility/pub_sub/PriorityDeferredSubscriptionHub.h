#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPSCQueue.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHubBase.h"

namespace Bedrock::PubSub {

class PriorityDeferredSubscriptionHub : public ::Bedrock::PubSub::DeferredSubscriptionHubBase {
public:
    // PriorityDeferredSubscriptionHub inner types declare
    // clang-format off
    struct DequeuedEntry;
    struct QueueEntry;
    // clang-format on

    // PriorityDeferredSubscriptionHub inner types define
    struct DequeuedEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk625823;
        ::ll::UntypedStorage<4, 4>  mUnkec5839;
        // NOLINTEND

    public:
        // prevent constructor by default
        DequeuedEntry& operator=(DequeuedEntry const&);
        DequeuedEntry(DequeuedEntry const&);
        DequeuedEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&
        operator=(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&&);

        MCNAPI ~DequeuedEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct QueueEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnka11425;
        ::ll::UntypedStorage<4, 8>  mUnk20c6e2;
        ::ll::UntypedStorage<4, 4>  mUnka8f19d;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueueEntry& operator=(QueueEntry const&);
        QueueEntry(QueueEntry const&);
        QueueEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueueEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 560> mUnk31088e;
    ::ll::UntypedStorage<8, 40>  mUnkbc9ae5;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityDeferredSubscriptionHub& operator=(PriorityDeferredSubscriptionHub const&);
    PriorityDeferredSubscriptionHub(PriorityDeferredSubscriptionHub const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void flushPendingEvents() /*override*/;

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;

    virtual bool _runOneEvent() /*override*/;

    virtual void _enqueue(
        ::std::function<void()>            fn,
        ::Bedrock::PubSub::ConnectPosition at,
        ::std::optional<int>               group
    ) /*override*/;

    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry const& entry);

    virtual ~PriorityDeferredSubscriptionHub() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PriorityDeferredSubscriptionHub();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushPendingEvents();

    MCNAPI ::Bedrock::PubSub::DeferredSubscriptionHub::HubType $getHubType() const;

    MCNAPI bool $_runOneEvent();

    MCNAPI void
    $_enqueue(::std::function<void()> fn, ::Bedrock::PubSub::ConnectPosition at, ::std::optional<int> group);

    MCNAPI void $_runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry const& entry);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
