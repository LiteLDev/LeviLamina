#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NetworkStatePredictorFactoryInterface {
public:
    // prevent constructor by default
    NetworkStatePredictorFactoryInterface& operator=(NetworkStatePredictorFactoryInterface const&);
    NetworkStatePredictorFactoryInterface(NetworkStatePredictorFactoryInterface const&);
    NetworkStatePredictorFactoryInterface();
};

}; // namespace webrtc
