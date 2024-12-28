#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::DeferralPolicy {

class ExecuteImmediatelyPolicy {
public:
    // prevent constructor by default
    ExecuteImmediatelyPolicy& operator=(ExecuteImmediatelyPolicy const&);
    ExecuteImmediatelyPolicy(ExecuteImmediatelyPolicy const&);
    ExecuteImmediatelyPolicy();
};

} // namespace Bedrock::PubSub::DeferralPolicy
