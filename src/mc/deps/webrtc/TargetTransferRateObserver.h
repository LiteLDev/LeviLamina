#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TargetTransferRateObserver {
public:
    // prevent constructor by default
    TargetTransferRateObserver& operator=(TargetTransferRateObserver const&);
    TargetTransferRateObserver(TargetTransferRateObserver const&);
    TargetTransferRateObserver();
};

}; // namespace webrtc
