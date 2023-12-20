#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateAllocationUpdate {
public:
    // prevent constructor by default
    BitrateAllocationUpdate& operator=(BitrateAllocationUpdate const&);
    BitrateAllocationUpdate(BitrateAllocationUpdate const&);
    BitrateAllocationUpdate();
};

}; // namespace webrtc
