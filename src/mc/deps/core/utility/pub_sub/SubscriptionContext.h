#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubscriptionContext() = default;

    virtual void to_string(::std::string&) = 0;
    // NOLINTEND
};

} // namespace Bedrock::PubSub
