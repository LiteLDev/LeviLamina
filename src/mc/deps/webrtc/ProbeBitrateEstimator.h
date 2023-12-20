#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class ProbeBitrateEstimator {
public:
    // prevent constructor by default
    ProbeBitrateEstimator& operator=(ProbeBitrateEstimator const&);
    ProbeBitrateEstimator(ProbeBitrateEstimator const&);
    ProbeBitrateEstimator();

public:
    // NOLINTBEGIN
    // symbol:
    // ?FetchAndResetLastEstimatedBitrate@ProbeBitrateEstimator@webrtc@@QEAA?AV?$optional@VDataRate@webrtc@@@std@@XZ
    MCAPI std::optional<class webrtc::DataRate> FetchAndResetLastEstimatedBitrate();

    // symbol:
    // ?HandleProbeAndEstimateBitrate@ProbeBitrateEstimator@webrtc@@QEAA?AV?$optional@VDataRate@webrtc@@@std@@AEBUPacketResult@2@@Z
    MCAPI std::optional<class webrtc::DataRate> HandleProbeAndEstimateBitrate(struct webrtc::PacketResult const&);

    // symbol: ??0ProbeBitrateEstimator@webrtc@@QEAA@PEAVRtcEventLog@1@@Z
    MCAPI explicit ProbeBitrateEstimator(class webrtc::RtcEventLog*);

    // symbol: ??1ProbeBitrateEstimator@webrtc@@QEAA@XZ
    MCAPI ~ProbeBitrateEstimator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?EraseOldClusters@ProbeBitrateEstimator@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void EraseOldClusters(class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
