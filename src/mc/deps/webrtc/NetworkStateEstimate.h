#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkStateEstimate {
public:
    // prevent constructor by default
    NetworkStateEstimate& operator=(NetworkStateEstimate const&);
    NetworkStateEstimate(NetworkStateEstimate const&);
    NetworkStateEstimate();
};

}; // namespace webrtc
