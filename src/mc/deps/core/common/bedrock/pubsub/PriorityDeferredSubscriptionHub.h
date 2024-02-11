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
        // symbol: ??1DequeuedEntry@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@QEAA@XZ
        MCAPI ~DequeuedEntry();

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
        // symbol: ??1QueueEntry@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@QEAA@XZ
        MCAPI ~QueueEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PriorityDeferredSubscriptionHub& operator=(PriorityDeferredSubscriptionHub const&);
    PriorityDeferredSubscriptionHub(PriorityDeferredSubscriptionHub const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PriorityDeferredSubscriptionHub@PubSub@Bedrock@@UEAA@XZ
    virtual ~PriorityDeferredSubscriptionHub() = default;

    // vIndex: 3, symbol: ?flushPendingEvents@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@UEAAXXZ
    virtual void flushPendingEvents();

    // vIndex: 8, symbol:
    // ?getHubType@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@UEBA?AW4HubType@DeferredSubscriptionHub@23@XZ
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const;

    // vIndex: 10, symbol:
    // ?_enqueue@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@EEAAXV?$function@$$A6AXXZ@std@@W4ConnectPosition@23@V?$optional@H@5@@Z
    virtual void _enqueue(std::function<void()> fn, ::Bedrock::PubSub::ConnectPosition at, std::optional<int> group);

    // vIndex: 11, symbol: ?_runOneEvent@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@EEAA_NXZ
    virtual bool _runOneEvent();

    // vIndex: 12, symbol:
    // ?_runDequeuedEntry@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@MEAAXAEBUDequeuedEntry@123@@Z
    virtual void _runDequeuedEntry(struct Bedrock::PubSub::PriorityDeferredSubscriptionHub::DequeuedEntry const& entry);

    // symbol: ??0PriorityDeferredSubscriptionHub@PubSub@Bedrock@@QEAA@XZ
    MCAPI PriorityDeferredSubscriptionHub();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
