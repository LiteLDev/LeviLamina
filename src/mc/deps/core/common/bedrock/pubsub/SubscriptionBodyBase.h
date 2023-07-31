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
    SubscriptionBodyBase& operator=(SubscriptionBodyBase const&) = delete;
    SubscriptionBodyBase(SubscriptionBodyBase const&)            = delete;
    SubscriptionBodyBase()                                       = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_PUBSUB_DETAIL_SUBSCRIPTIONBODYBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SubscriptionBodyBase();
#endif
    /**
     * @symbol
     * ??0SubscriptionBodyBase\@Detail\@PubSub\@Bedrock\@\@QEAA\@$$QEAV?$unique_ptr\@VSubscriptionContext\@PubSub\@Bedrock\@\@U?$default_delete\@VSubscriptionContext\@PubSub\@Bedrock\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI SubscriptionBodyBase(std::unique_ptr<class Bedrock::PubSub::SubscriptionContext>&&);
    /**
     * @symbol
     * ?getStrongSelf\@SubscriptionBodyBase\@Detail\@PubSub\@Bedrock\@\@QEAAAEAV?$shared_ptr\@VSubscriptionBodyBase\@Detail\@PubSub\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI std::shared_ptr<class Bedrock::PubSub::Detail::SubscriptionBodyBase>& getStrongSelf();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_disconnect\@SubscriptionBodyBase\@Detail\@PubSub\@Bedrock\@\@AEAAXXZ
     */
    MCAPI void _disconnect();
    // NOLINTEND
};

}; // namespace Bedrock::PubSub::Detail
