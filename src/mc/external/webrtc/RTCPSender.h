#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/RTCPPacketType.h"
#include "mc/external/webrtc/RtcpMode.h"
#include "mc/external/webrtc/RtpRtcpInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
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
    struct ReportFlag;
    class RtcpContext;
    // clang-format on

    // RTCPSender inner types define
    struct Configuration {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Configuration();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::webrtc::RTCPSender::Configuration
        FromRtpRtcpConfiguration(::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FeedbackState {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI FeedbackState();

        MCNAPI ~FeedbackState();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class PacketSender {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PacketSender(::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>, uint64);

        MCNAPI ~PacketSender();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>, uint64);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ReportFlag {};

    class RtcpContext {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AllVolatileFlagsConsumed() const;

    MCNAPI void BuildBYE(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildExtendedReports(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildFIR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildLossNotification(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildNACK(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildPLI(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildREMB(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildRR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildSDES(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildSR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildTMMBN(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI void BuildTMMBR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI ::std::optional<::webrtc::VideoBitrateAllocation>
    CheckAndUpdateLayerStructure(::webrtc::VideoBitrateAllocation const&) const;

    MCNAPI ::std::optional<int>
    ComputeCompoundRTCPPacket(::webrtc::RTCPSender::FeedbackState const&, ::webrtc::RTCPPacketType, int, ushort const*, ::webrtc::RTCPSender::PacketSender&);

    MCNAPI ::webrtc::TimeDelta ComputeTimeUntilNextReport(::webrtc::DataRate);

    MCNAPI bool ConsumeFlag(uint, bool);

    MCNAPI ::std::vector<::webrtc::rtcp::ReportBlock> CreateReportBlocks(::webrtc::RTCPSender::FeedbackState const&);

    MCNAPI bool IsFlagPresent(uint) const;

    MCNAPI void PrepareReport(::webrtc::RTCPSender::FeedbackState const&);

    MCNAPI explicit RTCPSender(::webrtc::RTCPSender::Configuration);

    MCNAPI uint SSRC() const;

    MCNAPI void SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>>);

    MCNAPI int SendLossNotification(::webrtc::RTCPSender::FeedbackState const&, ushort, ushort, bool, bool);

    MCNAPI int SendRTCP(::webrtc::RTCPSender::FeedbackState const&, ::webrtc::RTCPPacketType, int, ushort const*);

    MCNAPI bool Sending() const;

    MCNAPI int SetCNAME(::std::string_view);

    MCNAPI void SetFlag(uint, bool);

    MCNAPI void SetLastRtpTime(uint, ::std::optional<::webrtc::Timestamp>, ::std::optional<schar>);

    MCNAPI void SetMaxRtpPacketSize(uint64);

    MCNAPI void SetNextRtcpSendEvaluationDuration(::webrtc::TimeDelta);

    MCNAPI void SetNonSenderRttMeasurement(bool);

    MCNAPI void SetRTCPStatus(::webrtc::RtcpMode);

    MCNAPI void SetRemb(int64, ::std::vector<uint>);

    MCNAPI void SetRemoteSSRC(uint);

    MCNAPI void SetRtpClockRate(schar, int);

    MCNAPI void SetSendingStatus(::webrtc::RTCPSender::FeedbackState const&, bool);

    MCNAPI void SetSsrc(uint);

    MCNAPI void SetTimestampOffset(uint);

    MCNAPI void SetTmmbn(::std::vector<::webrtc::rtcp::TmmbItem>);

    MCNAPI void SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const&);

    MCNAPI ::webrtc::RtcpMode Status() const;

    MCNAPI bool TimeToSendRTCPReport(bool) const;

    MCNAPI void UnsetRemb();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCPSender::Configuration);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
