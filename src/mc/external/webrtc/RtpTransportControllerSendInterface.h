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
    // vIndex: 0
    virtual ~RtpTransportControllerSendInterface() = default;

    // vIndex: 1
    virtual ::webrtc::PacketRouter* packet_router() = 0;

    // vIndex: 2
    virtual ::webrtc::RtpVideoSenderInterface* CreateRtpVideoSender(
        ::std::map<uint, ::webrtc::RtpState> const&,
        ::std::map<uint, ::webrtc::RtpPayloadState> const&,
        ::webrtc::RtpConfig const&,
        int,
        ::webrtc::Transport*,
        ::webrtc::RtpSenderObservers const&,
        ::std::unique_ptr<::webrtc::FecController>,
        ::webrtc::RtpSenderFrameEncryptionConfig const&,
        ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>
    ) = 0;

    // vIndex: 3
    virtual void DestroyRtpVideoSender(::webrtc::RtpVideoSenderInterface*) = 0;

    // vIndex: 4
    virtual void RegisterSendingRtpStream(::webrtc::RtpRtcpInterface&) = 0;

    // vIndex: 5
    virtual void DeRegisterSendingRtpStream(::webrtc::RtpRtcpInterface&) = 0;

    // vIndex: 6
    virtual ::webrtc::NetworkStateEstimateObserver* network_state_estimate_observer() = 0;

    // vIndex: 7
    virtual ::webrtc::RtpPacketSender* packet_sender() = 0;

    // vIndex: 8
    virtual void SetAllocatedSendBitrateLimits(::webrtc::BitrateAllocationLimits) = 0;

    // vIndex: 9
    virtual void ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const&) = 0;

    // vIndex: 10
    virtual void SetPacingFactor(float) = 0;

    // vIndex: 11
    virtual void SetQueueTimeLimit(int) = 0;

    // vIndex: 12
    virtual ::webrtc::StreamFeedbackProvider* GetStreamFeedbackProvider() = 0;

    // vIndex: 13
    virtual void RegisterTargetTransferRateObserver(::webrtc::TargetTransferRateObserver*) = 0;

    // vIndex: 14
    virtual void OnNetworkRouteChanged(::std::string_view, ::rtc::NetworkRoute const&) = 0;

    // vIndex: 15
    virtual void OnNetworkAvailability(bool) = 0;

    // vIndex: 16
    virtual ::webrtc::NetworkLinkRtcpObserver* GetRtcpObserver() = 0;

    // vIndex: 17
    virtual int64 GetPacerQueuingDelayMs() const = 0;

    // vIndex: 18
    virtual ::std::optional<::webrtc::Timestamp> GetFirstPacketTime() const = 0;

    // vIndex: 19
    virtual void EnablePeriodicAlrProbing(bool) = 0;

    // vIndex: 20
    virtual void OnSentPacket(::rtc::SentPacket const&) = 0;

    // vIndex: 21
    virtual void OnReceivedPacket(::webrtc::ReceivedPacket const&) = 0;

    // vIndex: 22
    virtual void SetSdpBitrateParameters(::webrtc::BitrateConstraints const&) = 0;

    // vIndex: 23
    virtual void SetClientBitratePreferences(::webrtc::BitrateSettings const&) = 0;

    // vIndex: 24
    virtual void OnTransportOverheadChanged(uint64) = 0;

    // vIndex: 25
    virtual void AccountForAudioPacketsInPacedSender(bool) = 0;

    // vIndex: 26
    virtual void IncludeOverheadInPacedSender() = 0;

    // vIndex: 27
    virtual void EnsureStarted() = 0;
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
