#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHubBase : public ::Bedrock::PubSub::DeferredSubscriptionHub {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb58fe3;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredSubscriptionHubBase& operator=(DeferredSubscriptionHubBase const&);
    DeferredSubscriptionHubBase(DeferredSubscriptionHubBase const&);
    DeferredSubscriptionHubBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeferredSubscriptionHubBase() /*override*/;

    // vIndex: 1
    virtual uint64 runDeferredEvents(uint64 maxToRun) /*override*/;

    // vIndex: 2
    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds msec) /*override*/;

    // vIndex: 4
    virtual void clear() /*override*/;

    // vIndex: 5
    virtual uint64 erase(::Bedrock::PubSub::RawSubscription& subscription) /*override*/;

    // vIndex: 6
    virtual uint64 size() const /*override*/;

    // vIndex: 7
    virtual bool empty() const /*override*/;

    // vIndex: 9
    virtual void _join(::Bedrock::PubSub::DeferredSubscription&& subscription) /*override*/;

    // vIndex: 11
    virtual bool _runOneEvent() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $runDeferredEvents(uint64 maxToRun);

    MCAPI uint64 $runDeferredEventsForDuration(::std::chrono::milliseconds msec);

    MCAPI void $clear();

    MCAPI uint64 $erase(::Bedrock::PubSub::RawSubscription& subscription);

    MCAPI uint64 $size() const;

    MCAPI bool $empty() const;

    MCAPI void $_join(::Bedrock::PubSub::DeferredSubscription&& subscription);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
