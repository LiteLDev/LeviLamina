#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SendDataParams {
public:
    // prevent constructor by default
    SendDataParams& operator=(SendDataParams const&);
    SendDataParams(SendDataParams const&);
    SendDataParams();
};

}; // namespace webrtc
