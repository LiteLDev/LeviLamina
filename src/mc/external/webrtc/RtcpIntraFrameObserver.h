#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpIntraFrameObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpIntraFrameObserver() = default;

    virtual void OnReceivedIntraFrameRequest(uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
