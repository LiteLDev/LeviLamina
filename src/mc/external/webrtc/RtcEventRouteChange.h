#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventRouteChange {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcEventRouteChange(bool, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool, uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
