#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateAllocationLimits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7bd4b4;
    ::ll::UntypedStorage<8, 8> mUnk1a1544;
    ::ll::UntypedStorage<8, 8> mUnk789a87;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateAllocationLimits& operator=(BitrateAllocationLimits const&);
    BitrateAllocationLimits(BitrateAllocationLimits const&);
    BitrateAllocationLimits();

};

}
