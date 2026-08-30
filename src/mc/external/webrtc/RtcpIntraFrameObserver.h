#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpIntraFrameObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpIntraFrameObserver();

    virtual void OnReceivedIntraFrameRequest(uint) = 0;
    // NOLINTEND
};

} // namespace webrtc
