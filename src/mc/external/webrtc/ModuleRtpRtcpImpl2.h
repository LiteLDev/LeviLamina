#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCPPacketType.h"
#include "mc/external/webrtc/RTCPReceiver.h"
#include "mc/external/webrtc/RTCPSender.h"
#include "mc/external/webrtc/RtcpMode.h"
#include "mc/external/webrtc/RtpRtcpInterface.h"
#include "mc/external/webrtc/RtpSequenceNumberMap.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTPSender; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpSendRates; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct StreamDataCounters; }
namespace webrtc::rtcp { class RtcpPacket; }
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc {

class ModuleRtpRtcpImpl2 : public ::webrtc::RtpRtcpInterface, public ::webrtc::RTCPReceiver::ModuleRtpRtcp {
public:
    // ModuleRtpRtcpImpl2 inner types declare
    // clang-format off
    struct RtpSenderContext;
    // clang-format on

    // ModuleRtpRtcpImpl2 inner types define
    struct RtpSenderContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 360> mUnk5e9bb6;
        ::ll::UntypedStorage<1, 1>   mUnkaf31e8;
        ::ll::UntypedStorage<8, 64>  mUnk35434b;
        ::ll::UntypedStorage<8, 488> mUnkb717e8;
        ::ll::UntypedStorage<8, 48>  mUnk15cbc0;
        ::ll::UntypedStorage<8, 280> mUnkec2288;
        // NOLINTEND

    public:
        // prevent constructor by default
        RtpSenderContext& operator=(RtpSenderContext const&);
        RtpSenderContext(RtpSenderContext const&);
        RtpSenderContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RtpSenderContext(
            ::webrtc::TaskQueueBase&                         worker_queue,
            ::webrtc::RtpRtcpInterface::Configuration const& config
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::webrtc::TaskQueueBase& worker_queue, ::webrtc::RtpRtcpInterface::Configuration const& config);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk909e53;
    ::ll::UntypedStorage<1, 1>   mUnkdb6f5b;
    ::ll::UntypedStorage<8, 8>   mUnke2365b;
    ::ll::UntypedStorage<8, 680> mUnke4397b;
    ::ll::UntypedStorage<8, 520> mUnke545e2;
    ::ll::UntypedStorage<8, 8>   mUnkaca0fc;
    ::ll::UntypedStorage<2, 2>   mUnk693b30;
    ::ll::UntypedStorage<8, 8>   mUnkd32067;
    ::ll::UntypedStorage<2, 2>   mUnk400446;
    ::ll::UntypedStorage<8, 8>   mUnk52edea;
    ::ll::UntypedStorage<8, 8>   mUnkcf7fd5;
    ::ll::UntypedStorage<8, 40>  mUnkcd70d0;
    ::ll::UntypedStorage<8, 8>   mUnke906ef;
    ::ll::UntypedStorage<8, 8>   mUnk32ab75;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleRtpRtcpImpl2& operator=(ModuleRtpRtcpImpl2 const&);
    ModuleRtpRtcpImpl2(ModuleRtpRtcpImpl2 const&);
    ModuleRtpRtcpImpl2();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ~ModuleRtpRtcpImpl2() /*override*/;

    // vIndex: 4
    virtual void IncomingRtcpPacket(::rtc::ArrayView<uchar const> rtcp_packet) /*override*/;

    // vIndex: 5
    virtual void SetRemoteSSRC(uint ssrc) /*override*/;

    // vIndex: 6
    virtual void SetLocalSsrc(uint local_ssrc) /*override*/;

    // vIndex: 9
    virtual void RegisterSendPayloadFrequency(int payload_type, int payload_frequency) /*override*/;

    // vIndex: 10
    virtual int DeRegisterSendPayload(char payload_type) /*override*/;

    // vIndex: 11
    virtual void SetExtmapAllowMixed(bool extmap_allow_mixed) /*override*/;

    // vIndex: 12
    virtual void RegisterRtpHeaderExtension(::std::string_view uri, int id) /*override*/;

    // vIndex: 13
    virtual void DeregisterSendRtpHeaderExtension(::std::string_view uri) /*override*/;

    // vIndex: 14
    virtual bool SupportsPadding() const /*override*/;

    // vIndex: 15
    virtual bool SupportsRtxPayloadPadding() const /*override*/;

    // vIndex: 16
    virtual uint StartTimestamp() const /*override*/;

    // vIndex: 17
    virtual void SetStartTimestamp(uint timestamp) /*override*/;

    // vIndex: 18
    virtual ushort SequenceNumber() const /*override*/;

    // vIndex: 19
    virtual void SetSequenceNumber(ushort seq_num) /*override*/;

    // vIndex: 20
    virtual void SetRtpState(::webrtc::RtpState const& rtp_state) /*override*/;

    // vIndex: 21
    virtual void SetRtxState(::webrtc::RtpState const& rtp_state) /*override*/;

    // vIndex: 22
    virtual ::webrtc::RtpState GetRtpState() const /*override*/;

    // vIndex: 23
    virtual ::webrtc::RtpState GetRtxState() const /*override*/;

    // vIndex: 24
    virtual void SetNonSenderRttMeasurement(bool enabled) /*override*/;

    // vIndex: 25
    virtual uint SSRC() const /*override*/;

    // vIndex: 26
    virtual void SetMid(::std::string_view mid) /*override*/;

    // vIndex: 27
    virtual void SetRtxSendStatus(int mode) /*override*/;

    // vIndex: 28
    virtual int RtxSendStatus() const /*override*/;

    // vIndex: 29
    virtual ::std::optional<uint> RtxSsrc() const /*override*/;

    // vIndex: 30
    virtual void SetRtxSendPayloadType(int payload_type, int associated_payload_type) /*override*/;

    // vIndex: 31
    virtual ::std::optional<uint> FlexfecSsrc() const /*override*/;

    // vIndex: 32
    virtual int SetSendingStatus(bool sending) /*override*/;

    // vIndex: 33
    virtual bool Sending() const /*override*/;

    // vIndex: 34
    virtual void SetSendingMediaStatus(bool sending) /*override*/;

    // vIndex: 35
    virtual bool SendingMedia() const /*override*/;

    // vIndex: 36
    virtual bool IsAudioConfigured() const /*override*/;

    // vIndex: 37
    virtual void SetAsPartOfAllocation(bool part_of_allocation) /*override*/;

    // vIndex: 41
    virtual bool
    OnSendingRtpFrame(uint timestamp, int64 capture_time_ms, int payload_type, bool force_sender_report) /*override*/;

    // vIndex: 43
    virtual bool CanSendPacket(::webrtc::RtpPacketToSend const& packet) const /*override*/;

    // vIndex: 44
    virtual void AssignSequenceNumber(::webrtc::RtpPacketToSend& packet) /*override*/;

    // vIndex: 45
    virtual void SendPacket(
        ::std::unique_ptr<::webrtc::RtpPacketToSend> packet,
        ::webrtc::PacedPacketInfo const&             pacing_info
    ) /*override*/;

    // vIndex: 42
    virtual bool TrySendPacket(
        ::std::unique_ptr<::webrtc::RtpPacketToSend> packet,
        ::webrtc::PacedPacketInfo const&             pacing_info
    ) /*override*/;

    // vIndex: 46
    virtual void OnBatchComplete() /*override*/;

    // vIndex: 47
    virtual void SetFecProtectionParams(
        ::webrtc::FecProtectionParams const& delta_params,
        ::webrtc::FecProtectionParams const& key_params
    ) /*override*/;

    // vIndex: 48
    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFecPackets() /*override*/;

    // vIndex: 49
    virtual void OnAbortedRetransmissions(::rtc::ArrayView<ushort const> sequence_numbers) /*override*/;

    // vIndex: 50
    virtual void OnPacketsAcknowledged(::rtc::ArrayView<ushort const> sequence_numbers) /*override*/;

    // vIndex: 51
    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>
    GeneratePadding(uint64 target_size_bytes) /*override*/;

    // vIndex: 52
    virtual ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
    GetSentRtpPacketInfos(::rtc::ArrayView<ushort const> sequence_numbers) const /*override*/;

    // vIndex: 53
    virtual uint64 ExpectedPerPacketOverhead() const /*override*/;

    // vIndex: 54
    virtual void OnPacketSendingThreadSwitched() /*override*/;

    // vIndex: 55
    virtual ::webrtc::RtcpMode RTCP() const /*override*/;

    // vIndex: 56
    virtual void SetRTCPStatus(::webrtc::RtcpMode method) /*override*/;

    // vIndex: 57
    virtual int SetCNAME(::std::string_view c_name) /*override*/;

    // vIndex: 58
    virtual ::std::optional<::webrtc::TimeDelta> LastRtt() const /*override*/;

    // vIndex: 59
    virtual ::webrtc::TimeDelta ExpectedRetransmissionTime() const /*override*/;

    // vIndex: 60
    virtual int SendRTCP(::webrtc::RTCPPacketType packet_type) /*override*/;

    // vIndex: 61
    virtual void GetSendStreamDataCounters(
        ::webrtc::StreamDataCounters* rtp_counters,
        ::webrtc::StreamDataCounters* rtx_counters
    ) const /*override*/;

    // vIndex: 62
    virtual ::std::vector<::webrtc::ReportBlockData> GetLatestReportBlockData() const /*override*/;

    // vIndex: 63
    virtual ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const /*override*/;

    // vIndex: 64
    virtual ::std::optional<::webrtc::RtpRtcpInterface::NonSenderRttStats> GetNonSenderRttStats() const /*override*/;

    // vIndex: 2
    virtual void SetRemb(int64 bitrate_bps, ::std::vector<uint> ssrcs) /*override*/;

    // vIndex: 3
    virtual void UnsetRemb() /*override*/;

    // vIndex: 0
    virtual void SetTmmbn(::std::vector<::webrtc::rtcp::TmmbItem> bounding_set) /*override*/;

    // vIndex: 8
    virtual uint64 MaxRtpPacketSize() const /*override*/;

    // vIndex: 7
    virtual void SetMaxRtpPacketSize(uint64 rtp_packet_size) /*override*/;

    // vIndex: 65
    virtual int SendNACK(ushort const* nack_list, ushort size) /*override*/;

    // vIndex: 66
    virtual void SendNack(::std::vector<ushort> const& sequence_numbers) /*override*/;

    // vIndex: 67
    virtual void SetStorePacketsStatus(bool enable, ushort number_to_store) /*override*/;

    // vIndex: 1
    virtual void
    SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>> rtcp_packets) /*override*/;

    // vIndex: 69
    virtual int SendLossNotification(
        ushort last_decoded_seq_num,
        ushort last_received_seq_num,
        bool   decodability_flag,
        bool   buffering_allowed
    ) /*override*/;

    // vIndex: 38
    virtual ::webrtc::RtpSendRates GetSendRates() const /*override*/;

    // vIndex: 2
    virtual void OnReceivedNack(::std::vector<ushort> const& nack_sequence_numbers) /*override*/;

    // vIndex: 3
    virtual void
    OnReceivedRtcpReportBlocks(::rtc::ArrayView<::webrtc::ReportBlockData const> report_blocks) /*override*/;

    // vIndex: 1
    virtual void OnRequestSendReport() /*override*/;

    // vIndex: 68
    virtual void SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const& bitrate) /*override*/;

    // vIndex: 40
    virtual ::webrtc::RTPSender* RtpSender() /*override*/;

    // vIndex: 39
    virtual ::webrtc::RTPSender const* RtpSender() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCPSender::FeedbackState GetFeedbackState();

    MCNAPI void MaybeSendRtcp();

    MCNAPI void MaybeSendRtcpAtOrAfterTimestamp(::webrtc::Timestamp execution_time);

    MCNAPI explicit ModuleRtpRtcpImpl2(::webrtc::RtpRtcpInterface::Configuration const& configuration);

    MCNAPI void PeriodicUpdate();

    MCNAPI void
    ScheduleMaybeSendRtcpAtOrAfterTimestamp(::webrtc::Timestamp execution_time, ::webrtc::TimeDelta duration);

    MCNAPI void ScheduleRtcpSendEvaluation(::webrtc::TimeDelta duration);

    MCNAPI bool StorePackets() const;

    MCNAPI bool TimeToSendFullNackList(int64 now) const;

    MCNAPI int64 rtt_ms() const;

    MCNAPI void set_rtt_ms(int64 rtt_ms);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2>
    Create(::webrtc::RtpRtcpInterface::Configuration const& configuration);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const& configuration);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $IncomingRtcpPacket(::rtc::ArrayView<uchar const> rtcp_packet);

    MCNAPI void $SetRemoteSSRC(uint ssrc);

    MCNAPI void $SetLocalSsrc(uint local_ssrc);

    MCNAPI void $RegisterSendPayloadFrequency(int payload_type, int payload_frequency);

    MCNAPI int $DeRegisterSendPayload(char payload_type);

    MCNAPI void $SetExtmapAllowMixed(bool extmap_allow_mixed);

    MCNAPI void $RegisterRtpHeaderExtension(::std::string_view uri, int id);

    MCNAPI void $DeregisterSendRtpHeaderExtension(::std::string_view uri);

    MCNAPI bool $SupportsPadding() const;

    MCNAPI bool $SupportsRtxPayloadPadding() const;

    MCNAPI uint $StartTimestamp() const;

    MCNAPI void $SetStartTimestamp(uint timestamp);

    MCNAPI ushort $SequenceNumber() const;

    MCNAPI void $SetSequenceNumber(ushort seq_num);

    MCNAPI void $SetRtpState(::webrtc::RtpState const& rtp_state);

    MCNAPI void $SetRtxState(::webrtc::RtpState const& rtp_state);

    MCNAPI ::webrtc::RtpState $GetRtpState() const;

    MCNAPI ::webrtc::RtpState $GetRtxState() const;

    MCNAPI void $SetNonSenderRttMeasurement(bool enabled);

    MCNAPI uint $SSRC() const;

    MCNAPI void $SetMid(::std::string_view mid);

    MCNAPI void $SetRtxSendStatus(int mode);

    MCNAPI int $RtxSendStatus() const;

    MCNAPI ::std::optional<uint> $RtxSsrc() const;

    MCNAPI void $SetRtxSendPayloadType(int payload_type, int associated_payload_type);

    MCNAPI ::std::optional<uint> $FlexfecSsrc() const;

    MCNAPI int $SetSendingStatus(bool sending);

    MCNAPI bool $Sending() const;

    MCNAPI void $SetSendingMediaStatus(bool sending);

    MCNAPI bool $SendingMedia() const;

    MCNAPI bool $IsAudioConfigured() const;

    MCNAPI void $SetAsPartOfAllocation(bool part_of_allocation);

    MCNAPI bool $OnSendingRtpFrame(uint timestamp, int64 capture_time_ms, int payload_type, bool force_sender_report);

    MCNAPI bool $CanSendPacket(::webrtc::RtpPacketToSend const& packet) const;

    MCNAPI void $AssignSequenceNumber(::webrtc::RtpPacketToSend& packet);

    MCNAPI void
    $SendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend> packet, ::webrtc::PacedPacketInfo const& pacing_info);

    MCNAPI bool
    $TrySendPacket(::std::unique_ptr<::webrtc::RtpPacketToSend> packet, ::webrtc::PacedPacketInfo const& pacing_info);

    MCNAPI void $OnBatchComplete();

    MCNAPI void $SetFecProtectionParams(
        ::webrtc::FecProtectionParams const& delta_params,
        ::webrtc::FecProtectionParams const& key_params
    );

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> $FetchFecPackets();

    MCNAPI void $OnAbortedRetransmissions(::rtc::ArrayView<ushort const> sequence_numbers);

    MCNAPI void $OnPacketsAcknowledged(::rtc::ArrayView<ushort const> sequence_numbers);

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> $GeneratePadding(uint64 target_size_bytes);

    MCNAPI ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
    $GetSentRtpPacketInfos(::rtc::ArrayView<ushort const> sequence_numbers) const;

    MCNAPI uint64 $ExpectedPerPacketOverhead() const;

    MCNAPI void $OnPacketSendingThreadSwitched();

    MCNAPI ::webrtc::RtcpMode $RTCP() const;

    MCNAPI void $SetRTCPStatus(::webrtc::RtcpMode method);

    MCNAPI int $SetCNAME(::std::string_view c_name);

    MCNAPI ::std::optional<::webrtc::TimeDelta> $LastRtt() const;

    MCNAPI ::webrtc::TimeDelta $ExpectedRetransmissionTime() const;

    MCNAPI int $SendRTCP(::webrtc::RTCPPacketType packet_type);

    MCNAPI void $GetSendStreamDataCounters(
        ::webrtc::StreamDataCounters* rtp_counters,
        ::webrtc::StreamDataCounters* rtx_counters
    ) const;

    MCNAPI ::std::vector<::webrtc::ReportBlockData> $GetLatestReportBlockData() const;

    MCNAPI ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> $GetSenderReportStats() const;

    MCNAPI ::std::optional<::webrtc::RtpRtcpInterface::NonSenderRttStats> $GetNonSenderRttStats() const;

    MCNAPI void $SetRemb(int64 bitrate_bps, ::std::vector<uint> ssrcs);

    MCNAPI void $UnsetRemb();

    MCNAPI void $SetTmmbn(::std::vector<::webrtc::rtcp::TmmbItem> bounding_set);

    MCNAPI uint64 $MaxRtpPacketSize() const;

    MCNAPI void $SetMaxRtpPacketSize(uint64 rtp_packet_size);

    MCNAPI int $SendNACK(ushort const* nack_list, ushort size);

    MCNAPI void $SendNack(::std::vector<ushort> const& sequence_numbers);

    MCNAPI void $SetStorePacketsStatus(bool enable, ushort number_to_store);

    MCNAPI void $SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>> rtcp_packets);

    MCNAPI int $SendLossNotification(
        ushort last_decoded_seq_num,
        ushort last_received_seq_num,
        bool   decodability_flag,
        bool   buffering_allowed
    );

    MCNAPI ::webrtc::RtpSendRates $GetSendRates() const;

    MCNAPI void $OnReceivedNack(::std::vector<ushort> const& nack_sequence_numbers);

    MCNAPI void $OnReceivedRtcpReportBlocks(::rtc::ArrayView<::webrtc::ReportBlockData const> report_blocks);

    MCNAPI void $OnRequestSendReport();

    MCNAPI void $SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const& bitrate);

    MCNAPI ::webrtc::RTPSender* $RtpSender();

    MCNAPI ::webrtc::RTPSender const* $RtpSender() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpRtcpInterface();

    MCNAPI static void** $vftableForModuleRtpRtcp();
    // NOLINTEND
};

} // namespace webrtc
