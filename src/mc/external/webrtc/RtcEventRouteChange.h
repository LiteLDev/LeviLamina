#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventRouteChange {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventRouteChange(bool, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
