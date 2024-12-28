#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::DeferralPolicy {

class KeepLatestPolicy {
public:
    // prevent constructor by default
    KeepLatestPolicy& operator=(KeepLatestPolicy const&);
    KeepLatestPolicy(KeepLatestPolicy const&);
    KeepLatestPolicy();
};

} // namespace Bedrock::PubSub::DeferralPolicy
