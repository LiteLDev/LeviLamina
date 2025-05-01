#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthUsage.h"
#include "mc/external/webrtc/LossBasedState.h"

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
    // member functions
    // NOLINTBEGIN
    MCNAPI void ApplyTargetLimits(::webrtc::Timestamp);

    MCNAPI ::webrtc::DataRate GetEstimatedLinkCapacity() const;

    MCNAPI int GetMinBitrate() const;

    MCNAPI ::webrtc::DataRate GetUpperLimit() const;

    MCNAPI bool IsInStartPhase(::webrtc::Timestamp) const;

    MCNAPI bool IsRttAboveLimit() const;

    MCNAPI bool LossBasedBandwidthEstimatorV1Enabled() const;

    MCNAPI bool LossBasedBandwidthEstimatorV1ReadyForUse() const;

    MCNAPI bool LossBasedBandwidthEstimatorV2Enabled() const;

    MCNAPI bool LossBasedBandwidthEstimatorV2ReadyForUse() const;

    MCNAPI void MaybeLogLossBasedEvent(::webrtc::Timestamp);

    MCNAPI void MaybeLogLowBitrateWarning(::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void OnRouteChange();

    MCNAPI void OnSentPacket(::webrtc::SentPacket const&);

    MCNAPI bool PaceAtLossBasedEstimate() const;

    MCNAPI SendSideBandwidthEstimation(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCNAPI void SetAcknowledgedRate(::std::optional<::webrtc::DataRate>, ::webrtc::Timestamp);

    MCNAPI void
        SetBitrates(::std::optional<::webrtc::DataRate>, ::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void SetMinMaxBitrate(::webrtc::DataRate, ::webrtc::DataRate);

    MCNAPI void SetSendBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void UpdateDelayBasedEstimate(::webrtc::Timestamp, ::webrtc::DataRate);

    MCNAPI void UpdateEstimate(::webrtc::Timestamp);

    MCNAPI void UpdateLossBasedEstimator(
        ::webrtc::TransportPacketsFeedback const&,
        ::webrtc::BandwidthUsage,
        ::std::optional<::webrtc::DataRate>,
        bool
    );

    MCNAPI void UpdateMinHistory(::webrtc::Timestamp);

    MCNAPI void UpdatePacketsLost(int64, int64, ::webrtc::Timestamp);

    MCNAPI void UpdatePropagationRtt(::webrtc::Timestamp, ::webrtc::TimeDelta);

    MCNAPI void UpdateReceiverEstimate(::webrtc::Timestamp, ::webrtc::DataRate);

    MCNAPI void UpdateRtt(::webrtc::TimeDelta, ::webrtc::Timestamp);

    MCNAPI void UpdateTargetBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void UpdateUmaStatsPacketsLost(::webrtc::Timestamp, int);

    MCNAPI ::webrtc::LossBasedState loss_based_state() const;

    MCNAPI ::webrtc::DataRate target_rate() const;

    MCNAPI ~SendSideBandwidthEstimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
