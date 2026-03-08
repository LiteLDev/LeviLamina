#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

namespace Bedrock::PubSub {

class Subscription : public ::Bedrock::PubSub::SubscriptionBase {
public:
    // prevent constructor by default
    Subscription& operator=(Subscription const&);
    Subscription(Subscription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Subscription();

    MCAPI ::Bedrock::PubSub::Subscription& operator=(::Bedrock::PubSub::Subscription&& conn);

    MCAPI ~Subscription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
