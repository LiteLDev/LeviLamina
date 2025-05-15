#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventAlrState {
public:
    // prevent constructor by default
    RtcEventAlrState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RtcEventAlrState(bool);
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
