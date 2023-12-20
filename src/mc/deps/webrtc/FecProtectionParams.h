#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct FecProtectionParams {
public:
    // prevent constructor by default
    FecProtectionParams& operator=(FecProtectionParams const&);
    FecProtectionParams(FecProtectionParams const&);
    FecProtectionParams();
};

}; // namespace webrtc
