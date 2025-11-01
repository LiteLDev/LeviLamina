#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NetworkLinkRtcpObserver.h"
#include "mc/external/webrtc/NetworkStateEstimateObserver.h"
#include "mc/external/webrtc/RtpTransportControllerSendInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class DataRate; }
namespace webrtc { class FecController; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class PacketRouter; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class RtpPacketSender; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpRtcpInterface; }
namespace webrtc { class RtpVideoSenderInterface; }
namespace webrtc { class StreamFeedbackProvider; }
namespace webrtc { class TargetTransferRateObserver; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class Transport; }
namespace webrtc { struct BandwidthEstimationSettings; }
namespace webrtc { struct BitrateAllocationLimits; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct ReceivedPacket; }
namespace webrtc { struct RtpConfig; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpSenderFrameEncryptionConfig; }
namespace webrtc { struct RtpSenderObservers; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct RtpTransportConfig; }
namespace webrtc { struct TargetRateConstraints; }
namespace webrtc::rtcp { class TransportFeedback; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSend : public ::webrtc::RtpTransportControllerSendInterface, public ::webrtc::NetworkLinkRtcpObserver, public ::webrtc::NetworkStateEstimateObserver {
public:
    // RtpTransportControllerSend inner types declare
    // clang-format off
    struct LossReport;
    // clang-format on
    
    // RtpTransportControllerSend inner types define
    struct LossReport {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk902914;
        ::ll::UntypedStorage<4, 4> mUnkf095fc;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        LossReport& operator=(LossReport const&);
        LossReport(LossReport const&);
        LossReport();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc6453a;
    ::ll::UntypedStorage<1, 1> mUnk70273c;
    ::ll::UntypedStorage<8, 8> mUnk5feadf;
    ::ll::UntypedStorage<8, 264> mUnkc4ccb7;
    ::ll::UntypedStorage<8, 24> mUnkaa9ec7;
    ::ll::UntypedStorage<8, 56> mUnk25fb43;
    ::ll::UntypedStorage<8, 16> mUnkd0c00c;
    ::ll::UntypedStorage<1, 1> mUnk4acc8b;
    ::ll::UntypedStorage<1, 1> mUnk2af1ae;
    ::ll::UntypedStorage<8, 1040> mUnk33f103;
    ::ll::UntypedStorage<8, 8> mUnk9afb80;
    ::ll::UntypedStorage<8, 72> mUnk6a6f0b;
    ::ll::UntypedStorage<8, 136> mUnk7c1ecc;
    ::ll::UntypedStorage<8, 8> mUnkf715ad;
    ::ll::UntypedStorage<8, 8> mUnkdf5e8b;
    ::ll::UntypedStorage<8, 8> mUnk7ab5ce;
    ::ll::UntypedStorage<8, 8> mUnk4df048;
    ::ll::UntypedStorage<8, 8> mUnk56e9e1;
    ::ll::UntypedStorage<8, 16> mUnkb564b9;
    ::ll::UntypedStorage<8, 8> mUnk8df24d;
    ::ll::UntypedStorage<8, 152> mUnk76ebad;
    ::ll::UntypedStorage<8, 80> mUnkebfb3e;
    ::ll::UntypedStorage<1, 1> mUnk782b23;
    ::ll::UntypedStorage<1, 1> mUnk3e0443;
    ::ll::UntypedStorage<8, 80> mUnk7341dc;
    ::ll::UntypedStorage<8, 8> mUnk6073aa;
    ::ll::UntypedStorage<1, 1> mUnka9dac7;
    ::ll::UntypedStorage<8, 8> mUnk5926b7;
    ::ll::UntypedStorage<8, 8> mUnk5fbed4;
    ::ll::UntypedStorage<8, 8> mUnk826305;
    ::ll::UntypedStorage<1, 1> mUnk777a52;
    ::ll::UntypedStorage<8, 152> mUnkbbdc9a;
    ::ll::UntypedStorage<8, 8> mUnkd01d6f;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransportControllerSend& operator=(RtpTransportControllerSend const&);
    RtpTransportControllerSend(RtpTransportControllerSend const&);
    RtpTransportControllerSend();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpTransportControllerSend() /*override*/;

    // vIndex: 2
    virtual ::webrtc::RtpVideoSenderInterface* CreateRtpVideoSender(::std::map<uint, ::webrtc::RtpState> const& suspended_ssrcs, ::std::map<uint, ::webrtc::RtpPayloadState> const& states, ::webrtc::RtpConfig const& rtp_config, int rtcp_report_interval_ms, ::webrtc::Transport* send_transport, ::webrtc::RtpSenderObservers const& observers, ::std::unique_ptr<::webrtc::FecController> fec_controller, ::webrtc::RtpSenderFrameEncryptionConfig const& frame_encryption_config, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer) /*override*/;

