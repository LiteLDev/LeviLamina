#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NetworkControllerInterface {
public:
    // prevent constructor by default
    NetworkControllerInterface& operator=(NetworkControllerInterface const&);
    NetworkControllerInterface(NetworkControllerInterface const&);
    NetworkControllerInterface();
};

}; // namespace webrtc
