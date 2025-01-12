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
    class RtcpContext;
    // clang-format on

    // RTCPSender inner types define
    struct Configuration {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Configuration();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::webrtc::RTCPSender::Configuration
        FromRtpRtcpConfiguration(::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct FeedbackState {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FeedbackState();

        MCAPI ~FeedbackState();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class PacketSender {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PacketSender(::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>, uint64);

        MCAPI ~PacketSender();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>, uint64);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class RtcpContext {};

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool AllVolatileFlagsConsumed() const;

    MCAPI void BuildBYE(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildExtendedReports(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildFIR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildLossNotification(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildNACK(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildPLI(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildREMB(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildRR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildSDES(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildSR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildTMMBN(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI void BuildTMMBR(::webrtc::RTCPSender::RtcpContext const&, ::webrtc::RTCPSender::PacketSender&);

    MCAPI ::std::optional<::webrtc::VideoBitrateAllocation>
    CheckAndUpdateLayerStructure(::webrtc::VideoBitrateAllocation const&) const;

    MCAPI ::std::optional<int>
    ComputeCompoundRTCPPacket(::webrtc::RTCPSender::FeedbackState const&, ::webrtc::RTCPPacketType, int, ushort const*, ::webrtc::RTCPSender::PacketSender&);

    MCAPI ::webrtc::TimeDelta ComputeTimeUntilNextReport(::webrtc::DataRate);

    MCAPI bool ConsumeFlag(uint, bool);

    MCAPI ::std::vector<::webrtc::rtcp::ReportBlock> CreateReportBlocks(::webrtc::RTCPSender::FeedbackState const&);

    MCAPI bool IsFlagPresent(uint) const;

    MCAPI void PrepareReport(::webrtc::RTCPSender::FeedbackState const&);

    MCAPI explicit RTCPSender(::webrtc::RTCPSender::Configuration);

    MCAPI uint SSRC() const;

    MCAPI void SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>>);

    MCAPI int SendLossNotification(::webrtc::RTCPSender::FeedbackState const&, ushort, ushort, bool, bool);

    MCAPI int SendRTCP(::webrtc::RTCPSender::FeedbackState const&, ::webrtc::RTCPPacketType, int, ushort const*);

    MCAPI bool Sending() const;

    MCAPI int SetCNAME(::std::string_view);

    MCAPI void SetFlag(uint, bool);

    MCAPI void SetLastRtpTime(uint, ::std::optional<::webrtc::Timestamp>, ::std::optional<schar>);

    MCAPI void SetMaxRtpPacketSize(uint64);

    MCAPI void SetNextRtcpSendEvaluationDuration(::webrtc::TimeDelta);

    MCAPI void SetNonSenderRttMeasurement(bool);

    MCAPI void SetRTCPStatus(::webrtc::RtcpMode);

    MCAPI void SetRemb(int64, ::std::vector<uint>);

    MCAPI void SetRemoteSSRC(uint);

    MCAPI void SetRtpClockRate(schar, int);

    MCAPI void SetSendingStatus(::webrtc::RTCPSender::FeedbackState const&, bool);

    MCAPI void SetSsrc(uint);

    MCAPI void SetTimestampOffset(uint);

    MCAPI void SetTmmbn(::std::vector<::webrtc::rtcp::TmmbItem>);

    MCAPI void SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const&);

    MCAPI ::webrtc::RtcpMode Status() const;

    MCAPI bool TimeToSendRTCPReport(bool) const;

    MCAPI void UnsetRemb();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RTCPSender::Configuration);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
