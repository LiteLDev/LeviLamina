#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCPPacketType.h"
#include "mc/external/webrtc/RtcpFeedbackSenderInterface.h"
#include "mc/external/webrtc/RtcpMode.h"
#include "mc/external/webrtc/RtpSequenceNumberMap.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTPSender; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpSendRates; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct StreamDataCounters; }
// clang-format on

namespace webrtc {

class RtpRtcpInterface : public ::webrtc::RtcpFeedbackSenderInterface {
public:
    // RtpRtcpInterface inner types declare
    // clang-format off
    struct Configuration;
    struct NonSenderRttStats;
    struct SenderReportStats;
    // clang-format on
    
    // RtpRtcpInterface inner types define
    struct Configuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka78adf;
        ::ll::UntypedStorage<1, 1> mUnkaee14f;
        ::ll::UntypedStorage<8, 8> mUnkcfff30;
        ::ll::UntypedStorage<8, 8> mUnkf899be;
        ::ll::UntypedStorage<8, 8> mUnkf4e0c9;
        ::ll::UntypedStorage<8, 8> mUnk40ee54;
        ::ll::UntypedStorage<8, 8> mUnk8c652a;
        ::ll::UntypedStorage<8, 8> mUnkf205e4;
        ::ll::UntypedStorage<8, 8> mUnk566305;
        ::ll::UntypedStorage<8, 8> mUnkc4dbf5;
        ::ll::UntypedStorage<8, 8> mUnk28f816;
        ::ll::UntypedStorage<8, 8> mUnk3a26bf;
        ::ll::UntypedStorage<8, 8> mUnk4c17db;
        ::ll::UntypedStorage<8, 8> mUnk17e23a;
        ::ll::UntypedStorage<8, 8> mUnka20af1;
        ::ll::UntypedStorage<8, 8> mUnkce9c79;
        ::ll::UntypedStorage<8, 8> mUnk308036;
        ::ll::UntypedStorage<8, 8> mUnk800d0a;
        ::ll::UntypedStorage<8, 8> mUnkd7423e;
        ::ll::UntypedStorage<8, 8> mUnk627d15;
        ::ll::UntypedStorage<8, 8> mUnka40e19;
        ::ll::UntypedStorage<8, 8> mUnk36d3c9;
        ::ll::UntypedStorage<4, 4> mUnk703513;
        ::ll::UntypedStorage<1, 1> mUnk3bb62b;
        ::ll::UntypedStorage<8, 8> mUnkfb4202;
        ::ll::UntypedStorage<8, 8> mUnkd1a451;
        ::ll::UntypedStorage<1, 1> mUnk1f0933;
        ::ll::UntypedStorage<1, 1> mUnk340253;
        ::ll::UntypedStorage<1, 1> mUnk3d3cd8;
        ::ll::UntypedStorage<8, 8> mUnkab83f9;
        ::ll::UntypedStorage<4, 4> mUnkd28b07;
        ::ll::UntypedStorage<4, 8> mUnkbcc29e;
        ::ll::UntypedStorage<1, 1> mUnk2ab222;
        ::ll::UntypedStorage<1, 1> mUnkd00a00;
        ::ll::UntypedStorage<8, 32> mUnk5dfaa7;
        ::ll::UntypedStorage<1, 1> mUnkafbb52;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Configuration& operator=(Configuration const&);
        Configuration(Configuration const&);
        Configuration();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Configuration();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct SenderReportStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdaf484;
        ::ll::UntypedStorage<8, 8> mUnk82f1cc;
        ::ll::UntypedStorage<4, 4> mUnk8f8f3b;
        ::ll::UntypedStorage<4, 4> mUnkccfbec;
        ::ll::UntypedStorage<8, 8> mUnkddfc83;
        ::ll::UntypedStorage<8, 8> mUnkbd873e;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        SenderReportStats& operator=(SenderReportStats const&);
        SenderReportStats(SenderReportStats const&);
        SenderReportStats();
    
    };
    
    struct NonSenderRttStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnka33d58;
        ::ll::UntypedStorage<8, 8> mUnke18230;
        ::ll::UntypedStorage<4, 4> mUnkaa4286;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        NonSenderRttStats& operator=(NonSenderRttStats const&);
        NonSenderRttStats(NonSenderRttStats const&);
        NonSenderRttStats();
    
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void IncomingRtcpPacket(::rtc::ArrayView<uchar const>) = 0;

    // vIndex: 5
    virtual void SetRemoteSSRC(uint) = 0;

    // vIndex: 6
    virtual void SetLocalSsrc(uint) = 0;

    // vIndex: 7
    virtual void SetMaxRtpPacketSize(uint64) = 0;

    // vIndex: 8
    virtual uint64 MaxRtpPacketSize() const = 0;

    // vIndex: 9
    virtual void RegisterSendPayloadFrequency(int, int) = 0;

    // vIndex: 10
    virtual int DeRegisterSendPayload(char) = 0;

    // vIndex: 11
    virtual void SetExtmapAllowMixed(bool) = 0;

    // vIndex: 12
    virtual void RegisterRtpHeaderExtension(::std::string_view, int) = 0;

    // vIndex: 13
    virtual void DeregisterSendRtpHeaderExtension(::std::string_view) = 0;

    // vIndex: 14
    virtual bool SupportsPadding() const = 0;

    // vIndex: 15
    virtual bool SupportsRtxPayloadPadding() const = 0;

    // vIndex: 16
    virtual uint StartTimestamp() const = 0;

