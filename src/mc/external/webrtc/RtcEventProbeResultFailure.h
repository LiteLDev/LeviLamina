#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ProbeFailureReason.h"

namespace webrtc {

class RtcEventProbeResultFailure {
public:
    // prevent constructor by default
    RtcEventProbeResultFailure& operator=(RtcEventProbeResultFailure const&);
    RtcEventProbeResultFailure(RtcEventProbeResultFailure const&);
    RtcEventProbeResultFailure();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcEventProbeResultFailure(int, ::webrtc::ProbeFailureReason);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int, ::webrtc::ProbeFailureReason);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
