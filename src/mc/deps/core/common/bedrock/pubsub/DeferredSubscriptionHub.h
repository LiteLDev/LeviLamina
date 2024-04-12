#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/ConnectPosition.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHub {
public:
    // DeferredSubscriptionHub inner types define
    enum class HubType {};

public:
    // prevent constructor by default
    DeferredSubscriptionHub& operator=(DeferredSubscriptionHub const&);
    DeferredSubscriptionHub(DeferredSubscriptionHub const&);
    DeferredSubscriptionHub();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeferredSubscriptionHub@PubSub@Bedrock@@UEAA@XZ
    virtual ~DeferredSubscriptionHub() = default;

    // vIndex: 1, symbol: ?runDeferredEvents@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAA_K_K@Z
    virtual uint64 runDeferredEvents(uint64) = 0;

    // vIndex: 2, symbol:
    // ?runDeferredEventsForDuration@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAA_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z
    virtual uint64 runDeferredEventsForDuration(std::chrono::milliseconds) = 0;

    // vIndex: 3, symbol: ?flushPendingEvents@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@UEAAXXZ
    virtual void flushPendingEvents() = 0;

    // vIndex: 4, symbol: ?clear@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAAXXZ
    virtual void clear() = 0;

    // vIndex: 5, symbol: ?erase@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAA_KAEAVRawSubscription@23@@Z
    virtual uint64 erase(class Bedrock::PubSub::RawSubscription& subscription) = 0;

    // vIndex: 6, symbol: ?size@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEBA_KXZ
    virtual uint64 size() const = 0;

    // vIndex: 7, symbol: ?empty@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEBA_NXZ
    virtual bool empty() const = 0;

    // vIndex: 8, symbol:
    // ?getHubType@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@UEBA?AW4HubType@DeferredSubscriptionHub@23@XZ
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const = 0;

    // vIndex: 9, symbol: ?_join@DeferredSubscriptionHubBase@PubSub@Bedrock@@EEAAX$$QEAVDeferredSubscription@23@@Z
    virtual void _join(class Bedrock::PubSub::DeferredSubscription&& subscription) = 0;

    // vIndex: 10, symbol:
    // ?_enqueue@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@EEAAXV?$function@$$A6AXXZ@std@@W4ConnectPosition@23@V?$optional@H@5@@Z
    virtual void
    _enqueue(std::function<void()> fn, ::Bedrock::PubSub::ConnectPosition at, std::optional<int> group) = 0;

    // symbol:
    // ?makePriorityHub@DeferredSubscriptionHub@PubSub@Bedrock@@SA?AV?$unique_ptr@VDeferredSubscriptionHub@PubSub@Bedrock@@U?$default_delete@VDeferredSubscriptionHub@PubSub@Bedrock@@@std@@@std@@XZ
    MCAPI static std::unique_ptr<class Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
