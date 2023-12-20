#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCIceTransportState {
public:
    // prevent constructor by default
    RTCIceTransportState& operator=(RTCIceTransportState const&);
    RTCIceTransportState(RTCIceTransportState const&);
    RTCIceTransportState();

public:
    // NOLINTBEGIN
    // symbol: ?kChecking@RTCIceTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kChecking;

    // symbol: ?kClosed@RTCIceTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kClosed;

    // symbol: ?kCompleted@RTCIceTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kCompleted;

    // symbol: ?kConnected@RTCIceTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kConnected;

    // symbol: ?kDisconnected@RTCIceTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kDisconnected;

    // symbol: ?kFailed@RTCIceTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kFailed;

    // symbol: ?kNew@RTCIceTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kNew;

    // NOLINTEND
};

}; // namespace webrtc
