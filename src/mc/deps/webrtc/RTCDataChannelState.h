#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCDataChannelState {
public:
    // prevent constructor by default
    RTCDataChannelState& operator=(RTCDataChannelState const&);
    RTCDataChannelState(RTCDataChannelState const&);
    RTCDataChannelState();

public:
    // NOLINTBEGIN
    // symbol: ?kClosed@RTCDataChannelState@webrtc@@2QEBDEB
    MCAPI static char const* const kClosed;

    // symbol: ?kClosing@RTCDataChannelState@webrtc@@2QEBDEB
    MCAPI static char const* const kClosing;

    // symbol: ?kConnecting@RTCDataChannelState@webrtc@@2QEBDEB
    MCAPI static char const* const kConnecting;

    // symbol: ?kOpen@RTCDataChannelState@webrtc@@2QEBDEB
    MCAPI static char const* const kOpen;

    // NOLINTEND
};

}; // namespace webrtc
