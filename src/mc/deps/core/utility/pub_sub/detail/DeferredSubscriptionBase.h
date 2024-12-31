#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/detail/SubscriptionBodyBase.h"

namespace Bedrock::PubSub {

class DeferredSubscriptionBase : public ::Bedrock::PubSub::Detail::SubscriptionBodyBase {
public:
    // prevent constructor by default
    DeferredSubscriptionBase& operator=(DeferredSubscriptionBase const&);
    DeferredSubscriptionBase(DeferredSubscriptionBase const&);
    DeferredSubscriptionBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual uint64 runDeferredEvents(uint64) = 0;

    // vIndex: 2
    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds) = 0;

    // vIndex: 3
    virtual ::Bedrock::PubSub::DeferralType getDeferralType() const = 0;

    // vIndex: 0
    virtual ~DeferredSubscriptionBase() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::PubSub
