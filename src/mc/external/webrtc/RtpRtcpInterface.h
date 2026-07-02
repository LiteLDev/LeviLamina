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
        ::ll::UntypedStorage<1, 1>  mUnka78adf;
        ::ll::UntypedStorage<1, 1>  mUnkaee14f;
        ::ll::UntypedStorage<8, 8>  mUnkcfff30;
        ::ll::UntypedStorage<8, 8>  mUnkf899be;
        ::ll::UntypedStorage<8, 8>  mUnkf4e0c9;
        ::ll::UntypedStorage<8, 8>  mUnk40ee54;
        ::ll::UntypedStorage<8, 8>  mUnk8c652a;
        ::ll::UntypedStorage<8, 8>  mUnkf205e4;
        ::ll::UntypedStorage<8, 8>  mUnk566305;
        ::ll::UntypedStorage<8, 8>  mUnkc4dbf5;
        ::ll::UntypedStorage<8, 8>  mUnk28f816;
        ::ll::UntypedStorage<8, 8>  mUnk3a26bf;
        ::ll::UntypedStorage<8, 8>  mUnk4c17db;
        ::ll::UntypedStorage<8, 8>  mUnk17e23a;
        ::ll::UntypedStorage<8, 8>  mUnka20af1;
        ::ll::UntypedStorage<8, 8>  mUnkce9c79;
        ::ll::UntypedStorage<8, 8>  mUnk308036;
        ::ll::UntypedStorage<8, 8>  mUnk800d0a;
        ::ll::UntypedStorage<8, 8>  mUnkd7423e;
        ::ll::UntypedStorage<8, 8>  mUnk627d15;
        ::ll::UntypedStorage<8, 8>  mUnka40e19;
        ::ll::UntypedStorage<8, 8>  mUnk36d3c9;
        ::ll::UntypedStorage<4, 4>  mUnk703513;
        ::ll::UntypedStorage<1, 1>  mUnk3bb62b;
        ::ll::UntypedStorage<8, 8>  mUnkfb4202;
        ::ll::UntypedStorage<8, 8>  mUnkd1a451;
        ::ll::UntypedStorage<1, 1>  mUnk1f0933;
        ::ll::UntypedStorage<1, 1>  mUnk340253;
        ::ll::UntypedStorage<1, 1>  mUnk3d3cd8;
        ::ll::UntypedStorage<8, 8>  mUnkab83f9;
        ::ll::UntypedStorage<4, 4>  mUnkd28b07;
        ::ll::UntypedStorage<4, 8>  mUnkbcc29e;
        ::ll::UntypedStorage<1, 1>  mUnk2ab222;
        ::ll::UntypedStorage<1, 1>  mUnkd00a00;
        ::ll::UntypedStorage<8, 32> mUnk951a68;
        ::ll::UntypedStorage<1, 1>  mUnkafbb52;
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

    struct NonSenderRttStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnka33d58;
        ::ll::UntypedStorage<8, 8>  mUnke18230;
        ::ll::UntypedStorage<4, 4>  mUnkaa4286;
        // NOLINTEND

    public:
        // prevent constructor by default
        NonSenderRttStats& operator=(NonSenderRttStats const&);
        NonSenderRttStats(NonSenderRttStats const&);
        NonSenderRttStats();
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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void IncomingRtcpPacket(::rtc::ArrayView<uchar const> rtcp_packet) = 0;

    virtual void SetRemoteSSRC(uint ssrc) = 0;

    virtual void SetLocalSsrc(uint local_ssrc) = 0;

    virtual void SetMaxRtpPacketSize(uint64 rtp_packet_size) = 0;

    virtual uint64 MaxRtpPacketSize() const = 0;

    virtual void RegisterSendPayloadFrequency(int payload_type, int payload_frequency) = 0;

    virtual int DeRegisterSendPayload(schar payload_type) = 0;

    virtual void SetExtmapAllowMixed(bool extmap_allow_mixed) = 0;

    virtual void RegisterRtpHeaderExtension(::std::string_view uri, int id) = 0;

    virtual void DeregisterSendRtpHeaderExtension(::std::string_view uri) = 0;

    virtual bool SupportsPadding() const = 0;

    virtual bool SupportsRtxPayloadPadding() const = 0;

    virtual uint StartTimestamp() const = 0;

    virtual void SetStartTimestamp(uint timestamp) = 0;

    virtual ushort SequenceNumber() const = 0;

    virtual void SetSequenceNumber(ushort seq_num) = 0;

    virtual void SetRtpState(::webrtc::RtpState const& rtp_state) = 0;

    virtual void SetRtxState(::webrtc::RtpState const& rtp_state) = 0;

    virtual ::webrtc::RtpState GetRtpState() const = 0;

    virtual ::webrtc::RtpState GetRtxState() const = 0;

    virtual void SetNonSenderRttMeasurement(bool enabled) = 0;

    virtual uint SSRC() const = 0;

    virtual void SetMid(::std::string_view mid) = 0;

    virtual void SetRtxSendStatus(int mode) = 0;

    virtual int RtxSendStatus() const = 0;

    virtual ::std::optional<uint> RtxSsrc() const = 0;

    virtual void SetRtxSendPayloadType(int payload_type, int associated_payload_type) = 0;

    virtual ::std::optional<uint> FlexfecSsrc() const = 0;

    virtual int SetSendingStatus(bool sending) = 0;

    virtual bool Sending() const = 0;

    virtual void SetSendingMediaStatus(bool sending) = 0;

    virtual bool SendingMedia() const = 0;

    virtual bool IsAudioConfigured() const = 0;

    virtual void SetAsPartOfAllocation(bool part_of_allocation) = 0;

    virtual ::webrtc::RtpSendRates GetSendRates() const = 0;

    virtual ::webrtc::RTPSender* RtpSender() = 0;

    virtual ::webrtc::RTPSender const* RtpSender() const = 0;

    virtual bool
    OnSendingRtpFrame(uint timestamp, int64 capture_time_ms, int payload_type, bool force_sender_report) = 0;

    virtual bool TrySendPacket(
        ::std::unique_ptr<::webrtc::RtpPacketToSend> packet,
        ::webrtc::PacedPacketInfo const&             pacing_info
    ) = 0;

    virtual bool CanSendPacket(::webrtc::RtpPacketToSend const& packet) const = 0;

    virtual void AssignSequenceNumber(::webrtc::RtpPacketToSend& packet) = 0;

    virtual void
    SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend> packet, ::webrtc::PacedPacketInfo const& pacing_info) = 0;

    virtual void OnBatchComplete() = 0;

    virtual void SetFecProtectionParams(
        ::webrtc::FecProtectionParams const& delta_params,
        ::webrtc::FecProtectionParams const& key_params
    ) = 0;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFecPackets() = 0;

    virtual void OnAbortedRetransmissions(::rtc::ArrayView<ushort const> sequence_numbers) = 0;

    virtual void OnPacketsAcknowledged(::rtc::ArrayView<ushort const> sequence_numbers) = 0;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GeneratePadding(uint64 target_size_bytes) = 0;

    virtual ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
    GetSentRtpPacketInfos(::rtc::ArrayView<ushort const> sequence_numbers) const = 0;

    virtual uint64 ExpectedPerPacketOverhead() const = 0;

    virtual void OnPacketSendingThreadSwitched() = 0;

    virtual ::webrtc::RtcpMode RTCP() const = 0;

    virtual void SetRTCPStatus(::webrtc::RtcpMode method) = 0;

    virtual int SetCNAME(::std::string_view c_name) = 0;

    virtual ::std::optional<::webrtc::TimeDelta> LastRtt() const = 0;

    virtual ::webrtc::TimeDelta ExpectedRetransmissionTime() const = 0;

    virtual int SendRTCP(::webrtc::RTCPPacketType packet_type) = 0;

    virtual void GetSendStreamDataCounters(
        ::webrtc::StreamDataCounters* rtp_counters,
        ::webrtc::StreamDataCounters* rtx_counters
    ) const = 0;

    virtual ::std::vector<::webrtc::ReportBlockData> GetLatestReportBlockData() const = 0;

    virtual ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const = 0;

    virtual ::std::optional<::webrtc::RtpRtcpInterface::NonSenderRttStats> GetNonSenderRttStats() const = 0;

    virtual void SetRemb(int64 bitrate_bps, ::std::vector<uint> ssrcs) = 0;

    virtual void UnsetRemb() = 0;

    virtual int SendNACK(ushort const* nack_list, ushort size) = 0;

    virtual void SendNack(::std::vector<ushort> const& sequence_numbers) = 0;

    virtual void SetStorePacketsStatus(bool enable, ushort number_to_store) = 0;

    virtual void SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const& bitrate) = 0;

    virtual int SendLossNotification(
        ushort last_decoded_seq_num,
        ushort last_received_seq_num,
        bool   decodability_flag,
        bool   buffering_allowed
    ) = 0;

    virtual ~RtpRtcpInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
