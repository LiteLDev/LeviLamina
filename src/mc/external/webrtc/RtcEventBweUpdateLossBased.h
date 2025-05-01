#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventBweUpdateLossBased {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventBweUpdateLossBased(int, uchar, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, uchar, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
