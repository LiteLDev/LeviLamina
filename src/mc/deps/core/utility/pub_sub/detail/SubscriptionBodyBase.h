#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/pub_sub/SubscriptionContext.h"
#include "mc/deps/core/utility/pub_sub/detail/PublisherDisconnector.h"

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

    SubscriptionBodyBase* mNext; // this+0x0
    SubscriptionBodyBase* mPrev; // this+0x8

    std::shared_ptr<SubscriptionBodyBase>                 mStrongSelf;   // this+0x18
    PublisherDisconnector*                                mDisconnector; // this+0x28
    std::unique_ptr<Bedrock::PubSub::SubscriptionContext> mContext;      // this+0x30
    int                                                   mGroup;        // this+0x38
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
