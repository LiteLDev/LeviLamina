#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCPPacketType.h"
#include "mc/deps/webrtc/RTCPSender.h"
#include "mc/deps/webrtc/RtcpMode.h"
#include "mc/deps/webrtc/RtpRtcpInterface.h"
#include "mc/deps/webrtc/RtpSequenceNumberMap.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTPSender; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpSendRates; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct RTCPReportBlock; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct StreamDataCounters; }
namespace webrtc::rtcp { class RtcpPacket; }
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc {

class ModuleRtpRtcpImpl2 {
public:
    // ModuleRtpRtcpImpl2 inner types declare
    // clang-format off
    struct RtpSenderContext;
    // clang-format on

    // ModuleRtpRtcpImpl2 inner types define
    struct RtpSenderContext {
    public:
        // prevent constructor by default
        RtpSenderContext& operator=(RtpSenderContext const&);
        RtpSenderContext(RtpSenderContext const&);
        RtpSenderContext();

    public:
        // NOLINTBEGIN
        // symbol: ??0RtpSenderContext@ModuleRtpRtcpImpl2@webrtc@@QEAA@AEBUConfiguration@RtpRtcpInterface@2@@Z
        MCAPI explicit RtpSenderContext(struct webrtc::RtpRtcpInterface::Configuration const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ModuleRtpRtcpImpl2& operator=(ModuleRtpRtcpImpl2 const&);
    ModuleRtpRtcpImpl2(ModuleRtpRtcpImpl2 const&);
    ModuleRtpRtcpImpl2();

public:
    // NOLINTBEGIN
    // symbol: ?DeRegisterSendPayload@ModuleRtpRtcpImpl2@webrtc@@UEAAHC@Z
    MCVAPI int DeRegisterSendPayload(schar);

    // symbol:
    // ?DeregisterSendRtpHeaderExtension@ModuleRtpRtcpImpl2@webrtc@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void DeregisterSendRtpHeaderExtension(std::string_view);

    // symbol: ?ExpectedPerPacketOverhead@ModuleRtpRtcpImpl2@webrtc@@UEBA_KXZ
    MCVAPI uint64 ExpectedPerPacketOverhead() const;

    // symbol: ?ExpectedRetransmissionTimeMs@ModuleRtpRtcpImpl2@webrtc@@UEBA_JXZ
    MCVAPI int64 ExpectedRetransmissionTimeMs() const;

    // symbol:
    // ?FetchFecPackets@ModuleRtpRtcpImpl2@webrtc@@UEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> FetchFecPackets();

    // symbol: ?FlexfecSsrc@ModuleRtpRtcpImpl2@webrtc@@UEBA?AV?$optional@I@std@@XZ
    MCVAPI std::optional<uint> FlexfecSsrc() const;

    // symbol:
    // ?GeneratePadding@ModuleRtpRtcpImpl2@webrtc@@UEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@_K@Z
    MCVAPI std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> GeneratePadding(uint64);

    // symbol:
    // ?GetLatestReportBlockData@ModuleRtpRtcpImpl2@webrtc@@UEBA?AV?$vector@VReportBlockData@webrtc@@V?$allocator@VReportBlockData@webrtc@@@std@@@std@@XZ
    MCVAPI std::vector<class webrtc::ReportBlockData> GetLatestReportBlockData() const;

    // symbol:
    // ?GetNonSenderRttStats@ModuleRtpRtcpImpl2@webrtc@@UEBA?AV?$optional@UNonSenderRttStats@RtpRtcpInterface@webrtc@@@std@@XZ
    MCVAPI std::optional<struct webrtc::RtpRtcpInterface::NonSenderRttStats> GetNonSenderRttStats() const;

    // symbol: ?GetRtpState@ModuleRtpRtcpImpl2@webrtc@@UEBA?AURtpState@2@XZ
    MCVAPI struct webrtc::RtpState GetRtpState() const;

    // symbol: ?GetRtxState@ModuleRtpRtcpImpl2@webrtc@@UEBA?AURtpState@2@XZ
    MCVAPI struct webrtc::RtpState GetRtxState() const;

    // symbol: ?GetSendRates@ModuleRtpRtcpImpl2@webrtc@@UEBA?AVRtpSendRates@2@XZ
    MCVAPI class webrtc::RtpSendRates GetSendRates() const;

    // symbol: ?GetSendStreamDataCounters@ModuleRtpRtcpImpl2@webrtc@@UEBAXPEAUStreamDataCounters@2@0@Z
    MCVAPI void GetSendStreamDataCounters(struct webrtc::StreamDataCounters*, struct webrtc::StreamDataCounters*) const;

    // symbol:
    // ?GetSenderReportStats@ModuleRtpRtcpImpl2@webrtc@@UEBA?AV?$optional@USenderReportStats@RtpRtcpInterface@webrtc@@@std@@XZ
    MCVAPI std::optional<struct webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const;

    // symbol:
    // ?GetSentRtpPacketInfos@ModuleRtpRtcpImpl2@webrtc@@UEBA?AV?$vector@UInfo@RtpSequenceNumberMap@webrtc@@V?$allocator@UInfo@RtpSequenceNumberMap@webrtc@@@std@@@std@@V?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    MCVAPI std::vector<struct webrtc::RtpSequenceNumberMap::Info>
           GetSentRtpPacketInfos(class rtc::ArrayView<ushort const, -4711>) const;

    // symbol: ?IncomingRtcpPacket@ModuleRtpRtcpImpl2@webrtc@@UEAAXPEBE_K@Z
    MCVAPI void IncomingRtcpPacket(uchar const*, uint64);

    // symbol: ?IsAudioConfigured@ModuleRtpRtcpImpl2@webrtc@@UEBA_NXZ
    MCVAPI bool IsAudioConfigured() const;

    // symbol: ?MaxRtpPacketSize@ModuleRtpRtcpImpl2@webrtc@@UEBA_KXZ
    MCVAPI uint64 MaxRtpPacketSize() const;

    // symbol: ?OnAbortedRetransmissions@ModuleRtpRtcpImpl2@webrtc@@UEAAXV?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    MCVAPI void OnAbortedRetransmissions(class rtc::ArrayView<ushort const, -4711>);

    // symbol: ?OnPacketSendingThreadSwitched@ModuleRtpRtcpImpl2@webrtc@@UEAAXXZ
    MCVAPI void OnPacketSendingThreadSwitched();

    // symbol: ?OnPacketsAcknowledged@ModuleRtpRtcpImpl2@webrtc@@UEAAXV?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    MCVAPI void OnPacketsAcknowledged(class rtc::ArrayView<ushort const, -4711>);

    // symbol: ?OnReceivedNack@ModuleRtpRtcpImpl2@webrtc@@UEAAXAEBV?$vector@GV?$allocator@G@std@@@std@@@Z
    MCVAPI void OnReceivedNack(std::vector<ushort> const&);

    // symbol:
    // ?OnReceivedRtcpReportBlocks@ModuleRtpRtcpImpl2@webrtc@@UEAAXAEBV?$list@URTCPReportBlock@webrtc@@V?$allocator@URTCPReportBlock@webrtc@@@std@@@std@@@Z
    MCVAPI void OnReceivedRtcpReportBlocks(std::list<struct webrtc::RTCPReportBlock> const&);

    // symbol: ?OnRequestSendReport@ModuleRtpRtcpImpl2@webrtc@@UEAAXXZ
    MCVAPI void OnRequestSendReport();

    // symbol: ?OnSendingRtpFrame@ModuleRtpRtcpImpl2@webrtc@@UEAA_NI_JH_N@Z
    MCVAPI bool OnSendingRtpFrame(uint, int64, int, bool);

    // symbol: ?RTCP@ModuleRtpRtcpImpl2@webrtc@@UEBA?AW4RtcpMode@2@XZ
    MCVAPI ::webrtc::RtcpMode RTCP() const;

    // symbol: ?RTT@ModuleRtpRtcpImpl2@webrtc@@UEBAHIPEA_J000@Z
    MCVAPI int RTT(uint, int64*, int64*, int64*, int64*) const;

    // symbol:
    // ?RegisterRtpHeaderExtension@ModuleRtpRtcpImpl2@webrtc@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
    MCVAPI void RegisterRtpHeaderExtension(std::string_view, int);

    // symbol: ?RegisterSendPayloadFrequency@ModuleRtpRtcpImpl2@webrtc@@UEAAXHH@Z
    MCVAPI void RegisterSendPayloadFrequency(int, int);

    // symbol: ?RemoteNTP@ModuleRtpRtcpImpl2@webrtc@@UEBAHPEAI0000@Z
    MCVAPI int RemoteNTP(uint*, uint*, uint*, uint*, uint*) const;

    // symbol: ?RtpSender@ModuleRtpRtcpImpl2@webrtc@@UEAAPEAVRTPSender@2@XZ
    MCVAPI class webrtc::RTPSender* RtpSender();

    // symbol: ?RtpSender@ModuleRtpRtcpImpl2@webrtc@@UEBAPEBVRTPSender@2@XZ
    MCVAPI class webrtc::RTPSender const* RtpSender() const;

    // symbol: ?RtxSendStatus@ModuleRtpRtcpImpl2@webrtc@@UEBAHXZ
    MCVAPI int RtxSendStatus() const;

    // symbol: ?RtxSsrc@ModuleRtpRtcpImpl2@webrtc@@UEBA?AV?$optional@I@std@@XZ
    MCVAPI std::optional<uint> RtxSsrc() const;

    // symbol: ?SSRC@ModuleRtpRtcpImpl2@webrtc@@UEBAIXZ
    MCVAPI uint SSRC() const;

    // symbol:
    // ?SendCombinedRtcpPacket@ModuleRtpRtcpImpl2@webrtc@@UEAAXV?$vector@V?$unique_ptr@VRtcpPacket@rtcp@webrtc@@U?$default_delete@VRtcpPacket@rtcp@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtcpPacket@rtcp@webrtc@@U?$default_delete@VRtcpPacket@rtcp@webrtc@@@std@@@std@@@2@@std@@@Z
    MCVAPI void SendCombinedRtcpPacket(std::vector<std::unique_ptr<class webrtc::rtcp::RtcpPacket>>);

    // symbol: ?SendLossNotification@ModuleRtpRtcpImpl2@webrtc@@UEAAHGG_N0@Z
    MCVAPI int SendLossNotification(ushort, ushort, bool, bool);

    // symbol: ?SendNACK@ModuleRtpRtcpImpl2@webrtc@@UEAAHPEBGG@Z
    MCVAPI int SendNACK(ushort const*, ushort);

    // symbol: ?SendNack@ModuleRtpRtcpImpl2@webrtc@@UEAAXAEBV?$vector@GV?$allocator@G@std@@@std@@@Z
    MCVAPI void SendNack(std::vector<ushort> const&);

    // symbol: ?SendRTCP@ModuleRtpRtcpImpl2@webrtc@@UEAAHW4RTCPPacketType@2@@Z
    MCVAPI int SendRTCP(::webrtc::RTCPPacketType);

    // symbol: ?Sending@ModuleRtpRtcpImpl2@webrtc@@UEBA_NXZ
    MCVAPI bool Sending() const;

    // symbol: ?SendingMedia@ModuleRtpRtcpImpl2@webrtc@@UEBA_NXZ
    MCVAPI bool SendingMedia() const;

    // symbol: ?SequenceNumber@ModuleRtpRtcpImpl2@webrtc@@UEBAGXZ
    MCVAPI ushort SequenceNumber() const;

    // symbol: ?SetAsPartOfAllocation@ModuleRtpRtcpImpl2@webrtc@@UEAAX_N@Z
    MCVAPI void SetAsPartOfAllocation(bool);

    // symbol: ?SetCNAME@ModuleRtpRtcpImpl2@webrtc@@UEAAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI int SetCNAME(std::string_view);

    // symbol: ?SetExtmapAllowMixed@ModuleRtpRtcpImpl2@webrtc@@UEAAX_N@Z
    MCVAPI void SetExtmapAllowMixed(bool);

    // symbol: ?SetFecProtectionParams@ModuleRtpRtcpImpl2@webrtc@@UEAAXAEBUFecProtectionParams@2@0@Z
    MCVAPI void
    SetFecProtectionParams(struct webrtc::FecProtectionParams const&, struct webrtc::FecProtectionParams const&);

    // symbol: ?SetLocalSsrc@ModuleRtpRtcpImpl2@webrtc@@UEAAXI@Z
    MCVAPI void SetLocalSsrc(uint);

    // symbol: ?SetMaxRtpPacketSize@ModuleRtpRtcpImpl2@webrtc@@UEAAX_K@Z
    MCVAPI void SetMaxRtpPacketSize(uint64);

    // symbol: ?SetMid@ModuleRtpRtcpImpl2@webrtc@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void SetMid(std::string_view);

    // symbol: ?SetNonSenderRttMeasurement@ModuleRtpRtcpImpl2@webrtc@@UEAAX_N@Z
    MCVAPI void SetNonSenderRttMeasurement(bool);

    // symbol: ?SetRTCPStatus@ModuleRtpRtcpImpl2@webrtc@@UEAAXW4RtcpMode@2@@Z
    MCVAPI void SetRTCPStatus(::webrtc::RtcpMode);

    // symbol: ?SetRemb@ModuleRtpRtcpImpl2@webrtc@@UEAAX_JV?$vector@IV?$allocator@I@std@@@std@@@Z
    MCVAPI void SetRemb(int64, std::vector<uint>);

    // symbol: ?SetRemoteSSRC@ModuleRtpRtcpImpl2@webrtc@@UEAAXI@Z
    MCVAPI void SetRemoteSSRC(uint);

    // symbol: ?SetRtpState@ModuleRtpRtcpImpl2@webrtc@@UEAAXAEBURtpState@2@@Z
    MCVAPI void SetRtpState(struct webrtc::RtpState const&);

    // symbol: ?SetRtxSendPayloadType@ModuleRtpRtcpImpl2@webrtc@@UEAAXHH@Z
    MCVAPI void SetRtxSendPayloadType(int, int);

    // symbol: ?SetRtxSendStatus@ModuleRtpRtcpImpl2@webrtc@@UEAAXH@Z
    MCVAPI void SetRtxSendStatus(int);

    // symbol: ?SetRtxState@ModuleRtpRtcpImpl2@webrtc@@UEAAXAEBURtpState@2@@Z
    MCVAPI void SetRtxState(struct webrtc::RtpState const&);

    // symbol: ?SetSendingMediaStatus@ModuleRtpRtcpImpl2@webrtc@@UEAAX_N@Z
    MCVAPI void SetSendingMediaStatus(bool);

    // symbol: ?SetSendingStatus@ModuleRtpRtcpImpl2@webrtc@@UEAAH_N@Z
    MCVAPI int SetSendingStatus(bool);

    // symbol: ?SetSequenceNumber@ModuleRtpRtcpImpl2@webrtc@@UEAAXG@Z
    MCVAPI void SetSequenceNumber(ushort);

    // symbol: ?SetStartTimestamp@ModuleRtpRtcpImpl2@webrtc@@UEAAXI@Z
    MCVAPI void SetStartTimestamp(uint);

    // symbol: ?SetStorePacketsStatus@ModuleRtpRtcpImpl2@webrtc@@UEAAX_NG@Z
    MCVAPI void SetStorePacketsStatus(bool, ushort);

    // symbol:
    // ?SetTmmbn@ModuleRtpRtcpImpl2@webrtc@@UEAAXV?$vector@VTmmbItem@rtcp@webrtc@@V?$allocator@VTmmbItem@rtcp@webrtc@@@std@@@std@@@Z
    MCVAPI void SetTmmbn(std::vector<class webrtc::rtcp::TmmbItem>);

    // symbol: ?SetVideoBitrateAllocation@ModuleRtpRtcpImpl2@webrtc@@UEAAXAEBVVideoBitrateAllocation@2@@Z
    MCVAPI void SetVideoBitrateAllocation(class webrtc::VideoBitrateAllocation const&);

    // symbol: ?StartTimestamp@ModuleRtpRtcpImpl2@webrtc@@UEBAIXZ
    MCVAPI uint StartTimestamp() const;

    // symbol: ?SupportsPadding@ModuleRtpRtcpImpl2@webrtc@@UEBA_NXZ
    MCVAPI bool SupportsPadding() const;

    // symbol: ?SupportsRtxPayloadPadding@ModuleRtpRtcpImpl2@webrtc@@UEBA_NXZ
    MCVAPI bool SupportsRtxPayloadPadding() const;

    // symbol: ?TrySendPacket@ModuleRtpRtcpImpl2@webrtc@@UEAA_NPEAVRtpPacketToSend@2@AEBUPacedPacketInfo@2@@Z
    MCVAPI bool TrySendPacket(class webrtc::RtpPacketToSend*, struct webrtc::PacedPacketInfo const&);

    // symbol: ?UnsetRemb@ModuleRtpRtcpImpl2@webrtc@@UEAAXXZ
    MCVAPI void UnsetRemb();

    // symbol: ??1ModuleRtpRtcpImpl2@webrtc@@UEAA@XZ
    MCVAPI ~ModuleRtpRtcpImpl2();

    // symbol: ?GetFeedbackState@ModuleRtpRtcpImpl2@webrtc@@QEAA?AUFeedbackState@RTCPSender@2@XZ
    MCAPI struct webrtc::RTCPSender::FeedbackState GetFeedbackState();

    // symbol: ??0ModuleRtpRtcpImpl2@webrtc@@QEAA@AEBUConfiguration@RtpRtcpInterface@1@@Z
    MCAPI explicit ModuleRtpRtcpImpl2(struct webrtc::RtpRtcpInterface::Configuration const&);

    // symbol:
    // ?Create@ModuleRtpRtcpImpl2@webrtc@@SA?AV?$unique_ptr@VModuleRtpRtcpImpl2@webrtc@@U?$default_delete@VModuleRtpRtcpImpl2@webrtc@@@std@@@std@@AEBUConfiguration@RtpRtcpInterface@2@@Z
    MCAPI static std::unique_ptr<class webrtc::ModuleRtpRtcpImpl2>
    Create(struct webrtc::RtpRtcpInterface::Configuration const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?MaybeSendRtcp@ModuleRtpRtcpImpl2@webrtc@@AEAAXXZ
    MCAPI void MaybeSendRtcp();

    // symbol: ?MaybeSendRtcpAtOrAfterTimestamp@ModuleRtpRtcpImpl2@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void MaybeSendRtcpAtOrAfterTimestamp(class webrtc::Timestamp);

    // symbol: ?PeriodicUpdate@ModuleRtpRtcpImpl2@webrtc@@AEAAXXZ
    MCAPI void PeriodicUpdate();

    // symbol: ?ScheduleMaybeSendRtcpAtOrAfterTimestamp@ModuleRtpRtcpImpl2@webrtc@@AEAAXVTimestamp@2@VTimeDelta@2@@Z
    MCAPI void ScheduleMaybeSendRtcpAtOrAfterTimestamp(class webrtc::Timestamp, class webrtc::TimeDelta);

    // symbol: ?ScheduleRtcpSendEvaluation@ModuleRtpRtcpImpl2@webrtc@@AEAAXVTimeDelta@2@@Z
    MCAPI void ScheduleRtcpSendEvaluation(class webrtc::TimeDelta);

    // symbol: ?StorePackets@ModuleRtpRtcpImpl2@webrtc@@AEBA_NXZ
    MCAPI bool StorePackets() const;

    // symbol: ?TimeToSendFullNackList@ModuleRtpRtcpImpl2@webrtc@@AEBA_N_J@Z
    MCAPI bool TimeToSendFullNackList(int64) const;

    // symbol: ?rtt_ms@ModuleRtpRtcpImpl2@webrtc@@AEBA_JXZ
    MCAPI int64 rtt_ms() const;

    // symbol: ?set_rtt_ms@ModuleRtpRtcpImpl2@webrtc@@AEAAX_J@Z
    MCAPI void set_rtt_ms(int64);

    // NOLINTEND
};

}; // namespace webrtc
