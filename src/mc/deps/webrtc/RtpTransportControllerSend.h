#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class Clock; }
namespace webrtc { class FecController; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MaybeWorkerThread; }
namespace webrtc { class NetworkStateEstimateObserver; }
namespace webrtc { class PacketRouter; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtcpBandwidthObserver; }
namespace webrtc { class RtpPacketSender; }
namespace webrtc { class RtpVideoSenderInterface; }
namespace webrtc { class StreamFeedbackProvider; }
namespace webrtc { class TargetTransferRateObserver; }
namespace webrtc { class Timestamp; }
namespace webrtc { class Transport; }
namespace webrtc { class TransportFeedbackObserver; }
namespace webrtc { struct BitrateAllocationLimits; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct RTCPReportBlock; }
namespace webrtc { struct ReceivedPacket; }
namespace webrtc { struct RtpConfig; }
namespace webrtc { struct RtpPacketSendInfo; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpSenderFrameEncryptionConfig; }
namespace webrtc { struct RtpSenderObservers; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct RtpTransportConfig; }
namespace webrtc { struct TargetRateConstraints; }
namespace webrtc::rtcp { class TransportFeedback; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSend {
public:
    // RtpTransportControllerSend inner types declare
    // clang-format off
    class PacerSettings;
    // clang-format on

    // RtpTransportControllerSend inner types define
    class PacerSettings {
    public:
        // prevent constructor by default
        PacerSettings& operator=(PacerSettings const&);
        PacerSettings(PacerSettings const&);
        PacerSettings();

    public:
        // NOLINTBEGIN
        // symbol: ??0PacerSettings@RtpTransportControllerSend@webrtc@@QEAA@AEBVFieldTrialsView@2@@Z
        MCAPI explicit PacerSettings(class webrtc::FieldTrialsView const&);

        // symbol: ??1PacerSettings@RtpTransportControllerSend@webrtc@@QEAA@XZ
        MCAPI ~PacerSettings();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RtpTransportControllerSend& operator=(RtpTransportControllerSend const&);
    RtpTransportControllerSend(RtpTransportControllerSend const&);
    RtpTransportControllerSend();

public:
    // NOLINTBEGIN
    // symbol: ?AccountForAudioPacketsInPacedSender@RtpTransportControllerSend@webrtc@@UEAAX_N@Z
    MCVAPI void AccountForAudioPacketsInPacedSender(bool);

    // symbol:
    // ?CreateRtpVideoSender@RtpTransportControllerSend@webrtc@@UEAAPEAVRtpVideoSenderInterface@2@AEBV?$map@IURtpState@webrtc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURtpState@webrtc@@@std@@@4@@std@@AEBV?$map@IURtpPayloadState@webrtc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURtpPayloadState@webrtc@@@std@@@4@@5@AEBURtpConfig@2@HPEAVTransport@2@AEBURtpSenderObservers@2@PEAVRtcEventLog@2@V?$unique_ptr@VFecController@webrtc@@U?$default_delete@VFecController@webrtc@@@std@@@5@AEBURtpSenderFrameEncryptionConfig@2@V?$scoped_refptr@VFrameTransformerInterface@webrtc@@@rtc@@@Z
    MCVAPI class
        webrtc::
            RtpVideoSenderInterface*
            CreateRtpVideoSender(std::map<uint, struct webrtc::RtpState> const&, std::map<uint, struct webrtc::RtpPayloadState> const&, struct webrtc::RtpConfig const&, int, class webrtc::Transport*, struct webrtc::RtpSenderObservers const&, class webrtc::RtcEventLog*, std::unique_ptr<class webrtc::FecController>, struct webrtc::RtpSenderFrameEncryptionConfig const&, class rtc::scoped_refptr<class webrtc::FrameTransformerInterface>);

    // symbol: ?DestroyRtpVideoSender@RtpTransportControllerSend@webrtc@@UEAAXPEAVRtpVideoSenderInterface@2@@Z
    MCVAPI void DestroyRtpVideoSender(class webrtc::RtpVideoSenderInterface*);

    // symbol: ?EnablePeriodicAlrProbing@RtpTransportControllerSend@webrtc@@UEAAX_N@Z
    MCVAPI void EnablePeriodicAlrProbing(bool);

    // symbol: ?EnsureStarted@RtpTransportControllerSend@webrtc@@UEAAXXZ
    MCVAPI void EnsureStarted();

    // symbol: ?GetBandwidthObserver@RtpTransportControllerSend@webrtc@@UEAAPEAVRtcpBandwidthObserver@2@XZ
    MCVAPI class webrtc::RtcpBandwidthObserver* GetBandwidthObserver();

