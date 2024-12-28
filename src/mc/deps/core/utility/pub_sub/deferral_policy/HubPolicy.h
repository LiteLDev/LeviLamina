#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::DeferralPolicy {

class HubPolicy {
public:
    // prevent constructor by default
    HubPolicy& operator=(HubPolicy const&);
    HubPolicy(HubPolicy const&);
    HubPolicy();
};

} // namespace Bedrock::PubSub::DeferralPolicy
