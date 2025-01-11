#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventProbeResultSuccess {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcEventProbeResultSuccess(int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
