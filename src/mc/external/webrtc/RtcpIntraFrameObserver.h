#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpIntraFrameObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcpIntraFrameObserver() = default;

    // vIndex: 1
    virtual void OnReceivedIntraFrameRequest(uint) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
