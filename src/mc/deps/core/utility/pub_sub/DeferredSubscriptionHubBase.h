#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHubBase : public ::Bedrock::PubSub::DeferredSubscriptionHub {
public:
    // prevent constructor by default
    DeferredSubscriptionHubBase& operator=(DeferredSubscriptionHubBase const&);
    DeferredSubscriptionHubBase(DeferredSubscriptionHubBase const&);
    DeferredSubscriptionHubBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeferredSubscriptionHubBase();

    // vIndex: 1
    virtual uint64 runDeferredEvents(uint64 maxToRun);

    // vIndex: 2
    virtual uint64 runDeferredEventsForDuration(std::chrono::milliseconds msec);

    // vIndex: 4
    virtual void clear();

    // vIndex: 5
    virtual uint64 erase(class Bedrock::PubSub::RawSubscription& subscription);

    // vIndex: 6
    virtual uint64 size() const;

    // vIndex: 7
    virtual bool empty() const;

    // vIndex: 9
    virtual void _join(class Bedrock::PubSub::DeferredSubscription&& subscription);

    // vIndex: 11
    virtual bool _runOneEvent() = 0;

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