    // vIndex: 3
    virtual void DestroyRtpVideoSender(::webrtc::RtpVideoSenderInterface* rtp_video_sender) /*override*/;

    // vIndex: 4
    virtual void RegisterSendingRtpStream(::webrtc::RtpRtcpInterface& rtp_module) /*override*/;

    // vIndex: 5
    virtual void DeRegisterSendingRtpStream(::webrtc::RtpRtcpInterface& rtp_module) /*override*/;

    // vIndex: 1
    virtual ::webrtc::PacketRouter* packet_router() /*override*/;

    // vIndex: 6
    virtual ::webrtc::NetworkStateEstimateObserver* network_state_estimate_observer() /*override*/;

    // vIndex: 7
    virtual ::webrtc::RtpPacketSender* packet_sender() /*override*/;

    // vIndex: 8
    virtual void SetAllocatedSendBitrateLimits(::webrtc::BitrateAllocationLimits limits) /*override*/;

    // vIndex: 9
    virtual void ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& settings) /*override*/;

    // vIndex: 10
    virtual void SetPacingFactor(float pacing_factor) /*override*/;

    // vIndex: 11
    virtual void SetQueueTimeLimit(int limit_ms) /*override*/;

    // vIndex: 12
    virtual ::webrtc::StreamFeedbackProvider* GetStreamFeedbackProvider() /*override*/;

    // vIndex: 13
    virtual void RegisterTargetTransferRateObserver(::webrtc::TargetTransferRateObserver* observer) /*override*/;

    // vIndex: 14
    virtual void OnNetworkRouteChanged(::std::string_view transport_name, ::rtc::NetworkRoute const& network_route) /*override*/;

    // vIndex: 15
    virtual void OnNetworkAvailability(bool network_available) /*override*/;

    // vIndex: 16
    virtual ::webrtc::NetworkLinkRtcpObserver* GetRtcpObserver() /*override*/;

    // vIndex: 17
    virtual int64 GetPacerQueuingDelayMs() const /*override*/;

    // vIndex: 18
    virtual ::std::optional<::webrtc::Timestamp> GetFirstPacketTime() const /*override*/;

    // vIndex: 19
    virtual void EnablePeriodicAlrProbing(bool enable) /*override*/;

    // vIndex: 20
    virtual void OnSentPacket(::rtc::SentPacket const& sent_packet) /*override*/;

    // vIndex: 21
    virtual void OnReceivedPacket(::webrtc::ReceivedPacket const& packet_msg) /*override*/;

    // vIndex: 22
    virtual void SetSdpBitrateParameters(::webrtc::BitrateConstraints const& constraints) /*override*/;

    // vIndex: 23
    virtual void SetClientBitratePreferences(::webrtc::BitrateSettings const& preferences) /*override*/;

    // vIndex: 24
    virtual void OnTransportOverheadChanged(uint64 transport_overhead_bytes_per_packet) /*override*/;

    // vIndex: 25
    virtual void AccountForAudioPacketsInPacedSender(bool account_for_audio) /*override*/;

    // vIndex: 26
    virtual void IncludeOverheadInPacedSender() /*override*/;

    // vIndex: 27
    virtual void EnsureStarted() /*override*/;

    // vIndex: 2
    virtual void OnReceiverEstimatedMaxBitrate(::webrtc::Timestamp receive_time, ::webrtc::DataRate bitrate) /*override*/;

    // vIndex: 3
    virtual void OnReport(::webrtc::Timestamp receive_time, ::rtc::ArrayView<::webrtc::ReportBlockData const> report_blocks) /*override*/;

    // vIndex: 4
    virtual void OnRttUpdate(::webrtc::Timestamp receive_time, ::webrtc::TimeDelta rtt) /*override*/;

    // vIndex: 1
    virtual void OnTransportFeedback(::webrtc::Timestamp receive_time, ::webrtc::rtcp::TransportFeedback const& feedback) /*override*/;

    // vIndex: 0
    virtual void OnRemoteNetworkEstimate(::webrtc::NetworkStateEstimate estimate) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::BitrateConstraints> ApplyOrLiftRelayCap(bool is_relayed);

    MCNAPI ::std::optional<bool> GetCongestedStateUpdate() const;

    MCNAPI bool IsRelevantRouteChange(::rtc::NetworkRoute const& old_route, ::rtc::NetworkRoute const& new_route) const;

    MCNAPI void MaybeCreateControllers();

    MCNAPI void NotifyBweOfPacedSentPacket(::webrtc::RtpPacketToSend const& packet, ::webrtc::PacedPacketInfo const& pacing_info);

    MCNAPI void PostUpdates(::webrtc::NetworkControlUpdate update);

