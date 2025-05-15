#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventProbeResultSuccess {
public:
    // prevent constructor by default
    RtcEventProbeResultSuccess();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventProbeResultSuccess(int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
