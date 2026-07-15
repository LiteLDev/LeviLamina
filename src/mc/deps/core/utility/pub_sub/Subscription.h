#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"

namespace Bedrock::PubSub {

class Subscription : public ::Bedrock::PubSub::SubscriptionBase {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Subscription& operator=(Subscription const&);
    Subscription(Subscription const&);
    Subscription();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::PubSub::Subscription& operator=(::Bedrock::PubSub::Subscription&& conn);
#endif

    MCAPI ~Subscription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
