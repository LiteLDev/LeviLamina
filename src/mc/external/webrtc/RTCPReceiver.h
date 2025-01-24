#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpRtcpInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ModuleRtpRtcpImpl2; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class ReportBlock; }
namespace webrtc::rtcp { class Rrtr; }
namespace webrtc::rtcp { class TargetBitrate; }
namespace webrtc::rtcp { class TmmbItem; }
namespace webrtc::rtcp { struct ReceiveTimeInfo; }
// clang-format on

namespace webrtc {

struct RTCPReceiver {
public:
    // RTCPReceiver inner types declare
    // clang-format off
    class NonSenderRttStats;
    struct PacketInformation;
    struct RegisteredSsrcs;
    class RttStats;
    struct TmmbrInformation;
    // clang-format on

    // RTCPReceiver inner types define
    class NonSenderRttStats {};

    struct PacketInformation {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PacketInformation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RegisteredSsrcs {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RegisteredSsrcs(bool, ::webrtc::RtpRtcpInterface::Configuration const&);

        MCAPI bool contains(uint) const;

        MCAPI uint media_ssrc() const;

        MCAPI void set_media_ssrc(uint);

        MCAPI ~RegisteredSsrcs();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(bool, ::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class RttStats {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void AddRtt(::webrtc::TimeDelta);
        // NOLINTEND
    };

    struct TmmbrInformation {
    public:
        // prevent constructor by default
        TmmbrInformation& operator=(TmmbrInformation const&);
        TmmbrInformation(TmmbrInformation const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI TmmbrInformation(::webrtc::RTCPReceiver::TmmbrInformation&&);

        MCAPI ~TmmbrInformation();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::RTCPReceiver::TmmbrInformation&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::webrtc::TimeDelta> AverageRtt() const;

    MCAPI ::std::vector<::webrtc::rtcp::TmmbItem> BoundingSet(bool*);

    MCAPI ::std::vector<::webrtc::rtcp::ReceiveTimeInfo> ConsumeReceivedXrReferenceTimeInfo();

    MCAPI ::webrtc::RTCPReceiver::TmmbrInformation* FindOrCreateTmmbrInfo(uint);

    MCAPI ::std::optional<::webrtc::TimeDelta> GetAndResetXrRrRtt();

    MCAPI ::std::vector<::webrtc::ReportBlockData> GetLatestReportBlockData() const;

    MCAPI ::webrtc::RTCPReceiver::NonSenderRttStats GetNonSenderRTT() const;

    MCAPI ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const;

    MCAPI ::webrtc::RTCPReceiver::TmmbrInformation* GetTmmbrInformation(uint);

    MCAPI bool HandleApp(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleBye(::webrtc::rtcp::CommonHeader const&);

    MCAPI bool HandleFir(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleNack(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandlePli(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI void HandlePsfbApp(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleReceiverReport(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI void HandleReportBlock(::webrtc::rtcp::ReportBlock const&, ::webrtc::RTCPReceiver::PacketInformation*, uint);

    MCAPI bool HandleSdes(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleSenderReport(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleSrReq(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleTmmbn(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleTmmbr(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI void HandleTransportFeedback(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI bool HandleXr(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*, bool&, uint&);

    MCAPI void HandleXrDlrrReportBlock(uint, ::webrtc::rtcp::ReceiveTimeInfo const&);

    MCAPI void HandleXrReceiveReferenceTime(uint, ::webrtc::rtcp::Rrtr const&);

    MCAPI void
    HandleXrTargetBitrate(uint, ::webrtc::rtcp::TargetBitrate const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI void IncomingPacket(::rtc::ArrayView<uchar const>);

    MCAPI ::std::optional<::webrtc::TimeDelta> LastRtt() const;

    MCAPI void NotifyTmmbrUpdated();

    MCAPI ::std::optional<::webrtc::TimeDelta> OnPeriodicRttUpdate(::webrtc::Timestamp, bool);

    MCAPI bool ParseCompoundPacket(::rtc::ArrayView<uchar const>, ::webrtc::RTCPReceiver::PacketInformation*);

    MCAPI RTCPReceiver(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::ModuleRtpRtcpImpl2*);

    MCAPI bool RtcpRrSequenceNumberTimeoutLocked(::webrtc::Timestamp);

    MCAPI bool RtcpRrTimeoutLocked(::webrtc::Timestamp);

    MCAPI void SetNonSenderRttMeasurement(bool);

    MCAPI void SetRemoteSSRC(uint);

    MCAPI ::std::vector<::webrtc::rtcp::TmmbItem> TmmbrReceived();

    MCAPI void TriggerCallbacksFromRtcpPacket(::webrtc::RTCPReceiver::PacketInformation const&);

    MCAPI void UpdateTmmbrRemoteIsAlive(uint);

    MCAPI uint local_media_ssrc() const;

    MCAPI void set_local_media_ssrc(uint);

    MCAPI ~RTCPReceiver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::ModuleRtpRtcpImpl2*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
