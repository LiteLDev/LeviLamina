#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHubBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class DeferredSubscriptionHubBase; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

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
        // prevent constructor by default
        DequeuedEntry& operator=(DequeuedEntry const&);
        DequeuedEntry(DequeuedEntry const&);
        DequeuedEntry();

    public:
        // NOLINTBEGIN
        MCAPI ~DequeuedEntry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct QueueEntry {
    public:
        // prevent constructor by default
        QueueEntry& operator=(QueueEntry const&);
        QueueEntry(QueueEntry const&);
        QueueEntry();

    public:
        // NOLINTBEGIN
        MCAPI ~QueueEntry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PriorityDeferredSubscriptionHub& operator=(PriorityDeferredSubscriptionHub const&);
    PriorityDeferredSubscriptionHub(PriorityDeferredSubscriptionHub const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PriorityDeferredSubscriptionHub() = default;

    // vIndex: 3
    virtual void flushPendingEvents();

    // vIndex: 8
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;

    // vIndex: 10
    virtual void _enqueue(std::function<void()> fn, ::Bedrock::PubSub::ConnectPosition at, std::optional<int> group);

    // vIndex: 11
    virtual bool _runOneEvent();

    // vIndex: 12
    virtual void _runDequeuedEntry(struct Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry const& entry);

    MCAPI PriorityDeferredSubscriptionHub();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _enqueue$(std::function<void()> fn, ::Bedrock::PubSub::ConnectPosition at, std::optional<int> group);

    MCAPI void _runDequeuedEntry$(struct Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry const& entry);

    MCAPI bool _runOneEvent$();

    MCAPI void flushPendingEvents$();

    MCAPI ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType$() const;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
