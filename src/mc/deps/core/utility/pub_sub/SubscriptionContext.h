#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionContext {
public:
    // prevent constructor by default
    SubscriptionContext& operator=(SubscriptionContext const&);
    SubscriptionContext(SubscriptionContext const&);
    SubscriptionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubscriptionContext() = default;

    // vIndex: 1
    virtual void to_string(::std::string&) = 0;
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
