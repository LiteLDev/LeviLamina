#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class PeerConnectionInternal {
public:
    // prevent constructor by default
    PeerConnectionInternal& operator=(PeerConnectionInternal const&);
    PeerConnectionInternal(PeerConnectionInternal const&);
    PeerConnectionInternal();
};

} // namespace webrtc
