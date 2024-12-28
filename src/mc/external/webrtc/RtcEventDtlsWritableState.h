#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventDtlsWritableState {
public:
    // prevent constructor by default
    RtcEventDtlsWritableState& operator=(RtcEventDtlsWritableState const&);
    RtcEventDtlsWritableState(RtcEventDtlsWritableState const&);
    RtcEventDtlsWritableState();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RtcEventDtlsWritableState(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
