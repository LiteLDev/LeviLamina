#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IceTransportInit {
public:
    // prevent constructor by default
    IceTransportInit& operator=(IceTransportInit const&);
    IceTransportInit(IceTransportInit const&);
    IceTransportInit();
};

}; // namespace webrtc