    // symbol: ?GetFirstPacketTime@RtpTransportControllerSend@webrtc@@UEBA?AV?$optional@VTimestamp@webrtc@@@std@@XZ
    MCVAPI std::optional<class webrtc::Timestamp> GetFirstPacketTime() const;

    // symbol: ?GetPacerQueuingDelayMs@RtpTransportControllerSend@webrtc@@UEBA_JXZ
    MCVAPI int64 GetPacerQueuingDelayMs() const;

    // symbol: ?GetStreamFeedbackProvider@RtpTransportControllerSend@webrtc@@UEAAPEAVStreamFeedbackProvider@2@XZ
    MCVAPI class webrtc::StreamFeedbackProvider* GetStreamFeedbackProvider();

    // symbol: ?GetWorkerQueue@RtpTransportControllerSend@webrtc@@UEAAPEAVMaybeWorkerThread@2@XZ
    MCVAPI class webrtc::MaybeWorkerThread* GetWorkerQueue();

    // symbol: ?IncludeOverheadInPacedSender@RtpTransportControllerSend@webrtc@@UEAAXXZ
    MCVAPI void IncludeOverheadInPacedSender();

    // symbol: ?OnAddPacket@RtpTransportControllerSend@webrtc@@UEAAXAEBURtpPacketSendInfo@2@@Z
    MCVAPI void OnAddPacket(struct webrtc::RtpPacketSendInfo const&);

    // symbol: ?OnNetworkAvailability@RtpTransportControllerSend@webrtc@@UEAAX_N@Z
    MCVAPI void OnNetworkAvailability(bool);

    // symbol:
    // ?OnNetworkRouteChanged@RtpTransportControllerSend@webrtc@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUNetworkRoute@rtc@@@Z
    MCVAPI void OnNetworkRouteChanged(std::string_view, struct rtc::NetworkRoute const&);

    // symbol: ?OnReceivedEstimatedBitrate@RtpTransportControllerSend@webrtc@@UEAAXI@Z
    MCVAPI void OnReceivedEstimatedBitrate(uint);

    // symbol: ?OnReceivedPacket@RtpTransportControllerSend@webrtc@@UEAAXAEBUReceivedPacket@2@@Z
    MCVAPI void OnReceivedPacket(struct webrtc::ReceivedPacket const&);

    // symbol:
    // ?OnReceivedRtcpReceiverReport@RtpTransportControllerSend@webrtc@@UEAAXAEBV?$list@URTCPReportBlock@webrtc@@V?$allocator@URTCPReportBlock@webrtc@@@std@@@std@@_J1@Z
    MCVAPI void OnReceivedRtcpReceiverReport(std::list<struct webrtc::RTCPReportBlock> const&, int64, int64);

    // symbol: ?OnRemoteNetworkEstimate@RtpTransportControllerSend@webrtc@@UEAAXUNetworkStateEstimate@2@@Z
    MCVAPI void OnRemoteNetworkEstimate(struct webrtc::NetworkStateEstimate);

    // symbol: ?OnSentPacket@RtpTransportControllerSend@webrtc@@UEAAXAEBUSentPacket@rtc@@@Z
    MCVAPI void OnSentPacket(struct rtc::SentPacket const&);

    // symbol: ?OnTransportFeedback@RtpTransportControllerSend@webrtc@@UEAAXAEBVTransportFeedback@rtcp@2@@Z
    MCVAPI void OnTransportFeedback(class webrtc::rtcp::TransportFeedback const&);

    // symbol: ?OnTransportOverheadChanged@RtpTransportControllerSend@webrtc@@UEAAX_K@Z
    MCVAPI void OnTransportOverheadChanged(uint64);

    // symbol:
    // ?RegisterTargetTransferRateObserver@RtpTransportControllerSend@webrtc@@UEAAXPEAVTargetTransferRateObserver@2@@Z
    MCVAPI void RegisterTargetTransferRateObserver(class webrtc::TargetTransferRateObserver*);

    // symbol: ?SetAllocatedSendBitrateLimits@RtpTransportControllerSend@webrtc@@UEAAXUBitrateAllocationLimits@2@@Z
    MCVAPI void SetAllocatedSendBitrateLimits(struct webrtc::BitrateAllocationLimits);

    // symbol: ?SetClientBitratePreferences@RtpTransportControllerSend@webrtc@@UEAAXAEBUBitrateSettings@2@@Z
    MCVAPI void SetClientBitratePreferences(struct webrtc::BitrateSettings const&);

    // symbol: ?SetPacingFactor@RtpTransportControllerSend@webrtc@@UEAAXM@Z
    MCVAPI void SetPacingFactor(float);

