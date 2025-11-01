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
    // SendSideBandwidthEstimation inner types define
    enum class UmaState : int {
        KNoUpdate  = 0,
        KFirstDone = 1,
        KDone      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk2749da;
    ::ll::UntypedStorage<8, 432>  mUnk1826b7;
    ::ll::UntypedStorage<8, 104>  mUnk8de58b;
    ::ll::UntypedStorage<8, 40>   mUnk389eb4;
    ::ll::UntypedStorage<4, 4>    mUnkfca5e3;
    ::ll::UntypedStorage<4, 4>    mUnka67b68;
    ::ll::UntypedStorage<8, 16>   mUnkfc0450;
    ::ll::UntypedStorage<8, 8>    mUnk6de69d;
    ::ll::UntypedStorage<8, 8>    mUnk4190b2;
    ::ll::UntypedStorage<8, 8>    mUnkef9cfe;
    ::ll::UntypedStorage<8, 8>    mUnk4cdf1e;
    ::ll::UntypedStorage<8, 8>    mUnk8fa63a;
    ::ll::UntypedStorage<1, 1>    mUnkb2e76f;
    ::ll::UntypedStorage<8, 8>    mUnkf9e06f;
    ::ll::UntypedStorage<8, 8>    mUnk296a49;
    ::ll::UntypedStorage<1, 1>    mUnkb45380;
    ::ll::UntypedStorage<1, 1>    mUnk78fbbb;
    ::ll::UntypedStorage<8, 8>    mUnk5de9da;
    ::ll::UntypedStorage<8, 8>    mUnk35a36d;
    ::ll::UntypedStorage<8, 8>    mUnkdc28fe;
    ::ll::UntypedStorage<8, 8>    mUnk9a4167;
    ::ll::UntypedStorage<8, 8>    mUnk9d57d4;
    ::ll::UntypedStorage<4, 4>    mUnk6ef5a0;
    ::ll::UntypedStorage<8, 8>    mUnkb76c59;
    ::ll::UntypedStorage<4, 4>    mUnkc84f31;
    ::ll::UntypedStorage<4, 4>    mUnk143d20;
    ::ll::UntypedStorage<8, 32>   mUnk464255;
    ::ll::UntypedStorage<8, 8>    mUnkab88db;
    ::ll::UntypedStorage<8, 8>    mUnk18d152;
    ::ll::UntypedStorage<4, 4>    mUnkf15cc2;
    ::ll::UntypedStorage<4, 4>    mUnkbd5b57;
    ::ll::UntypedStorage<8, 8>    mUnkecd72b;
    ::ll::UntypedStorage<8, 1360> mUnk2eba1d;
    ::ll::UntypedStorage<8, 8>    mUnk82be2e;
    ::ll::UntypedStorage<4, 4>    mUnk762e5c;
    ::ll::UntypedStorage<8, 80>   mUnkf3243e;
    // NOLINTEND

public:
    // prevent constructor by default
    SendSideBandwidthEstimation& operator=(SendSideBandwidthEstimation const&);
    SendSideBandwidthEstimation(SendSideBandwidthEstimation const&);
    SendSideBandwidthEstimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ApplyTargetLimits(::webrtc::Timestamp at_time);

    MCNAPI ::webrtc::DataRate GetEstimatedLinkCapacity() const;

    MCNAPI int GetMinBitrate() const;

    MCNAPI ::webrtc::DataRate GetUpperLimit() const;

    MCNAPI bool IsInStartPhase(::webrtc::Timestamp at_time) const;

    MCNAPI bool IsRttAboveLimit() const;

    MCNAPI bool LossBasedBandwidthEstimatorV1Enabled() const;

    MCNAPI bool LossBasedBandwidthEstimatorV1ReadyForUse() const;

    MCNAPI bool LossBasedBandwidthEstimatorV2Enabled() const;

    MCNAPI bool LossBasedBandwidthEstimatorV2ReadyForUse() const;

    MCNAPI void MaybeLogLossBasedEvent(::webrtc::Timestamp at_time);

    MCNAPI void MaybeLogLowBitrateWarning(::webrtc::DataRate bitrate, ::webrtc::Timestamp at_time);

    MCNAPI void OnRouteChange();

    MCNAPI void OnSentPacket(::webrtc::SentPacket const& sent_packet);

    MCNAPI bool PaceAtLossBasedEstimate() const;

    MCNAPI
    SendSideBandwidthEstimation(::webrtc::FieldTrialsView const* key_value_config, ::webrtc::RtcEventLog* event_log);

    MCNAPI void SetAcknowledgedRate(::std::optional<::webrtc::DataRate> acknowledged_rate, ::webrtc::Timestamp at_time);

    MCNAPI void SetBitrates(
        ::std::optional<::webrtc::DataRate> send_bitrate,
        ::webrtc::DataRate                  min_bitrate,
        ::webrtc::DataRate                  max_bitrate,
        ::webrtc::Timestamp                 at_time
    );

    MCNAPI void SetMinMaxBitrate(::webrtc::DataRate min_bitrate, ::webrtc::DataRate max_bitrate);

    MCNAPI void SetSendBitrate(::webrtc::DataRate bitrate, ::webrtc::Timestamp at_time);

    MCNAPI void UpdateDelayBasedEstimate(::webrtc::Timestamp at_time, ::webrtc::DataRate bitrate);

    MCNAPI void UpdateEstimate(::webrtc::Timestamp at_time);

    MCNAPI void UpdateLossBasedEstimator(
        ::webrtc::TransportPacketsFeedback const& report,
        ::webrtc::BandwidthUsage                  delay_detector_state,
        ::std::optional<::webrtc::DataRate>       probe_bitrate,
        bool                                      in_alr
    );

    MCNAPI void UpdateMinHistory(::webrtc::Timestamp at_time);

    MCNAPI void UpdatePacketsLost(int64 packets_lost, int64 number_of_packets, ::webrtc::Timestamp at_time);

    MCNAPI void UpdatePropagationRtt(::webrtc::Timestamp at_time, ::webrtc::TimeDelta propagation_rtt);

    MCNAPI void UpdateReceiverEstimate(::webrtc::Timestamp at_time, ::webrtc::DataRate bandwidth);

    MCNAPI void UpdateRtt(::webrtc::TimeDelta rtt, ::webrtc::Timestamp at_time);

    MCNAPI void UpdateTargetBitrate(::webrtc::DataRate new_bitrate, ::webrtc::Timestamp at_time);

    MCNAPI void UpdateUmaStatsPacketsLost(::webrtc::Timestamp at_time, int packets_lost);

    MCNAPI ::webrtc::LossBasedState loss_based_state() const;

    MCNAPI ::webrtc::DataRate target_rate() const;

    MCNAPI ~SendSideBandwidthEstimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config, ::webrtc::RtcEventLog* event_log);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
