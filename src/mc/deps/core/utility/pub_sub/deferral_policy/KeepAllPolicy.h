#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::DeferralPolicy {

class KeepAllPolicy {
public:
    // prevent constructor by default
    KeepAllPolicy& operator=(KeepAllPolicy const&);
    KeepAllPolicy(KeepAllPolicy const&);
    KeepAllPolicy();
};

} // namespace Bedrock::PubSub::DeferralPolicy
