#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/BandwidthUsage.h"
#include "mc/deps/webrtc/LossBasedState.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct SentPacket; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class SendSideBandwidthEstimation {
public:
    // prevent constructor by default
    SendSideBandwidthEstimation& operator=(SendSideBandwidthEstimation const&);
    SendSideBandwidthEstimation(SendSideBandwidthEstimation const&);
    SendSideBandwidthEstimation();

public:
    // NOLINTBEGIN
    // symbol: ?GetEstimatedLinkCapacity@SendSideBandwidthEstimation@webrtc@@QEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate GetEstimatedLinkCapacity() const;

    // symbol: ?GetMinBitrate@SendSideBandwidthEstimation@webrtc@@QEBAHXZ
    MCAPI int GetMinBitrate() const;

    // symbol: ?OnRouteChange@SendSideBandwidthEstimation@webrtc@@QEAAXXZ
    MCAPI void OnRouteChange();

    // symbol: ?OnSentPacket@SendSideBandwidthEstimation@webrtc@@QEAAXAEBUSentPacket@2@@Z
    MCAPI void OnSentPacket(struct webrtc::SentPacket const&);

    // symbol: ??0SendSideBandwidthEstimation@webrtc@@QEAA@PEBVFieldTrialsView@1@PEAVRtcEventLog@1@@Z
    MCAPI SendSideBandwidthEstimation(class webrtc::FieldTrialsView const*, class webrtc::RtcEventLog*);

    // symbol:
    // ?SetAcknowledgedRate@SendSideBandwidthEstimation@webrtc@@QEAAXV?$optional@VDataRate@webrtc@@@std@@VTimestamp@2@@Z
    MCAPI void SetAcknowledgedRate(std::optional<class webrtc::DataRate>, class webrtc::Timestamp);

    // symbol:
    // ?SetBitrates@SendSideBandwidthEstimation@webrtc@@QEAAXV?$optional@VDataRate@webrtc@@@std@@VDataRate@2@1VTimestamp@2@@Z
    MCAPI void SetBitrates(
        std::optional<class webrtc::DataRate>,
        class webrtc::DataRate,
        class webrtc::DataRate,
        class webrtc::Timestamp
    );

    // symbol: ?SetMinMaxBitrate@SendSideBandwidthEstimation@webrtc@@QEAAXVDataRate@2@0@Z
    MCAPI void SetMinMaxBitrate(class webrtc::DataRate, class webrtc::DataRate);

    // symbol: ?SetSendBitrate@SendSideBandwidthEstimation@webrtc@@QEAAXVDataRate@2@VTimestamp@2@@Z
    MCAPI void SetSendBitrate(class webrtc::DataRate, class webrtc::Timestamp);

    // symbol: ?UpdateDelayBasedEstimate@SendSideBandwidthEstimation@webrtc@@QEAAXVTimestamp@2@VDataRate@2@@Z
    MCAPI void UpdateDelayBasedEstimate(class webrtc::Timestamp, class webrtc::DataRate);

    // symbol: ?UpdateEstimate@SendSideBandwidthEstimation@webrtc@@QEAAXVTimestamp@2@@Z
    MCAPI void UpdateEstimate(class webrtc::Timestamp);

    // symbol:
    // ?UpdateLossBasedEstimator@SendSideBandwidthEstimation@webrtc@@QEAAXAEBUTransportPacketsFeedback@2@W4BandwidthUsage@2@V?$optional@VDataRate@webrtc@@@std@@VDataRate@2@@Z
    MCAPI void UpdateLossBasedEstimator(
        struct webrtc::TransportPacketsFeedback const&,
        ::webrtc::BandwidthUsage,
        std::optional<class webrtc::DataRate>,
        class webrtc::DataRate
    );

    // symbol: ?UpdatePacketsLost@SendSideBandwidthEstimation@webrtc@@QEAAX_J0VTimestamp@2@@Z
    MCAPI void UpdatePacketsLost(int64, int64, class webrtc::Timestamp);

    // symbol: ?UpdatePropagationRtt@SendSideBandwidthEstimation@webrtc@@QEAAXVTimestamp@2@VTimeDelta@2@@Z
    MCAPI void UpdatePropagationRtt(class webrtc::Timestamp, class webrtc::TimeDelta);

    // symbol: ?UpdateReceiverEstimate@SendSideBandwidthEstimation@webrtc@@QEAAXVTimestamp@2@VDataRate@2@@Z
    MCAPI void UpdateReceiverEstimate(class webrtc::Timestamp, class webrtc::DataRate);

    // symbol: ?UpdateRtt@SendSideBandwidthEstimation@webrtc@@QEAAXVTimeDelta@2@VTimestamp@2@@Z
    MCAPI void UpdateRtt(class webrtc::TimeDelta, class webrtc::Timestamp);

    // symbol: ?loss_based_state@SendSideBandwidthEstimation@webrtc@@QEBA?AW4LossBasedState@2@XZ
    MCAPI ::webrtc::LossBasedState loss_based_state() const;

    // symbol: ?target_rate@SendSideBandwidthEstimation@webrtc@@QEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate target_rate() const;

    // symbol: ??1SendSideBandwidthEstimation@webrtc@@QEAA@XZ
    MCAPI ~SendSideBandwidthEstimation();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ApplyTargetLimits@SendSideBandwidthEstimation@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void ApplyTargetLimits(class webrtc::Timestamp);

    // symbol: ?GetUpperLimit@SendSideBandwidthEstimation@webrtc@@AEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate GetUpperLimit() const;

    // symbol: ?IsInStartPhase@SendSideBandwidthEstimation@webrtc@@AEBA_NVTimestamp@2@@Z
    MCAPI bool IsInStartPhase(class webrtc::Timestamp) const;

    // symbol: ?LossBasedBandwidthEstimatorV1Enabled@SendSideBandwidthEstimation@webrtc@@AEBA_NXZ
    MCAPI bool LossBasedBandwidthEstimatorV1Enabled() const;

    // symbol: ?LossBasedBandwidthEstimatorV1ReadyForUse@SendSideBandwidthEstimation@webrtc@@AEBA_NXZ
    MCAPI bool LossBasedBandwidthEstimatorV1ReadyForUse() const;

    // symbol: ?LossBasedBandwidthEstimatorV2Enabled@SendSideBandwidthEstimation@webrtc@@AEBA_NXZ
    MCAPI bool LossBasedBandwidthEstimatorV2Enabled() const;

    // symbol: ?LossBasedBandwidthEstimatorV2ReadyForUse@SendSideBandwidthEstimation@webrtc@@AEBA_NXZ
    MCAPI bool LossBasedBandwidthEstimatorV2ReadyForUse() const;

    // symbol: ?MaybeLogLossBasedEvent@SendSideBandwidthEstimation@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void MaybeLogLossBasedEvent(class webrtc::Timestamp);

    // symbol: ?MaybeLogLowBitrateWarning@SendSideBandwidthEstimation@webrtc@@AEAAXVDataRate@2@VTimestamp@2@@Z
    MCAPI void MaybeLogLowBitrateWarning(class webrtc::DataRate, class webrtc::Timestamp);

    // symbol: ?UpdateMinHistory@SendSideBandwidthEstimation@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void UpdateMinHistory(class webrtc::Timestamp);

    // symbol: ?UpdateTargetBitrate@SendSideBandwidthEstimation@webrtc@@AEAAXVDataRate@2@VTimestamp@2@@Z
    MCAPI void UpdateTargetBitrate(class webrtc::DataRate, class webrtc::Timestamp);

    // symbol: ?UpdateUmaStatsPacketsLost@SendSideBandwidthEstimation@webrtc@@AEAAXVTimestamp@2@H@Z
    MCAPI void UpdateUmaStatsPacketsLost(class webrtc::Timestamp, int);

    // NOLINTEND
};

}; // namespace webrtc