    // symbol: ?SetQueueTimeLimit@RtpTransportControllerSend@webrtc@@UEAAXH@Z
    MCVAPI void SetQueueTimeLimit(int);

    // symbol: ?SetSdpBitrateParameters@RtpTransportControllerSend@webrtc@@UEAAXAEBUBitrateConstraints@2@@Z
    MCVAPI void SetSdpBitrateParameters(struct webrtc::BitrateConstraints const&);

    // symbol:
    // ?network_state_estimate_observer@RtpTransportControllerSend@webrtc@@UEAAPEAVNetworkStateEstimateObserver@2@XZ
    MCVAPI class webrtc::NetworkStateEstimateObserver* network_state_estimate_observer();

    // symbol: ?packet_router@RtpTransportControllerSend@webrtc@@UEAAPEAVPacketRouter@2@XZ
    MCVAPI class webrtc::PacketRouter* packet_router();

    // symbol: ?packet_sender@RtpTransportControllerSend@webrtc@@UEAAPEAVRtpPacketSender@2@XZ
    MCVAPI class webrtc::RtpPacketSender* packet_sender();

    // symbol: ?transport_feedback_observer@RtpTransportControllerSend@webrtc@@UEAAPEAVTransportFeedbackObserver@2@XZ
    MCVAPI class webrtc::TransportFeedbackObserver* transport_feedback_observer();

    // symbol: ??1RtpTransportControllerSend@webrtc@@UEAA@XZ
    MCVAPI ~RtpTransportControllerSend();

    // symbol: ??0RtpTransportControllerSend@webrtc@@QEAA@PEAVClock@1@AEBURtpTransportConfig@1@@Z
    MCAPI RtpTransportControllerSend(class webrtc::Clock*, struct webrtc::RtpTransportConfig const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ApplyOrLiftRelayCap@RtpTransportControllerSend@webrtc@@AEAA?AV?$optional@UBitrateConstraints@webrtc@@@std@@_N@Z
    MCAPI std::optional<struct webrtc::BitrateConstraints> ApplyOrLiftRelayCap(bool);

    // symbol: ?IsRelevantRouteChange@RtpTransportControllerSend@webrtc@@AEBA_NAEBUNetworkRoute@rtc@@0@Z
    MCAPI bool IsRelevantRouteChange(struct rtc::NetworkRoute const&, struct rtc::NetworkRoute const&) const;

    // symbol: ?MaybeCreateControllers@RtpTransportControllerSend@webrtc@@AEAAXXZ
    MCAPI void MaybeCreateControllers();

    // symbol:
    // ?OnReceivedRtcpReceiverReportBlocks@RtpTransportControllerSend@webrtc@@AEAAXAEBV?$list@URTCPReportBlock@webrtc@@V?$allocator@URTCPReportBlock@webrtc@@@std@@@std@@_J@Z
    MCAPI void OnReceivedRtcpReceiverReportBlocks(std::list<struct webrtc::RTCPReportBlock> const&, int64);

    // symbol: ?PostUpdates@RtpTransportControllerSend@webrtc@@AEAAXUNetworkControlUpdate@2@@Z
    MCAPI void PostUpdates(struct webrtc::NetworkControlUpdate);

    // symbol: ?StartProcessPeriodicTasks@RtpTransportControllerSend@webrtc@@AEAAXXZ
    MCAPI void StartProcessPeriodicTasks();

    // symbol: ?UpdateBitrateConstraints@RtpTransportControllerSend@webrtc@@AEAAXAEBUBitrateConstraints@2@@Z
    MCAPI void UpdateBitrateConstraints(struct webrtc::BitrateConstraints const&);

    // symbol: ?UpdateCongestedState@RtpTransportControllerSend@webrtc@@AEAAXXZ
    MCAPI void UpdateCongestedState();

    // symbol: ?UpdateControlState@RtpTransportControllerSend@webrtc@@AEAAXXZ
    MCAPI void UpdateControlState();

    // symbol: ?UpdateControllerWithTimeInterval@RtpTransportControllerSend@webrtc@@AEAAXXZ
    MCAPI void UpdateControllerWithTimeInterval();

    // symbol: ?UpdateInitialConstraints@RtpTransportControllerSend@webrtc@@AEAAXUTargetRateConstraints@2@@Z
    MCAPI void UpdateInitialConstraints(struct webrtc::TargetRateConstraints);

    // symbol: ?UpdateStreamsConfig@RtpTransportControllerSend@webrtc@@AEAAXXZ
    MCAPI void UpdateStreamsConfig();

    // NOLINTEND
};

}; // namespace webrtc
