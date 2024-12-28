#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpIntraFrameObserver {
public:
    // prevent constructor by default
    RtcpIntraFrameObserver& operator=(RtcpIntraFrameObserver const&);
    RtcpIntraFrameObserver(RtcpIntraFrameObserver const&);
    RtcpIntraFrameObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcpIntraFrameObserver();

    // vIndex: 1
    virtual void OnReceivedIntraFrameRequest(uint) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
