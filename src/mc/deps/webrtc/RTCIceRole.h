#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCIceRole {
public:
    // prevent constructor by default
    RTCIceRole& operator=(RTCIceRole const&);
    RTCIceRole(RTCIceRole const&);
    RTCIceRole();

public:
    // NOLINTBEGIN
    // symbol: ?kControlled@RTCIceRole@webrtc@@2QEBDEB
    MCAPI static char const* const kControlled;

    // symbol: ?kControlling@RTCIceRole@webrtc@@2QEBDEB
    MCAPI static char const* const kControlling;

    // symbol: ?kUnknown@RTCIceRole@webrtc@@2QEBDEB
    MCAPI static char const* const kUnknown;

    // NOLINTEND
};

}; // namespace webrtc
