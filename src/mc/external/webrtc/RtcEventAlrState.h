#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventAlrState {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RtcEventAlrState(bool);
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
