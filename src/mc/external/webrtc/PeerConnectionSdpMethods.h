#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class PeerConnectionSdpMethods {
public:
    // prevent constructor by default
    PeerConnectionSdpMethods& operator=(PeerConnectionSdpMethods const&);
    PeerConnectionSdpMethods(PeerConnectionSdpMethods const&);
    PeerConnectionSdpMethods();
};

} // namespace webrtc
