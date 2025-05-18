#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventDtlsWritableState {
public:
    // prevent constructor by default
    RtcEventDtlsWritableState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RtcEventDtlsWritableState(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
