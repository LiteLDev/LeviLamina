#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpRtcpInterface.h"
#include "mc/external/webrtc/SequenceChecker.h"

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

class RTCPReceiver {
public:
    // RTCPReceiver inner types declare
    // clang-format off
    class CustomSequenceChecker;
    struct LastFirStatus;
    class ModuleRtpRtcp;
    class NonSenderRttStats;
    struct PacketInformation;
    class RegisteredSsrcs;
    struct RrtrInformation;
    class RttStats;
    struct TmmbrInformation;
    // clang-format on

    // RTCPReceiver inner types define
    class ModuleRtpRtcp {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual void SetTmmbn(::std::vector<::webrtc::rtcp::TmmbItem>) = 0;

        // vIndex: 1
        virtual void OnRequestSendReport() = 0;

        // vIndex: 2
        virtual void OnReceivedNack(::std::vector<ushort> const&) = 0;

        // vIndex: 3
        virtual void OnReceivedRtcpReportBlocks(::rtc::ArrayView<::webrtc::ReportBlockData const>) = 0;

        // vIndex: 4
        virtual ~ModuleRtpRtcp() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class NonSenderRttStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk59dd82;
        ::ll::UntypedStorage<8, 8>  mUnk5a1536;
        ::ll::UntypedStorage<4, 4>  mUnkca9896;
        // NOLINTEND

    public:
        // prevent constructor by default
        NonSenderRttStats& operator=(NonSenderRttStats const&);
        NonSenderRttStats(NonSenderRttStats const&);
        NonSenderRttStats();
    };

    class CustomSequenceChecker : public ::webrtc::SequenceChecker {};

    class RegisteredSsrcs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnka50035;
        ::ll::UntypedStorage<8, 24> mUnk8f2d4f;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegisteredSsrcs& operator=(RegisteredSsrcs const&);
        RegisteredSsrcs(RegisteredSsrcs const&);
        RegisteredSsrcs();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RegisteredSsrcs(bool disable_sequence_checker, ::webrtc::RtpRtcpInterface::Configuration const& config);

        MCNAPI bool contains(uint ssrc) const;

        MCNAPI uint media_ssrc() const;

        MCNAPI void set_media_ssrc(uint ssrc);

        MCNAPI ~RegisteredSsrcs();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(bool disable_sequence_checker, ::webrtc::RtpRtcpInterface::Configuration const& config);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PacketInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnkb10304;
        ::ll::UntypedStorage<4, 4>   mUnk4a0133;
        ::ll::UntypedStorage<8, 24>  mUnka46ecb;
        ::ll::UntypedStorage<8, 24>  mUnk6e029d;
        ::ll::UntypedStorage<8, 16>  mUnk63fb49;
        ::ll::UntypedStorage<4, 4>   mUnkb69d48;
        ::ll::UntypedStorage<8, 8>   mUnkb75852;
        ::ll::UntypedStorage<4, 172> mUnk6b762e;
        ::ll::UntypedStorage<8, 144> mUnk521b78;
        ::ll::UntypedStorage<8, 8>   mUnk212b96;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketInformation& operator=(PacketInformation const&);
        PacketInformation(PacketInformation const&);
        PacketInformation();

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

    struct TmmbrInformation {
    public:
        // TmmbrInformation inner types declare
        // clang-format off
        struct TimedTmmbrItem;
        // clang-format on

        // TmmbrInformation inner types define
        struct TimedTmmbrItem {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 24> mUnkc7648d;
            ::ll::UntypedStorage<8, 8>  mUnk58f74f;
            // NOLINTEND

        public:
            // prevent constructor by default
            TimedTmmbrItem& operator=(TimedTmmbrItem const&);
            TimedTmmbrItem(TimedTmmbrItem const&);
            TimedTmmbrItem();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk70b0df;
        ::ll::UntypedStorage<1, 1>  mUnk703cf5;
        ::ll::UntypedStorage<8, 24> mUnk740af4;
        ::ll::UntypedStorage<8, 16> mUnkad2270;
        // NOLINTEND

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

    struct RrtrInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk2e959c;
        ::ll::UntypedStorage<4, 4> mUnk6f8d04;
        ::ll::UntypedStorage<4, 4> mUnk70c74c;
        // NOLINTEND

    public:
        // prevent constructor by default
        RrtrInformation& operator=(RrtrInformation const&);
        RrtrInformation(RrtrInformation const&);
        RrtrInformation();
    };

    struct LastFirStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk43d0d1;
        ::ll::UntypedStorage<1, 1> mUnk35d576;
        // NOLINTEND

    public:
        // prevent constructor by default
        LastFirStatus& operator=(LastFirStatus const&);
        LastFirStatus(LastFirStatus const&);
        LastFirStatus();
    };

    class RttStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf5055e;
        ::ll::UntypedStorage<8, 8> mUnkfbd3ff;
        ::ll::UntypedStorage<8, 8> mUnkabd139;
        // NOLINTEND

