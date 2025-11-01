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
    // vIndex: 0
    virtual ~SignalPublisher() = default;

    // vIndex: 1
    virtual void send(void const*) = 0;

    // vIndex: 2
    virtual ::std::function<::Bedrock::PubSub::RawSubscription(::Bedrock::PubSub::DeferredSubscriptionHub&, int)> getConnectOp(::std::function<void(void const*)>&&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
