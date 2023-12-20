#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCDtlsTransportState {
public:
    // prevent constructor by default
    RTCDtlsTransportState& operator=(RTCDtlsTransportState const&);
    RTCDtlsTransportState(RTCDtlsTransportState const&);
    RTCDtlsTransportState();

public:
    // NOLINTBEGIN
    // symbol: ?kClosed@RTCDtlsTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kClosed;

    // symbol: ?kConnected@RTCDtlsTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kConnected;

    // symbol: ?kConnecting@RTCDtlsTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kConnecting;

    // symbol: ?kFailed@RTCDtlsTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kFailed;

    // symbol: ?kNew@RTCDtlsTransportState@webrtc@@2QEBDEB
    MCAPI static char const* const kNew;

    // NOLINTEND
};

}; // namespace webrtc
