#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpNackStats {
public:
    // prevent constructor by default
    RtcpNackStats& operator=(RtcpNackStats const&);
    RtcpNackStats(RtcpNackStats const&);

public:
    // NOLINTBEGIN
    // symbol: ?ReportRequest@RtcpNackStats@webrtc@@QEAAXG@Z
    MCAPI void ReportRequest(ushort);

    // symbol: ??0RtcpNackStats@webrtc@@QEAA@XZ
    MCAPI RtcpNackStats();

    // NOLINTEND
};

}; // namespace webrtc
