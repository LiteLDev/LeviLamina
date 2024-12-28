#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

class SubscriptionService {
public:
    // prevent constructor by default
    SubscriptionService& operator=(SubscriptionService const&);
    SubscriptionService(SubscriptionService const&);
    SubscriptionService();
};

} // namespace Realms
