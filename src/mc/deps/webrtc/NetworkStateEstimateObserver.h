#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NetworkStateEstimateObserver {
public:
    // prevent constructor by default
    NetworkStateEstimateObserver& operator=(NetworkStateEstimateObserver const&);
    NetworkStateEstimateObserver(NetworkStateEstimateObserver const&);
    NetworkStateEstimateObserver();
};

}; // namespace webrtc
