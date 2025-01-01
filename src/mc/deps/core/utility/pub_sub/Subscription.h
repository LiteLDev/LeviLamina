#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

namespace Bedrock::PubSub {

class Subscription : public ::Bedrock::PubSub::SubscriptionBase {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Subscription& operator=(::Bedrock::PubSub::Subscription&& conn);

    MCAPI ~Subscription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
