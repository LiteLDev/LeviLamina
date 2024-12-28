#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class HandoverReadinessStatus {
public:
    // prevent constructor by default
    HandoverReadinessStatus& operator=(HandoverReadinessStatus const&);
    HandoverReadinessStatus(HandoverReadinessStatus const&);
    HandoverReadinessStatus();
};

} // namespace dcsctp