    MCNAPI void ProcessSentPacket(::rtc::SentPacket const& sent_packet);

    MCNAPI void ProcessSentPacketUpdates(::webrtc::NetworkControlUpdate updates);

    MCNAPI explicit RtpTransportControllerSend(::webrtc::RtpTransportConfig const& config);

    MCNAPI void StartProcessPeriodicTasks();

    MCNAPI void UpdateBitrateConstraints(::webrtc::BitrateConstraints const& updated);

    MCNAPI void UpdateCongestedState();

    MCNAPI void UpdateControlState();

    MCNAPI void UpdateControllerWithTimeInterval();

    MCNAPI void UpdateInitialConstraints(::webrtc::TargetRateConstraints new_contraints);

    MCNAPI void UpdateNetworkAvailability();

    MCNAPI void UpdateStreamsConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpTransportConfig const& config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::RtpVideoSenderInterface* $CreateRtpVideoSender(::std::map<uint, ::webrtc::RtpState> const& suspended_ssrcs, ::std::map<uint, ::webrtc::RtpPayloadState> const& states, ::webrtc::RtpConfig const& rtp_config, int rtcp_report_interval_ms, ::webrtc::Transport* send_transport, ::webrtc::RtpSenderObservers const& observers, ::std::unique_ptr<::webrtc::FecController> fec_controller, ::webrtc::RtpSenderFrameEncryptionConfig const& frame_encryption_config, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface> frame_transformer);

    MCNAPI void $DestroyRtpVideoSender(::webrtc::RtpVideoSenderInterface* rtp_video_sender);

    MCNAPI void $RegisterSendingRtpStream(::webrtc::RtpRtcpInterface& rtp_module);

    MCNAPI void $DeRegisterSendingRtpStream(::webrtc::RtpRtcpInterface& rtp_module);

    MCNAPI ::webrtc::PacketRouter* $packet_router();

    MCNAPI ::webrtc::NetworkStateEstimateObserver* $network_state_estimate_observer();

    MCNAPI ::webrtc::RtpPacketSender* $packet_sender();

    MCNAPI void $SetAllocatedSendBitrateLimits(::webrtc::BitrateAllocationLimits limits);

    MCNAPI void $ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& settings);

    MCNAPI void $SetPacingFactor(float pacing_factor);

    MCNAPI void $SetQueueTimeLimit(int limit_ms);

    MCNAPI ::webrtc::StreamFeedbackProvider* $GetStreamFeedbackProvider();

    MCNAPI void $RegisterTargetTransferRateObserver(::webrtc::TargetTransferRateObserver* observer);

    MCNAPI void $OnNetworkRouteChanged(::std::string_view transport_name, ::rtc::NetworkRoute const& network_route);

    MCNAPI void $OnNetworkAvailability(bool network_available);

    MCNAPI ::webrtc::NetworkLinkRtcpObserver* $GetRtcpObserver();

    MCNAPI int64 $GetPacerQueuingDelayMs() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> $GetFirstPacketTime() const;

    MCNAPI void $EnablePeriodicAlrProbing(bool enable);

    MCNAPI void $OnSentPacket(::rtc::SentPacket const& sent_packet);

    MCNAPI void $OnReceivedPacket(::webrtc::ReceivedPacket const& packet_msg);

    MCNAPI void $SetSdpBitrateParameters(::webrtc::BitrateConstraints const& constraints);

    MCNAPI void $SetClientBitratePreferences(::webrtc::BitrateSettings const& preferences);

    MCNAPI void $OnTransportOverheadChanged(uint64 transport_overhead_bytes_per_packet);

    MCNAPI void $AccountForAudioPacketsInPacedSender(bool account_for_audio);

    MCNAPI void $IncludeOverheadInPacedSender();

    MCNAPI void $EnsureStarted();

    MCNAPI void $OnReceiverEstimatedMaxBitrate(::webrtc::Timestamp receive_time, ::webrtc::DataRate bitrate);

    MCNAPI void $OnReport(::webrtc::Timestamp receive_time, ::rtc::ArrayView<::webrtc::ReportBlockData const> report_blocks);

    MCNAPI void $OnRttUpdate(::webrtc::Timestamp receive_time, ::webrtc::TimeDelta rtt);

    MCNAPI void $OnTransportFeedback(::webrtc::Timestamp receive_time, ::webrtc::rtcp::TransportFeedback const& feedback);

    MCNAPI void $OnRemoteNetworkEstimate(::webrtc::NetworkStateEstimate estimate);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpTransportControllerSendInterface();

    MCNAPI static void** $vftableForNetworkLinkRtcpObserver();

    MCNAPI static void** $vftableForNetworkStateEstimateObserver();
    // NOLINTEND

};

}
