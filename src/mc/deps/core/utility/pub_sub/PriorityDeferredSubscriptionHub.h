#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPSCQueue.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHubBase.h"
#include "mc/platform/brstd/move_only_function.h"

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
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mFunction;
        ::ll::TypedStorage<4, 4, int>                                  mOrder;
        // NOLINTEND
    };

    struct QueueEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mFunction;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                 mGroup;
        ::ll::TypedStorage<4, 4, ::Bedrock::PubSub::ConnectPosition>   mPosition;
        // NOLINTEND
    };

    using DequeuedItemsType = ::std::deque<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>;

    using QueueType = ::Bedrock::MPSCQueue<
        ::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry,
        64,
        ::std::allocator<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry>,
        0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        560,
        ::Bedrock::MPSCQueue<
            ::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry,
            64,
            ::std::allocator<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::QueueEntry>,
            0>>
        mQueue;
    ::ll::TypedStorage<8, 40, ::std::deque<::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry>>
        mDequeuedItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void flushPendingEvents() /*override*/;

    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const /*override*/;

    virtual bool _runOneEvent() /*override*/;

    virtual void _enqueue(
        ::brstd::move_only_function<void()> fn,
        ::Bedrock::PubSub::ConnectPosition  at,
        ::std::optional<int>                group
    ) /*override*/;

    virtual void _runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&& entry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $flushPendingEvents();

    MCFOLD ::Bedrock::PubSub::DeferredSubscriptionHub::HubType $getHubType() const;

    MCAPI bool $_runOneEvent();

    MCAPI void $_enqueue(
        ::brstd::move_only_function<void()> fn,
        ::Bedrock::PubSub::ConnectPosition  at,
        ::std::optional<int>                group
    );

#ifdef LL_PLAT_S
    MCAPI void $_runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&& entry);
#else // LL_PLAT_C
    MCFOLD void $_runDequeuedEntry(::Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry&& entry);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
