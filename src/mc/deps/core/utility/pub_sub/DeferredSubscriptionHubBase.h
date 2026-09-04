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
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::DeferredSubscription>> mSubscriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredSubscriptionHubBase() /*override*/;

    virtual uint64 runDeferredEvents(uint64 maxToRun) /*override*/;

    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds msec) /*override*/;

    virtual void clear() /*override*/;

    virtual uint64 erase(::Bedrock::PubSub::RawSubscription& subscription) /*override*/;

    virtual uint64 size() const /*override*/;

    virtual bool empty() const /*override*/;

    virtual void _join(::Bedrock::PubSub::DeferredSubscription&& subscription) /*override*/;

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

#ifdef LL_PLAT_S
    MCAPI bool $empty() const;
#else // LL_PLAT_C
    MCFOLD bool $empty() const;
#endif

    MCAPI void $_join(::Bedrock::PubSub::DeferredSubscription&& subscription);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
