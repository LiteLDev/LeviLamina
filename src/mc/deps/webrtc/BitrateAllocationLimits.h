#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateAllocationLimits {
public:
    // prevent constructor by default
    BitrateAllocationLimits& operator=(BitrateAllocationLimits const&);
    BitrateAllocationLimits(BitrateAllocationLimits const&);
    BitrateAllocationLimits();
};

}; // namespace webrtc
