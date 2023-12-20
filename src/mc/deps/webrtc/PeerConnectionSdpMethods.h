#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class PeerConnectionSdpMethods {
public:
    // prevent constructor by default
    PeerConnectionSdpMethods& operator=(PeerConnectionSdpMethods const&);
    PeerConnectionSdpMethods(PeerConnectionSdpMethods const&);
    PeerConnectionSdpMethods();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PeerConnectionSdpMethods@webrtc@@UEAA@XZ
    virtual ~PeerConnectionSdpMethods() = default;

    // NOLINTEND
};

}; // namespace webrtc
