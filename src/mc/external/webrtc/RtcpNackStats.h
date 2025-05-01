#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtcpNackStats {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ReportRequest(ushort);

    MCNAPI RtcpNackStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
