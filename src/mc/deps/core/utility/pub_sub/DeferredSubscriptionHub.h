#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"

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
    // vIndex: 0
    virtual ~DeferredSubscriptionHub() = default;

    // vIndex: 1
    virtual uint64 runDeferredEvents(uint64 maxToRun) = 0;

    // vIndex: 2
    virtual uint64 runDeferredEventsForDuration(std::chrono::milliseconds msec) = 0;

    // vIndex: 3
    virtual void flushPendingEvents() = 0;

    // vIndex: 4
    virtual void clear() = 0;

    // vIndex: 5
    virtual uint64 erase(class Bedrock::PubSub::RawSubscription& subscription) = 0;

    // vIndex: 6
    virtual uint64 size() const = 0;

    // vIndex: 7
    virtual bool empty() const = 0;

    // vIndex: 8
    virtual ::Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const = 0;

    // vIndex: 9
    virtual void _join(class Bedrock::PubSub::DeferredSubscription&& subscription) = 0;

    // vIndex: 10
    virtual void
    _enqueue(std::function<void()> fn, ::Bedrock::PubSub::ConnectPosition at, std::optional<int> group) = 0;

    MCAPI static std::unique_ptr<class Bedrock::PubSub::DeferredSubscriptionHub> makePriorityHub();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
