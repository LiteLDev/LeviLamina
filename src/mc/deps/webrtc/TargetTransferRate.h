#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TargetTransferRate {
public:
    // prevent constructor by default
    TargetTransferRate& operator=(TargetTransferRate const&);
    TargetTransferRate(TargetTransferRate const&);
    TargetTransferRate();
};

}; // namespace webrtc
