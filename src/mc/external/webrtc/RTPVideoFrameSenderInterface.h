#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTPVideoFrameSenderInterface {
public:
    // prevent constructor by default
    RTPVideoFrameSenderInterface& operator=(RTPVideoFrameSenderInterface const&);
    RTPVideoFrameSenderInterface(RTPVideoFrameSenderInterface const&);
    RTPVideoFrameSenderInterface();
};

} // namespace webrtc
