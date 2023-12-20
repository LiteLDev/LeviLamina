#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NetworkStatePredictor {
public:
    // prevent constructor by default
    NetworkStatePredictor& operator=(NetworkStatePredictor const&);
    NetworkStatePredictor(NetworkStatePredictor const&);
    NetworkStatePredictor();
};

}; // namespace webrtc
