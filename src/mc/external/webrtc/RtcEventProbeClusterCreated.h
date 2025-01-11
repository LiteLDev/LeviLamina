#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventProbeClusterCreated {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcEventProbeClusterCreated(int, int, uint, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int, int, uint, uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
