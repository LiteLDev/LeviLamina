#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct SubscriptionInfo {
public:
    // prevent constructor by default
    SubscriptionInfo& operator=(SubscriptionInfo const&);
    SubscriptionInfo(SubscriptionInfo const&);
    SubscriptionInfo();
};

} // namespace Realms
