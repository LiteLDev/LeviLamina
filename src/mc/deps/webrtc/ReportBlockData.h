#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RTCPReportBlock; }
// clang-format on

namespace webrtc {

class ReportBlockData {
public:
    // prevent constructor by default
    ReportBlockData& operator=(ReportBlockData const&);
    ReportBlockData(ReportBlockData const&);

public:
    // NOLINTBEGIN
    // symbol: ?AddRoundTripTimeSample@ReportBlockData@webrtc@@QEAAX_J@Z
    MCAPI void AddRoundTripTimeSample(int64);

    // symbol: ??0ReportBlockData@webrtc@@QEAA@XZ
    MCAPI ReportBlockData();

    // symbol: ?SetReportBlock@ReportBlockData@webrtc@@QEAAXURTCPReportBlock@2@_J@Z
    MCAPI void SetReportBlock(struct webrtc::RTCPReportBlock, int64);

    // NOLINTEND
};

}; // namespace webrtc
