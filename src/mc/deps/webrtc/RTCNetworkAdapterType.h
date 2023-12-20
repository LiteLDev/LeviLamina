#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCNetworkAdapterType {
public:
    // prevent constructor by default
    RTCNetworkAdapterType& operator=(RTCNetworkAdapterType const&);
    RTCNetworkAdapterType(RTCNetworkAdapterType const&);
    RTCNetworkAdapterType();

public:
    // NOLINTBEGIN
    // symbol: ?kAny@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kAny[];

    // symbol: ?kCellular2g@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kCellular2g[];

    // symbol: ?kCellular3g@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kCellular3g[];

    // symbol: ?kCellular4g@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kCellular4g[];

    // symbol: ?kCellular5g@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kCellular5g[];

    // symbol: ?kCellular@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kCellular[];

    // symbol: ?kEthernet@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kEthernet[];

    // symbol: ?kLoopback@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kLoopback[];

    // symbol: ?kUnknown@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kUnknown[];

    // symbol: ?kWifi@RTCNetworkAdapterType@webrtc@@2QBDB
    MCAPI static char const kWifi[];

    // NOLINTEND
};

}; // namespace webrtc
