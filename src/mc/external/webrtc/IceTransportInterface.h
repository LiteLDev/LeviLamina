#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IceTransportInterface {
public:
    // prevent constructor by default
    IceTransportInterface& operator=(IceTransportInterface const&);
    IceTransportInterface(IceTransportInterface const&);
    IceTransportInterface();
};

} // namespace webrtc
