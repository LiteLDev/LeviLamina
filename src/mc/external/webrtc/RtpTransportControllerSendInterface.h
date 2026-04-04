#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FecController; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class NetworkLinkRtcpObserver; }
namespace webrtc { class NetworkStateEstimateObserver; }
namespace webrtc { class PacketRouter; }
namespace webrtc { class RtpPacketSender; }
namespace webrtc { class RtpRtcpInterface; }
namespace webrtc { class RtpVideoSenderInterface; }
namespace webrtc { class StreamFeedbackProvider; }
namespace webrtc { class TargetTransferRateObserver; }
namespace webrtc { class Timestamp; }
namespace webrtc { class Transport; }
namespace webrtc { struct BandwidthEstimationSettings; }
namespace webrtc { struct BitrateAllocationLimits; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct ReceivedPacket; }
namespace webrtc { struct RtpConfig; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpSenderFrameEncryptionConfig; }
namespace webrtc { struct RtpSenderObservers; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSendInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpTransportControllerSendInterface();

    virtual ::webrtc::PacketRouter* packet_router() = 0;

    virtual ::webrtc::RtpVideoSenderInterface* CreateRtpVideoSender(
        ::std::map<uint, ::webrtc::RtpState> const&                  suspended_ssrcs,
        ::std::map<uint, ::webrtc::RtpPayloadState> const&           states,
        ::webrtc::RtpConfig const&                                   rtp_config,
        int                                                          rtcp_report_interval_ms,
        ::webrtc::Transport*                                         send_transport,
        ::webrtc::RtpSenderObservers const&                          observers,
        ::std::unique_ptr<::webrtc::FecController>                   fec_controller,
        ::webrtc::RtpSenderFrameEncryptionConfig const&              frame_encryption_config,
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer
    ) = 0;

    virtual void DestroyRtpVideoSender(::webrtc::RtpVideoSenderInterface* rtp_video_sender) = 0;

    virtual void RegisterSendingRtpStream(::webrtc::RtpRtcpInterface& rtp_module) = 0;

    virtual void DeRegisterSendingRtpStream(::webrtc::RtpRtcpInterface& rtp_module) = 0;

    virtual ::webrtc::NetworkStateEstimateObserver* network_state_estimate_observer() = 0;

    virtual ::webrtc::RtpPacketSender* packet_sender() = 0;

    virtual void SetAllocatedSendBitrateLimits(::webrtc::BitrateAllocationLimits limits) = 0;

    virtual void ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& settings) = 0;

    virtual void SetPacingFactor(float pacing_factor) = 0;

    virtual void SetQueueTimeLimit(int limit_ms) = 0;

    virtual ::webrtc::StreamFeedbackProvider* GetStreamFeedbackProvider() = 0;

    virtual void RegisterTargetTransferRateObserver(::webrtc::TargetTransferRateObserver* observer) = 0;

    virtual void OnNetworkRouteChanged(::std::string_view transport_name, ::rtc::NetworkRoute const& network_route) = 0;

    virtual void OnNetworkAvailability(bool network_available) = 0;

    virtual ::webrtc::NetworkLinkRtcpObserver* GetRtcpObserver() = 0;

    virtual int64 GetPacerQueuingDelayMs() const = 0;

    virtual ::std::optional<::webrtc::Timestamp> GetFirstPacketTime() const = 0;

    virtual void EnablePeriodicAlrProbing(bool enable) = 0;

    virtual void OnSentPacket(::rtc::SentPacket const& sent_packet) = 0;

    virtual void OnReceivedPacket(::webrtc::ReceivedPacket const& packet_msg) = 0;

    virtual void SetSdpBitrateParameters(::webrtc::BitrateConstraints const& constraints) = 0;

    virtual void SetClientBitratePreferences(::webrtc::BitrateSettings const& preferences) = 0;

    virtual void OnTransportOverheadChanged(uint64 transport_overhead_bytes_per_packet) = 0;

    virtual void AccountForAudioPacketsInPacedSender(bool account_for_audio) = 0;

    virtual void IncludeOverheadInPacedSender() = 0;

    virtual void EnsureStarted() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