    public:
        // prevent constructor by default
        RttStats& operator=(RttStats const&);
        RttStats(RttStats const&);
        RttStats();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void AddRtt(::webrtc::TimeDelta rtt);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk13975a;
    ::ll::UntypedStorage<1, 1>  mUnkc3a58d;
    ::ll::UntypedStorage<8, 8>  mUnkbb5694;
    ::ll::UntypedStorage<8, 32> mUnk29a22d;
    ::ll::UntypedStorage<8, 8>  mUnkc11de9;
    ::ll::UntypedStorage<8, 8>  mUnk3bd3d0;
    ::ll::UntypedStorage<8, 8>  mUnke4ed2a;
    ::ll::UntypedStorage<8, 8>  mUnkce9e59;
    ::ll::UntypedStorage<8, 8>  mUnk77c62e;
    ::ll::UntypedStorage<8, 8>  mUnkb68c3a;
    ::ll::UntypedStorage<8, 40> mUnk643873;
    ::ll::UntypedStorage<4, 4>  mUnkdc1ae4;
    ::ll::UntypedStorage<8, 40> mUnk15b893;
    ::ll::UntypedStorage<8, 16> mUnkb42c49;
    ::ll::UntypedStorage<8, 32> mUnk1bf561;
    ::ll::UntypedStorage<1, 1>  mUnkd92c89;
    ::ll::UntypedStorage<8, 16> mUnkca010f;
    ::ll::UntypedStorage<8, 8>  mUnk756ec7;
    ::ll::UntypedStorage<8, 32> mUnkf1bdce;
    ::ll::UntypedStorage<8, 32> mUnk5ff1f2;
    ::ll::UntypedStorage<8, 32> mUnk2776ee;
    ::ll::UntypedStorage<8, 32> mUnk7ef52c;
    ::ll::UntypedStorage<8, 32> mUnk23f4e0;
    ::ll::UntypedStorage<8, 8>  mUnkfb80d4;
    ::ll::UntypedStorage<8, 8>  mUnk77efb5;
    ::ll::UntypedStorage<8, 8>  mUnk4a4374;
    ::ll::UntypedStorage<8, 8>  mUnkb1356f;
    ::ll::UntypedStorage<8, 8>  mUnkbe51a6;
    ::ll::UntypedStorage<4, 20> mUnk658dd7;
    ::ll::UntypedStorage<4, 12> mUnkd29957;
    ::ll::UntypedStorage<8, 8>  mUnk17de96;
    ::ll::UntypedStorage<8, 8>  mUnk1d003d;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCPReceiver& operator=(RTCPReceiver const&);
    RTCPReceiver(RTCPReceiver const&);
    RTCPReceiver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::TimeDelta> AverageRtt() const;

    MCNAPI ::std::vector<::webrtc::rtcp::TmmbItem> BoundingSet(bool* tmmbr_owner);

    MCNAPI ::std::vector<::webrtc::rtcp::ReceiveTimeInfo> ConsumeReceivedXrReferenceTimeInfo();

    MCNAPI ::webrtc::RTCPReceiver::TmmbrInformation* FindOrCreateTmmbrInfo(uint remote_ssrc);

    MCNAPI ::std::optional<::webrtc::TimeDelta> GetAndResetXrRrRtt();

    MCNAPI ::std::vector<::webrtc::ReportBlockData> GetLatestReportBlockData() const;

    MCNAPI ::webrtc::RTCPReceiver::NonSenderRttStats GetNonSenderRTT() const;

    MCNAPI ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const;

    MCNAPI ::webrtc::RTCPReceiver::TmmbrInformation* GetTmmbrInformation(uint remote_ssrc);

    MCNAPI bool HandleApp(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleBye(::webrtc::rtcp::CommonHeader const& rtcp_block);

    MCNAPI bool HandleFir(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleNack(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandlePli(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI void HandlePsfbApp(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleReceiverReport(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI void HandleReportBlock(
        ::webrtc::rtcp::ReportBlock const&         report_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information,
        uint                                       remote_ssrc
    );

    MCNAPI bool HandleSdes(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleSenderReport(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleSrReq(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleTmmbn(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleTmmbr(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI void HandleTransportFeedback(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI bool HandleXr(
        ::webrtc::rtcp::CommonHeader const&        rtcp_block,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information,
        bool&                                      contains_dlrr,
        uint&                                      ssrc
    );

    MCNAPI void HandleXrDlrrReportBlock(uint sender_ssrc, ::webrtc::rtcp::ReceiveTimeInfo const& rti);

    MCNAPI void HandleXrReceiveReferenceTime(uint sender_ssrc, ::webrtc::rtcp::Rrtr const& rrtr);

    MCNAPI void HandleXrTargetBitrate(
        uint                                       ssrc,
        ::webrtc::rtcp::TargetBitrate const&       target_bitrate,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI void IncomingPacket(::rtc::ArrayView<uchar const> packet);

    MCNAPI ::std::optional<::webrtc::TimeDelta> LastRtt() const;

    MCNAPI void NotifyTmmbrUpdated();

    MCNAPI ::std::optional<::webrtc::TimeDelta> OnPeriodicRttUpdate(::webrtc::Timestamp newer_than, bool sending);

    MCNAPI bool ParseCompoundPacket(
        ::rtc::ArrayView<uchar const>              packet,
        ::webrtc::RTCPReceiver::PacketInformation* packet_information
    );

    MCNAPI RTCPReceiver(::webrtc::RtpRtcpInterface::Configuration const& config, ::webrtc::ModuleRtpRtcpImpl2* owner);

    MCNAPI bool RtcpRrSequenceNumberTimeoutLocked(::webrtc::Timestamp now);

    MCNAPI bool RtcpRrTimeoutLocked(::webrtc::Timestamp now);

    MCNAPI void SetNonSenderRttMeasurement(bool enabled);

    MCNAPI void SetRemoteSSRC(uint ssrc);

    MCNAPI ::std::vector<::webrtc::rtcp::TmmbItem> TmmbrReceived();

    MCNAPI void TriggerCallbacksFromRtcpPacket(::webrtc::RTCPReceiver::PacketInformation const& packet_information);

    MCNAPI void UpdateTmmbrRemoteIsAlive(uint remote_ssrc);

    MCNAPI uint local_media_ssrc() const;

    MCNAPI void set_local_media_ssrc(uint ssrc);

    MCNAPI ~RTCPReceiver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const& config, ::webrtc::ModuleRtpRtcpImpl2* owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
