#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCNetworkType {
public:
    // prevent constructor by default
    RTCNetworkType& operator=(RTCNetworkType const&);
    RTCNetworkType(RTCNetworkType const&);
    RTCNetworkType();

public:
    // NOLINTBEGIN
    // symbol: ?kBluetooth@RTCNetworkType@webrtc@@2QEBDEB
    MCAPI static char const* const kBluetooth;

    // symbol: ?kCellular@RTCNetworkType@webrtc@@2QEBDEB
    MCAPI static char const* const kCellular;

    // symbol: ?kEthernet@RTCNetworkType@webrtc@@2QEBDEB
    MCAPI static char const* const kEthernet;

    // symbol: ?kUnknown@RTCNetworkType@webrtc@@2QEBDEB
    MCAPI static char const* const kUnknown;

    // symbol: ?kVpn@RTCNetworkType@webrtc@@2QEBDEB
    MCAPI static char const* const kVpn;

    // symbol: ?kWifi@RTCNetworkType@webrtc@@2QEBDEB
    MCAPI static char const* const kWifi;

    // symbol: ?kWimax@RTCNetworkType@webrtc@@2QEBDEB
    MCAPI static char const* const kWimax;

    // NOLINTEND
};

}; // namespace webrtc
