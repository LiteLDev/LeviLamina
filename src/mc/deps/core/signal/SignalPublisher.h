#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::Detail {

class SignalPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignalPublisher() = default;

    virtual void send(void const*) = 0;

    virtual ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)>
    getConnectOp(::std::function<void(void const*)>&&) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::unique_ptr<::Bedrock::Detail::SignalPublisher>
    makePublisher(bool isWrapped, uint64 unwrappedSize);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Detail
