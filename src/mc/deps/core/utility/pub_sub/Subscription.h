#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class Subscription {
public:
    // prevent constructor by default
    Subscription& operator=(Subscription const&);
    Subscription(Subscription const&);
    Subscription();

public:
    // NOLINTBEGIN
    MCAPI class Bedrock::PubSub::Subscription& operator=(class Bedrock::PubSub::Subscription&&);

    MCAPI ~Subscription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub
