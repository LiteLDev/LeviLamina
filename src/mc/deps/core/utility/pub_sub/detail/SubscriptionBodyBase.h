#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class SubscriptionContext; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class SubscriptionBodyBase {
public:
    // prevent constructor by default
    SubscriptionBodyBase& operator=(SubscriptionBodyBase const&);
    SubscriptionBodyBase(SubscriptionBodyBase const&);
    SubscriptionBodyBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubscriptionBodyBase();

    MCAPI explicit SubscriptionBodyBase(std::unique_ptr<class Bedrock::PubSub::SubscriptionContext>&& context);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _disconnect();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::unique_ptr<class Bedrock::PubSub::SubscriptionContext>&& context);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
