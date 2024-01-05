#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/pubsub/PublisherDisconnector.h"
#include "mc/deps/core/common/bedrock/pubsub/SubscriptionContext.h"

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
    // vIndex: 0, symbol: ??1SubscriptionBodyBase@Detail@PubSub@Bedrock@@UEAA@XZ
    virtual ~SubscriptionBodyBase();

    // symbol:
    // ??0SubscriptionBodyBase@Detail@PubSub@Bedrock@@QEAA@$$QEAV?$unique_ptr@VSubscriptionContext@PubSub@Bedrock@@U?$default_delete@VSubscriptionContext@PubSub@Bedrock@@@std@@@std@@@Z
    MCAPI explicit SubscriptionBodyBase(std::unique_ptr<class Bedrock::PubSub::SubscriptionContext>&& context);

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
