#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/deferred/SubscriptionBody.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class SpinLockImpl;
// clang-format on

namespace Bedrock::PubSub::DeferralPolicy {

class KeepLatestPolicy {
public:
    // KeepLatestPolicy inner types declare
    // clang-format off
    template<typename T0> class SubscriptionBodyImpl;
    // clang-format on

    // KeepLatestPolicy inner types define
    template <typename T0>
    class SubscriptionBodyImpl {};
};

} // namespace Bedrock::PubSub::DeferralPolicy
