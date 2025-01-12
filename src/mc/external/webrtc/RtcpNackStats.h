#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtcpNackStats {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ReportRequest(ushort);

    MCAPI RtcpNackStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