    // vIndex: 17
    virtual void SetStartTimestamp(uint) = 0;

    // vIndex: 18
    virtual ushort SequenceNumber() const = 0;

    // vIndex: 19
    virtual void SetSequenceNumber(ushort) = 0;

    // vIndex: 20
    virtual void SetRtpState(::webrtc::RtpState const&) = 0;

    // vIndex: 21
    virtual void SetRtxState(::webrtc::RtpState const&) = 0;

    // vIndex: 22
    virtual ::webrtc::RtpState GetRtpState() const = 0;

    // vIndex: 23
    virtual ::webrtc::RtpState GetRtxState() const = 0;

    // vIndex: 24
    virtual void SetNonSenderRttMeasurement(bool) = 0;

    // vIndex: 25
    virtual uint SSRC() const = 0;

    // vIndex: 26
    virtual void SetMid(::std::string_view) = 0;

    // vIndex: 27
    virtual void SetRtxSendStatus(int) = 0;

    // vIndex: 28
    virtual int RtxSendStatus() const = 0;

    // vIndex: 29
    virtual ::std::optional<uint> RtxSsrc() const = 0;

    // vIndex: 30
    virtual void SetRtxSendPayloadType(int, int) = 0;

    // vIndex: 31
    virtual ::std::optional<uint> FlexfecSsrc() const = 0;

    // vIndex: 32
    virtual int SetSendingStatus(bool) = 0;

    // vIndex: 33
    virtual bool Sending() const = 0;

    // vIndex: 34
    virtual void SetSendingMediaStatus(bool) = 0;

    // vIndex: 35
    virtual bool SendingMedia() const = 0;

    // vIndex: 36
    virtual bool IsAudioConfigured() const = 0;

    // vIndex: 37
    virtual void SetAsPartOfAllocation(bool) = 0;

    // vIndex: 38
    virtual ::webrtc::RtpSendRates GetSendRates() const = 0;

    // vIndex: 40
    virtual ::webrtc::RTPSender* RtpSender() = 0;

    // vIndex: 39
    virtual ::webrtc::RTPSender const* RtpSender() const = 0;

    // vIndex: 41
    virtual bool OnSendingRtpFrame(uint, int64, int, bool) = 0;

    // vIndex: 42
    virtual bool TrySendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::PacedPacketInfo const&) = 0;

    // vIndex: 43
    virtual bool CanSendPacket(::webrtc::RtpPacketToSend const&) const = 0;

    // vIndex: 44
    virtual void AssignSequenceNumber(::webrtc::RtpPacketToSend&) = 0;

    // vIndex: 45
    virtual void SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::PacedPacketInfo const&) = 0;

    // vIndex: 46
    virtual void OnBatchComplete() = 0;

    // vIndex: 47
    virtual void SetFecProtectionParams(::webrtc::FecProtectionParams const&, ::webrtc::FecProtectionParams const&) = 0;

    // vIndex: 48
    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFecPackets() = 0;

    // vIndex: 49
    virtual void OnAbortedRetransmissions(::rtc::ArrayView<ushort const>) = 0;

    // vIndex: 50
    virtual void OnPacketsAcknowledged(::rtc::ArrayView<ushort const>) = 0;

    // vIndex: 51
    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GeneratePadding(uint64) = 0;

    // vIndex: 52
    virtual ::std::vector<::webrtc::RtpSequenceNumberMap::Info> GetSentRtpPacketInfos(::rtc::ArrayView<ushort const>) const = 0;

    // vIndex: 53
    virtual uint64 ExpectedPerPacketOverhead() const = 0;

    // vIndex: 54
    virtual void OnPacketSendingThreadSwitched() = 0;

    // vIndex: 55
    virtual ::webrtc::RtcpMode RTCP() const = 0;

    // vIndex: 56
    virtual void SetRTCPStatus(::webrtc::RtcpMode) = 0;

    // vIndex: 57
    virtual int SetCNAME(::std::string_view) = 0;

    // vIndex: 58
    virtual ::std::optional<::webrtc::TimeDelta> LastRtt() const = 0;

    // vIndex: 59
    virtual ::webrtc::TimeDelta ExpectedRetransmissionTime() const = 0;

    // vIndex: 60
    virtual int SendRTCP(::webrtc::RTCPPacketType) = 0;

    // vIndex: 61
    virtual void GetSendStreamDataCounters(::webrtc::StreamDataCounters*, ::webrtc::StreamDataCounters*) const = 0;

    // vIndex: 62
    virtual ::std::vector<::webrtc::ReportBlockData> GetLatestReportBlockData() const = 0;

    // vIndex: 63
    virtual ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const = 0;

    // vIndex: 64
    virtual ::std::optional<::webrtc::RtpRtcpInterface::NonSenderRttStats> GetNonSenderRttStats() const = 0;

    // vIndex: 2
    virtual void SetRemb(int64, ::std::vector<uint>) = 0;

    // vIndex: 3
    virtual void UnsetRemb() = 0;

    // vIndex: 65
    virtual int SendNACK(ushort const*, ushort) = 0;

    // vIndex: 66
    virtual void SendNack(::std::vector<ushort> const&) = 0;

    // vIndex: 67
    virtual void SetStorePacketsStatus(bool, ushort) = 0;

    // vIndex: 68
    virtual void SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const&) = 0;

    // vIndex: 69
    virtual int SendLossNotification(ushort, ushort, bool, bool) = 0;

    // vIndex: 0
    virtual ~RtpRtcpInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
