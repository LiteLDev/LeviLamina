#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct SubscriptionService {
public:
    // SubscriptionService inner types declare
    // clang-format off
    struct CachedSubscription;
    struct SubscriptionQuery;
    // clang-format on

    // SubscriptionService inner types define
    enum class SubscriptionQueryStatus : int {};

    struct CachedSubscription {};

    struct SubscriptionQuery {};
};

} // namespace Realms
