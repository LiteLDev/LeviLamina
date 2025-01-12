#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionContext {
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
