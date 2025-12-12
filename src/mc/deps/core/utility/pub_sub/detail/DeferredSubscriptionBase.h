#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/detail/SubscriptionBodyBase.h"

namespace Bedrock::PubSub {

class DeferredSubscriptionBase : public ::Bedrock::PubSub::Detail::SubscriptionBodyBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint64 runDeferredEvents(uint64) = 0;

    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds) = 0;

    virtual ::Bedrock::PubSub::DeferralType getDeferralType() const = 0;

    virtual ~DeferredSubscriptionBase() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::PubSub
