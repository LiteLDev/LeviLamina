#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCPPacketType.h"
#include "mc/deps/webrtc/RtcpMode.h"
#include "mc/deps/webrtc/RtpRtcpInterface.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc::rtcp { class ReportBlock; }
namespace webrtc::rtcp { class RtcpPacket; }
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc {

class RTCPSender {
public:
    // RTCPSender inner types declare
    // clang-format off
    struct Configuration;
    struct FeedbackState;
    class PacketSender;
    class RtcpContext;
    // clang-format on

    // RTCPSender inner types define
    struct Configuration {
    public:
        // prevent constructor by default
        Configuration& operator=(Configuration const&);
        Configuration(Configuration const&);
        Configuration();

    public:
        // NOLINTBEGIN
        // symbol: ??1Configuration@RTCPSender@webrtc@@QEAA@XZ
        MCAPI ~Configuration();

        // symbol: ?FromRtpRtcpConfiguration@Configuration@RTCPSender@webrtc@@SA?AU123@AEBU1RtpRtcpInterface@3@@Z
        MCAPI static struct webrtc::RTCPSender::Configuration
        FromRtpRtcpConfiguration(struct webrtc::RtpRtcpInterface::Configuration const&);

        // NOLINTEND
    };

    struct FeedbackState {
    public:
        // prevent constructor by default
        FeedbackState& operator=(FeedbackState const&);
        FeedbackState(FeedbackState const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0FeedbackState@RTCPSender@webrtc@@QEAA@XZ
        MCAPI FeedbackState();

        // symbol: ??1FeedbackState@RTCPSender@webrtc@@QEAA@XZ
        MCAPI ~FeedbackState();

        // NOLINTEND
    };

    class PacketSender {
    public:
        // prevent constructor by default
        PacketSender& operator=(PacketSender const&);
        PacketSender(PacketSender const&);
        PacketSender();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0PacketSender@RTCPSender@webrtc@@QEAA@V?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@_K@Z
        MCAPI PacketSender(class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>, uint64);

        // symbol: ??1PacketSender@RTCPSender@webrtc@@QEAA@XZ
        MCAPI ~PacketSender();

        // NOLINTEND
    };

    class RtcpContext {
    public:
        // prevent constructor by default
        RtcpContext& operator=(RtcpContext const&);
        RtcpContext(RtcpContext const&);
        RtcpContext();
    };

public:
    // prevent constructor by default
    RTCPSender& operator=(RTCPSender const&);
    RTCPSender(RTCPSender const&);
    RTCPSender();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCPSender@webrtc@@UEAA@XZ
    virtual ~RTCPSender();

    // symbol: ??0RTCPSender@webrtc@@QEAA@UConfiguration@01@@Z
    MCAPI explicit RTCPSender(struct webrtc::RTCPSender::Configuration);

    // symbol: ?SSRC@RTCPSender@webrtc@@QEBAIXZ
    MCAPI uint SSRC() const;

    // symbol:
    // ?SendCombinedRtcpPacket@RTCPSender@webrtc@@QEAAXV?$vector@V?$unique_ptr@VRtcpPacket@rtcp@webrtc@@U?$default_delete@VRtcpPacket@rtcp@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtcpPacket@rtcp@webrtc@@U?$default_delete@VRtcpPacket@rtcp@webrtc@@@std@@@std@@@2@@std@@@Z
    MCAPI void SendCombinedRtcpPacket(std::vector<std::unique_ptr<class webrtc::rtcp::RtcpPacket>>);

    // symbol: ?SendLossNotification@RTCPSender@webrtc@@QEAAHAEBUFeedbackState@12@GG_N1@Z
    MCAPI int SendLossNotification(struct webrtc::RTCPSender::FeedbackState const&, ushort, ushort, bool, bool);

    // symbol: ?SendRTCP@RTCPSender@webrtc@@QEAAHAEBUFeedbackState@12@W4RTCPPacketType@2@HPEBG@Z
    MCAPI int SendRTCP(struct webrtc::RTCPSender::FeedbackState const&, ::webrtc::RTCPPacketType, int, ushort const*);

    // symbol: ?Sending@RTCPSender@webrtc@@QEBA_NXZ
    MCAPI bool Sending() const;

    // symbol: ?SetCNAME@RTCPSender@webrtc@@QEAAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI int SetCNAME(std::string_view);

    // symbol: ?SetLastRtpTime@RTCPSender@webrtc@@QEAAXIV?$optional@VTimestamp@webrtc@@@std@@V?$optional@C@4@@Z
    MCAPI void SetLastRtpTime(uint, std::optional<class webrtc::Timestamp>, std::optional<schar>);

    // symbol: ?SetMaxRtpPacketSize@RTCPSender@webrtc@@QEAAX_K@Z
    MCAPI void SetMaxRtpPacketSize(uint64);

    // symbol: ?SetNonSenderRttMeasurement@RTCPSender@webrtc@@QEAAX_N@Z
    MCAPI void SetNonSenderRttMeasurement(bool);

    // symbol: ?SetRTCPStatus@RTCPSender@webrtc@@QEAAXW4RtcpMode@2@@Z
    MCAPI void SetRTCPStatus(::webrtc::RtcpMode);

    // symbol: ?SetRemb@RTCPSender@webrtc@@QEAAX_JV?$vector@IV?$allocator@I@std@@@std@@@Z
    MCAPI void SetRemb(int64, std::vector<uint>);

    // symbol: ?SetRemoteSSRC@RTCPSender@webrtc@@QEAAXI@Z
    MCAPI void SetRemoteSSRC(uint);

    // symbol: ?SetRtpClockRate@RTCPSender@webrtc@@QEAAXCH@Z
    MCAPI void SetRtpClockRate(schar, int);

    // symbol: ?SetSendingStatus@RTCPSender@webrtc@@QEAAXAEBUFeedbackState@12@_N@Z
    MCAPI void SetSendingStatus(struct webrtc::RTCPSender::FeedbackState const&, bool);

    // symbol: ?SetSsrc@RTCPSender@webrtc@@QEAAXI@Z
    MCAPI void SetSsrc(uint);

    // symbol: ?SetTimestampOffset@RTCPSender@webrtc@@QEAAXI@Z
    MCAPI void SetTimestampOffset(uint);

    // symbol:
    // ?SetTmmbn@RTCPSender@webrtc@@QEAAXV?$vector@VTmmbItem@rtcp@webrtc@@V?$allocator@VTmmbItem@rtcp@webrtc@@@std@@@std@@@Z
    MCAPI void SetTmmbn(std::vector<class webrtc::rtcp::TmmbItem>);

    // symbol: ?SetVideoBitrateAllocation@RTCPSender@webrtc@@QEAAXAEBVVideoBitrateAllocation@2@@Z
    MCAPI void SetVideoBitrateAllocation(class webrtc::VideoBitrateAllocation const&);

    // symbol: ?Status@RTCPSender@webrtc@@QEBA?AW4RtcpMode@2@XZ
    MCAPI ::webrtc::RtcpMode Status() const;

    // symbol: ?TimeToSendRTCPReport@RTCPSender@webrtc@@QEBA_N_N@Z
    MCAPI bool TimeToSendRTCPReport(bool) const;

    // symbol: ?UnsetRemb@RTCPSender@webrtc@@QEAAXXZ
    MCAPI void UnsetRemb();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AllVolatileFlagsConsumed@RTCPSender@webrtc@@AEBA_NXZ
    MCAPI bool AllVolatileFlagsConsumed() const;

    // symbol: ?BuildBYE@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildBYE(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildExtendedReports@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void
    BuildExtendedReports(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildFIR@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildFIR(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildLossNotification@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void
    BuildLossNotification(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildNACK@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildNACK(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildPLI@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildPLI(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildREMB@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildREMB(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildRR@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildRR(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildSDES@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildSDES(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildSR@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildSR(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildTMMBN@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildTMMBN(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?BuildTMMBR@RTCPSender@webrtc@@AEAAXAEBVRtcpContext@12@AEAVPacketSender@12@@Z
    MCAPI void BuildTMMBR(class webrtc::RTCPSender::RtcpContext const&, class webrtc::RTCPSender::PacketSender&);

    // symbol:
    // ?CheckAndUpdateLayerStructure@RTCPSender@webrtc@@AEBA?AV?$optional@VVideoBitrateAllocation@webrtc@@@std@@AEBVVideoBitrateAllocation@2@@Z
    MCAPI std::optional<class webrtc::VideoBitrateAllocation>
          CheckAndUpdateLayerStructure(class webrtc::VideoBitrateAllocation const&) const;

    // symbol:
    // ?ComputeCompoundRTCPPacket@RTCPSender@webrtc@@AEAA?AV?$optional@H@std@@AEBUFeedbackState@12@W4RTCPPacketType@2@HPEBGAEAVPacketSender@12@@Z
    MCAPI std::optional<int>
    ComputeCompoundRTCPPacket(struct webrtc::RTCPSender::FeedbackState const&, ::webrtc::RTCPPacketType, int, ushort const*, class webrtc::RTCPSender::PacketSender&);

    // symbol: ?ConsumeFlag@RTCPSender@webrtc@@AEAA_NI_N@Z
    MCAPI bool ConsumeFlag(uint, bool);

    // symbol:
    // ?CreateReportBlocks@RTCPSender@webrtc@@AEAA?AV?$vector@VReportBlock@rtcp@webrtc@@V?$allocator@VReportBlock@rtcp@webrtc@@@std@@@std@@AEBUFeedbackState@12@@Z
    MCAPI std::vector<class webrtc::rtcp::ReportBlock>
          CreateReportBlocks(struct webrtc::RTCPSender::FeedbackState const&);

    // symbol: ?IsFlagPresent@RTCPSender@webrtc@@AEBA_NI@Z
    MCAPI bool IsFlagPresent(uint) const;

    // symbol: ?PrepareReport@RTCPSender@webrtc@@AEAAXAEBUFeedbackState@12@@Z
    MCAPI void PrepareReport(struct webrtc::RTCPSender::FeedbackState const&);

    // symbol: ?SetFlag@RTCPSender@webrtc@@AEAAXI_N@Z
    MCAPI void SetFlag(uint, bool);

    // symbol: ?SetNextRtcpSendEvaluationDuration@RTCPSender@webrtc@@AEAAXVTimeDelta@2@@Z
    MCAPI void SetNextRtcpSendEvaluationDuration(class webrtc::TimeDelta);

    // NOLINTEND
};

}; // namespace webrtc
