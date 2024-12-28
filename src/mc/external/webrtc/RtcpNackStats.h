#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtcpNackStats {
public:
    // prevent constructor by default
    RtcpNackStats& operator=(RtcpNackStats const&);
    RtcpNackStats(RtcpNackStats const&);

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
