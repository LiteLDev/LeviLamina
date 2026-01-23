#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/utility/pub_sub/ConnectPosition.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/deferred/SubscriptionBody.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
// clang-format on

namespace Bedrock::PubSub::DeferralPolicy {

class HubPolicy {
public:
    // HubPolicy inner types declare
    // clang-format off
    template<typename T0> class SubscriptionBodyImpl;
    // clang-format on

    // HubPolicy inner types define
    template <typename T0>
    class SubscriptionBodyImpl {};

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _enqueue(
        ::Bedrock::PubSub::DeferredSubscriptionHub& hub,
        ::std::function<void()>                     fn,
        ::Bedrock::PubSub::ConnectPosition          at,
        ::std::optional<int>                        group
    );
    // NOLINTEND
};

} // namespace Bedrock::PubSub::DeferralPolicy
