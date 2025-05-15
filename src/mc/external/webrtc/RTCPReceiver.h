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
    struct LastFirStatus;
    class NonSenderRttStats;
    struct PacketInformation;
    struct RegisteredSsrcs;
    struct RrtrInformation;
    class RttStats;
    struct TmmbrInformation;
    // clang-format on

    // RTCPReceiver inner types define
    struct LastFirStatus {};

    class NonSenderRttStats {};

    struct PacketInformation {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PacketInformation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RegisteredSsrcs {
    public:
        // prevent constructor by default
        RegisteredSsrcs();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RegisteredSsrcs(bool, ::webrtc::RtpRtcpInterface::Configuration const&);

        MCNAPI bool contains(uint) const;

        MCNAPI uint media_ssrc() const;

        MCNAPI void set_media_ssrc(uint);

        MCNAPI ~RegisteredSsrcs();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(bool, ::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RrtrInformation {};

    class RttStats {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void AddRtt(::webrtc::TimeDelta);
        // NOLINTEND
    };

    struct TmmbrInformation {
    public:
        // TmmbrInformation inner types declare
        // clang-format off
        struct TimedTmmbrItem;
        // clang-format on

        // TmmbrInformation inner types define
        struct TimedTmmbrItem {};

    public:
        // prevent constructor by default
        TmmbrInformation& operator=(TmmbrInformation const&);
        TmmbrInformation(TmmbrInformation const&);
        TmmbrInformation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI TmmbrInformation(::webrtc::RTCPReceiver::TmmbrInformation&&);

        MCNAPI ~TmmbrInformation();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::RTCPReceiver::TmmbrInformation&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTCPReceiver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::TimeDelta> AverageRtt() const;

    MCNAPI ::std::vector<::webrtc::rtcp::TmmbItem> BoundingSet(bool*);

    MCNAPI ::std::vector<::webrtc::rtcp::ReceiveTimeInfo> ConsumeReceivedXrReferenceTimeInfo();

    MCNAPI ::webrtc::RTCPReceiver::TmmbrInformation* FindOrCreateTmmbrInfo(uint);

    MCNAPI ::std::optional<::webrtc::TimeDelta> GetAndResetXrRrRtt();

    MCNAPI ::std::vector<::webrtc::ReportBlockData> GetLatestReportBlockData() const;

    MCNAPI ::webrtc::RTCPReceiver::NonSenderRttStats GetNonSenderRTT() const;

    MCNAPI ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const;

    MCNAPI ::webrtc::RTCPReceiver::TmmbrInformation* GetTmmbrInformation(uint);

    MCNAPI bool HandleApp(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleBye(::webrtc::rtcp::CommonHeader const&);

    MCNAPI bool HandleFir(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleNack(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandlePli(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI void HandlePsfbApp(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleReceiverReport(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI void HandleReportBlock(::webrtc::rtcp::ReportBlock const&, ::webrtc::RTCPReceiver::PacketInformation*, uint);

    MCNAPI bool HandleSdes(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleSenderReport(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleSrReq(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleTmmbn(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleTmmbr(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI void
    HandleTransportFeedback(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI bool HandleXr(::webrtc::rtcp::CommonHeader const&, ::webrtc::RTCPReceiver::PacketInformation*, bool&, uint&);

    MCNAPI void HandleXrDlrrReportBlock(uint, ::webrtc::rtcp::ReceiveTimeInfo const&);

    MCNAPI void HandleXrReceiveReferenceTime(uint, ::webrtc::rtcp::Rrtr const&);

    MCNAPI void
    HandleXrTargetBitrate(uint, ::webrtc::rtcp::TargetBitrate const&, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI void IncomingPacket(::rtc::ArrayView<uchar const>);

    MCNAPI ::std::optional<::webrtc::TimeDelta> LastRtt() const;

    MCNAPI void NotifyTmmbrUpdated();

    MCNAPI ::std::optional<::webrtc::TimeDelta> OnPeriodicRttUpdate(::webrtc::Timestamp, bool);

    MCNAPI bool ParseCompoundPacket(::rtc::ArrayView<uchar const>, ::webrtc::RTCPReceiver::PacketInformation*);

    MCNAPI RTCPReceiver(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::ModuleRtpRtcpImpl2*);

    MCNAPI bool RtcpRrSequenceNumberTimeoutLocked(::webrtc::Timestamp);

    MCNAPI bool RtcpRrTimeoutLocked(::webrtc::Timestamp);

    MCNAPI void SetNonSenderRttMeasurement(bool);

    MCNAPI void SetRemoteSSRC(uint);

    MCNAPI ::std::vector<::webrtc::rtcp::TmmbItem> TmmbrReceived();

    MCNAPI void TriggerCallbacksFromRtcpPacket(::webrtc::RTCPReceiver::PacketInformation const&);

    MCNAPI void UpdateTmmbrRemoteIsAlive(uint);

    MCNAPI uint local_media_ssrc() const;

    MCNAPI void set_local_media_ssrc(uint);

    MCNAPI ~RTCPReceiver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const&, ::webrtc::ModuleRtpRtcpImpl2*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
