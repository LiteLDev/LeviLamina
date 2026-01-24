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
    virtual ~ModuleRtpRtcpImpl2() /*override*/;

    virtual void IncomingRtcpPacket(::rtc::ArrayView<uchar const> rtcp_packet) /*override*/;

    virtual void SetRemoteSSRC(uint ssrc) /*override*/;

    virtual void SetLocalSsrc(uint local_ssrc) /*override*/;

    virtual void RegisterSendPayloadFrequency(int payload_type, int payload_frequency) /*override*/;

    virtual int DeRegisterSendPayload(schar payload_type) /*override*/;

    virtual void SetExtmapAllowMixed(bool extmap_allow_mixed) /*override*/;

    virtual void RegisterRtpHeaderExtension(::std::string_view uri, int id) /*override*/;

    virtual void DeregisterSendRtpHeaderExtension(::std::string_view uri) /*override*/;

    virtual bool SupportsPadding() const /*override*/;

    virtual bool SupportsRtxPayloadPadding() const /*override*/;

    virtual uint StartTimestamp() const /*override*/;

    virtual void SetStartTimestamp(uint timestamp) /*override*/;

    virtual ushort SequenceNumber() const /*override*/;

    virtual void SetSequenceNumber(ushort seq_num) /*override*/;

    virtual void SetRtpState(::webrtc::RtpState const& rtp_state) /*override*/;

    virtual void SetRtxState(::webrtc::RtpState const& rtp_state) /*override*/;

    virtual ::webrtc::RtpState GetRtpState() const /*override*/;

    virtual ::webrtc::RtpState GetRtxState() const /*override*/;

    virtual void SetNonSenderRttMeasurement(bool enabled) /*override*/;

    virtual uint SSRC() const /*override*/;

    virtual void SetMid(::std::string_view mid) /*override*/;

    virtual void SetRtxSendStatus(int mode) /*override*/;

    virtual int RtxSendStatus() const /*override*/;

    virtual ::std::optional<uint> RtxSsrc() const /*override*/;

    virtual void SetRtxSendPayloadType(int payload_type, int associated_payload_type) /*override*/;

    virtual ::std::optional<uint> FlexfecSsrc() const /*override*/;

    virtual int SetSendingStatus(bool sending) /*override*/;

    virtual bool Sending() const /*override*/;

    virtual void SetSendingMediaStatus(bool sending) /*override*/;

    virtual bool SendingMedia() const /*override*/;

    virtual bool IsAudioConfigured() const /*override*/;

    virtual void SetAsPartOfAllocation(bool part_of_allocation) /*override*/;

    virtual bool
    OnSendingRtpFrame(uint timestamp, int64 capture_time_ms, int payload_type, bool force_sender_report) /*override*/;

    virtual bool CanSendPacket(::webrtc::RtpPacketToSend const& packet) const /*override*/;

    virtual void AssignSequenceNumber(::webrtc::RtpPacketToSend& packet) /*override*/;

    virtual void SendPacket(
        ::std::unique_ptr<::webrtc::RtpPacketToSend> packet,
        ::webrtc::PacedPacketInfo const&             pacing_info
    ) /*override*/;

    virtual bool TrySendPacket(
        ::std::unique_ptr<::webrtc::RtpPacketToSend> packet,
        ::webrtc::PacedPacketInfo const&             pacing_info
    ) /*override*/;

    virtual void OnBatchComplete() /*override*/;

    virtual void SetFecProtectionParams(
        ::webrtc::FecProtectionParams const& delta_params,
        ::webrtc::FecProtectionParams const& key_params
    ) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> FetchFecPackets() /*override*/;

    virtual void OnAbortedRetransmissions(::rtc::ArrayView<ushort const> sequence_numbers) /*override*/;

    virtual void OnPacketsAcknowledged(::rtc::ArrayView<ushort const> sequence_numbers) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>
    GeneratePadding(uint64 target_size_bytes) /*override*/;

    virtual ::std::vector<::webrtc::RtpSequenceNumberMap::Info>
    GetSentRtpPacketInfos(::rtc::ArrayView<ushort const> sequence_numbers) const /*override*/;

    virtual uint64 ExpectedPerPacketOverhead() const /*override*/;

    virtual void OnPacketSendingThreadSwitched() /*override*/;

    virtual ::webrtc::RtcpMode RTCP() const /*override*/;

    virtual void SetRTCPStatus(::webrtc::RtcpMode method) /*override*/;

    virtual int SetCNAME(::std::string_view c_name) /*override*/;

    virtual ::std::optional<::webrtc::TimeDelta> LastRtt() const /*override*/;

    virtual ::webrtc::TimeDelta ExpectedRetransmissionTime() const /*override*/;

    virtual int SendRTCP(::webrtc::RTCPPacketType packet_type) /*override*/;

    virtual void GetSendStreamDataCounters(
        ::webrtc::StreamDataCounters* rtp_counters,
        ::webrtc::StreamDataCounters* rtx_counters
    ) const /*override*/;

    virtual ::std::vector<::webrtc::ReportBlockData> GetLatestReportBlockData() const /*override*/;

    virtual ::std::optional<::webrtc::RtpRtcpInterface::SenderReportStats> GetSenderReportStats() const /*override*/;

    virtual ::std::optional<::webrtc::RtpRtcpInterface::NonSenderRttStats> GetNonSenderRttStats() const /*override*/;

    virtual void SetRemb(int64 bitrate_bps, ::std::vector<uint> ssrcs) /*override*/;

    virtual void UnsetRemb() /*override*/;

    virtual void SetTmmbn(::std::vector<::webrtc::rtcp::TmmbItem> bounding_set) /*override*/;

    virtual uint64 MaxRtpPacketSize() const /*override*/;

    virtual void SetMaxRtpPacketSize(uint64 rtp_packet_size) /*override*/;

    virtual int SendNACK(ushort const* nack_list, ushort size) /*override*/;

    virtual void SendNack(::std::vector<ushort> const& sequence_numbers) /*override*/;

    virtual void SetStorePacketsStatus(bool enable, ushort number_to_store) /*override*/;

    virtual void
    SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>> rtcp_packets) /*override*/;

    virtual int SendLossNotification(
        ushort last_decoded_seq_num,
        ushort last_received_seq_num,
        bool   decodability_flag,
        bool   buffering_allowed
    ) /*override*/;

    virtual ::webrtc::RtpSendRates GetSendRates() const /*override*/;

    virtual void OnReceivedNack(::std::vector<ushort> const& nack_sequence_numbers) /*override*/;

    virtual void
    OnReceivedRtcpReportBlocks(::rtc::ArrayView<::webrtc::ReportBlockData const> report_blocks) /*override*/;

    virtual void OnRequestSendReport() /*override*/;

    virtual void SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const& bitrate) /*override*/;

    virtual ::webrtc::RTPSender* RtpSender() /*override*/;

    virtual ::webrtc::RTPSender const* RtpSender() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCPSender::FeedbackState GetFeedbackState();

    MCNAPI void MaybeSendRtcp();

    MCNAPI explicit ModuleRtpRtcpImpl2(::webrtc::RtpRtcpInterface::Configuration const& configuration);

    MCNAPI void PeriodicUpdate();

    MCNAPI void
    ScheduleMaybeSendRtcpAtOrAfterTimestamp(::webrtc::Timestamp execution_time, ::webrtc::TimeDelta duration);

    MCNAPI int64 rtt_ms() const;
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

    MCNAPI int $DeRegisterSendPayload(schar payload_type);

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
