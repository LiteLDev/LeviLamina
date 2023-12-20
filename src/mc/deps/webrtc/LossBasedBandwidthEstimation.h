#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class LossBasedBandwidthEstimation {
public:
    // prevent constructor by default
    LossBasedBandwidthEstimation& operator=(LossBasedBandwidthEstimation const&);
    LossBasedBandwidthEstimation(LossBasedBandwidthEstimation const&);
    LossBasedBandwidthEstimation();

public:
    // NOLINTBEGIN
    // symbol: ?Initialize@LossBasedBandwidthEstimation@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void Initialize(class webrtc::DataRate);

    // symbol: ??0LossBasedBandwidthEstimation@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit LossBasedBandwidthEstimation(class webrtc::FieldTrialsView const*);

    // symbol: ?Update@LossBasedBandwidthEstimation@webrtc@@QEAA?AVDataRate@2@VTimestamp@2@V32@1VTimeDelta@2@@Z
    MCAPI class webrtc::DataRate
        Update(class webrtc::Timestamp, class webrtc::DataRate, class webrtc::DataRate, class webrtc::TimeDelta);

    // symbol: ?UpdateAcknowledgedBitrate@LossBasedBandwidthEstimation@webrtc@@QEAAXVDataRate@2@VTimestamp@2@@Z
    MCAPI void UpdateAcknowledgedBitrate(class webrtc::DataRate, class webrtc::Timestamp);

    // symbol:
    // ?UpdateLossStatistics@LossBasedBandwidthEstimation@webrtc@@QEAAXAEBV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@VTimestamp@2@@Z
    MCAPI void UpdateLossStatistics(std::vector<struct webrtc::PacketResult> const&, class webrtc::Timestamp);

    // symbol: ??1LossBasedBandwidthEstimation@webrtc@@QEAA@XZ
    MCAPI ~LossBasedBandwidthEstimation();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?decreased_bitrate@LossBasedBandwidthEstimation@webrtc@@AEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate decreased_bitrate() const;

    // symbol: ?loss_decrease_threshold@LossBasedBandwidthEstimation@webrtc@@AEBANXZ
    MCAPI double loss_decrease_threshold() const;

    // symbol: ?loss_increase_threshold@LossBasedBandwidthEstimation@webrtc@@AEBANXZ
    MCAPI double loss_increase_threshold() const;

    // symbol: ?loss_reset_threshold@LossBasedBandwidthEstimation@webrtc@@AEBANXZ
    MCAPI double loss_reset_threshold() const;

    // NOLINTEND
};

}; // namespace webrtc
