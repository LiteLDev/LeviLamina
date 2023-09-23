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
    // symbol: ??1SubscriptionBodyBase@Detail@PubSub@Bedrock@@UEAA@XZ
    MCVAPI ~SubscriptionBodyBase();

    // symbol:
    // ??0SubscriptionBodyBase@Detail@PubSub@Bedrock@@QEAA@$$QEAV?$unique_ptr@VSubscriptionContext@PubSub@Bedrock@@U?$default_delete@VSubscriptionContext@PubSub@Bedrock@@@std@@@std@@@Z
    MCAPI explicit SubscriptionBodyBase(std::unique_ptr<class Bedrock::PubSub::SubscriptionContext>&&);

    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
