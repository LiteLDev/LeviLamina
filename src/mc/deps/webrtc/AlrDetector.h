#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { struct AlrDetectorConfig; }
// clang-format on

namespace webrtc {

class AlrDetector {
public:
    // prevent constructor by default
    AlrDetector& operator=(AlrDetector const&);
    AlrDetector(AlrDetector const&);
    AlrDetector();

public:
    // NOLINTBEGIN
    // symbol: ??0AlrDetector@webrtc@@QEAA@PEBVFieldTrialsView@1@PEAVRtcEventLog@1@@Z
    MCAPI AlrDetector(class webrtc::FieldTrialsView const*, class webrtc::RtcEventLog*);

    // symbol: ??0AlrDetector@webrtc@@QEAA@UAlrDetectorConfig@1@PEAVRtcEventLog@1@@Z
    MCAPI AlrDetector(struct webrtc::AlrDetectorConfig, class webrtc::RtcEventLog*);

    // symbol: ?GetApplicationLimitedRegionStartTime@AlrDetector@webrtc@@QEBA?AV?$optional@_J@std@@XZ
    MCAPI std::optional<int64> GetApplicationLimitedRegionStartTime() const;

    // symbol: ?OnBytesSent@AlrDetector@webrtc@@QEAAX_K_J@Z
    MCAPI void OnBytesSent(uint64, int64);

    // symbol: ?SetEstimatedBitrate@AlrDetector@webrtc@@QEAAXH@Z
    MCAPI void SetEstimatedBitrate(int);

    // symbol: ??1AlrDetector@webrtc@@QEAA@XZ
    MCAPI ~AlrDetector();

    // NOLINTEND
};

}; // namespace webrtc
