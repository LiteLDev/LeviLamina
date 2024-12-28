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
    // prevent constructor by default
    SendSideBandwidthEstimation& operator=(SendSideBandwidthEstimation const&);
    SendSideBandwidthEstimation(SendSideBandwidthEstimation const&);
    SendSideBandwidthEstimation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ApplyTargetLimits(::webrtc::Timestamp);

    MCAPI ::webrtc::DataRate GetEstimatedLinkCapacity() const;

    MCAPI int GetMinBitrate() const;

    MCAPI ::webrtc::DataRate GetUpperLimit() const;

    MCAPI bool IsInStartPhase(::webrtc::Timestamp) const;

    MCAPI bool IsRttAboveLimit() const;

    MCAPI bool LossBasedBandwidthEstimatorV1Enabled() const;

    MCAPI bool LossBasedBandwidthEstimatorV1ReadyForUse() const;

    MCAPI bool LossBasedBandwidthEstimatorV2Enabled() const;

    MCAPI bool LossBasedBandwidthEstimatorV2ReadyForUse() const;

    MCAPI void MaybeLogLossBasedEvent(::webrtc::Timestamp);

    MCAPI void MaybeLogLowBitrateWarning(::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void OnRouteChange();

    MCAPI void OnSentPacket(::webrtc::SentPacket const&);

    MCAPI bool PaceAtLossBasedEstimate() const;

    MCAPI SendSideBandwidthEstimation(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCAPI void SetAcknowledgedRate(::std::optional<::webrtc::DataRate>, ::webrtc::Timestamp);

    MCAPI void
        SetBitrates(::std::optional<::webrtc::DataRate>, ::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void SetMinMaxBitrate(::webrtc::DataRate, ::webrtc::DataRate);

    MCAPI void SetSendBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void UpdateDelayBasedEstimate(::webrtc::Timestamp, ::webrtc::DataRate);

    MCAPI void UpdateEstimate(::webrtc::Timestamp);

    MCAPI void UpdateLossBasedEstimator(
        ::webrtc::TransportPacketsFeedback const&,
        ::webrtc::BandwidthUsage,
        ::std::optional<::webrtc::DataRate>,
        bool
    );

    MCAPI void UpdateMinHistory(::webrtc::Timestamp);

    MCAPI void UpdatePacketsLost(int64, int64, ::webrtc::Timestamp);

    MCAPI void UpdatePropagationRtt(::webrtc::Timestamp, ::webrtc::TimeDelta);

    MCAPI void UpdateReceiverEstimate(::webrtc::Timestamp, ::webrtc::DataRate);

    MCAPI void UpdateRtt(::webrtc::TimeDelta, ::webrtc::Timestamp);

    MCAPI void UpdateTargetBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void UpdateUmaStatsPacketsLost(::webrtc::Timestamp, int);

    MCAPI ::webrtc::LossBasedState loss_based_state() const;

    MCAPI ::webrtc::DataRate target_rate() const;

    MCAPI ~SendSideBandwidthEstimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
