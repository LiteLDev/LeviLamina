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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk7d220d;
        ::ll::UntypedStorage<4, 4>  mUnkb8d0c3;
        ::ll::UntypedStorage<8, 8>  mUnkf4db1b;
        ::ll::UntypedStorage<8, 8>  mUnk8c7d15;
        ::ll::UntypedStorage<1, 1>  mUnk846c91;
        ::ll::UntypedStorage<8, 64> mUnk7833ff;
        ::ll::UntypedStorage<8, 8>  mUnk84a888;
        ::ll::UntypedStorage<8, 16> mUnkfa1b4c;
        ::ll::UntypedStorage<8, 8>  mUnk707772;
        ::ll::UntypedStorage<8, 8>  mUnka92548;
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
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::webrtc::RTCPSender::Configuration
        FromRtpRtcpConfiguration(::webrtc::RtpRtcpInterface::Configuration const& configuration);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FeedbackState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk722de1;
        ::ll::UntypedStorage<8, 8>  mUnk876a15;
        ::ll::UntypedStorage<8, 8>  mUnk9b0e90;
        ::ll::UntypedStorage<4, 4>  mUnk536cd0;
        ::ll::UntypedStorage<8, 8>  mUnk77419c;
        ::ll::UntypedStorage<8, 24> mUnkd54486;
        ::ll::UntypedStorage<8, 8>  mUnk65f342;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeedbackState& operator=(FeedbackState const&);
        FeedbackState(FeedbackState const&);

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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>   mUnkf71045;
        ::ll::UntypedStorage<8, 8>    mUnkf2560e;
        ::ll::UntypedStorage<8, 8>    mUnk151275;
        ::ll::UntypedStorage<1, 1500> mUnk3685ce;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketSender& operator=(PacketSender const&);
        PacketSender(PacketSender const&);
        PacketSender();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PacketSender(::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback, uint64 max_packet_size);

        MCNAPI ~PacketSender();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback, uint64 max_packet_size);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ReportFlag {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3a1502;
        ::ll::UntypedStorage<1, 1> mUnkcc3f3b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReportFlag& operator=(ReportFlag const&);
        ReportFlag(ReportFlag const&);
        ReportFlag();
    };

    class RtcpContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf0921b;
        ::ll::UntypedStorage<4, 4> mUnk47c83c;
        ::ll::UntypedStorage<8, 8> mUnkfbc631;
        ::ll::UntypedStorage<8, 8> mUnk645408;
        // NOLINTEND

    public:
        // prevent constructor by default
        RtcpContext& operator=(RtcpContext const&);
        RtcpContext(RtcpContext const&);
        RtcpContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk9e28cb;
    ::ll::UntypedStorage<4, 4>   mUnke07adf;
    ::ll::UntypedStorage<8, 8>   mUnkfb4089;
    ::ll::UntypedStorage<8, 8>   mUnk853c06;
    ::ll::UntypedStorage<4, 4>   mUnk19e398;
    ::ll::UntypedStorage<8, 8>   mUnk1b3756;
    ::ll::UntypedStorage<8, 8>   mUnkb5237c;
    ::ll::UntypedStorage<8, 8>   mUnk7c8856;
    ::ll::UntypedStorage<8, 64>  mUnkcab8b2;
    ::ll::UntypedStorage<8, 40>  mUnk6bcb05;
    ::ll::UntypedStorage<1, 1>   mUnkf2c49d;
    ::ll::UntypedStorage<8, 16>  mUnk6d5944;
    ::ll::UntypedStorage<4, 4>   mUnkbebbb8;
    ::ll::UntypedStorage<4, 4>   mUnk5fa3cd;
    ::ll::UntypedStorage<8, 16>  mUnk2575b1;
    ::ll::UntypedStorage<4, 4>   mUnk88da66;
    ::ll::UntypedStorage<8, 32>  mUnkfd331c;
    ::ll::UntypedStorage<8, 8>   mUnkbd2c07;
    ::ll::UntypedStorage<8, 24>  mUnk41ffda;
    ::ll::UntypedStorage<1, 1>   mUnkced422;
    ::ll::UntypedStorage<4, 32>  mUnkc7c6fe;
    ::ll::UntypedStorage<8, 8>   mUnke65bfc;
    ::ll::UntypedStorage<8, 24>  mUnk2b320f;
    ::ll::UntypedStorage<8, 24>  mUnkbdca84;
    ::ll::UntypedStorage<4, 4>   mUnkec5393;
    ::ll::UntypedStorage<4, 4>   mUnk11d885;
    ::ll::UntypedStorage<8, 8>   mUnk8b58de;
    ::ll::UntypedStorage<1, 1>   mUnkb03c5c;
    ::ll::UntypedStorage<8, 8>   mUnk8f651c;
    ::ll::UntypedStorage<4, 20>  mUnkfc3915;
    ::ll::UntypedStorage<4, 12>  mUnk6f13ad;
    ::ll::UntypedStorage<4, 168> mUnk45fcd1;
    ::ll::UntypedStorage<1, 1>   mUnk436763;
    ::ll::UntypedStorage<8, 16>  mUnkb248f8;
    ::ll::UntypedStorage<1, 1>   mUnkaddaca;
    ::ll::UntypedStorage<8, 16>  mUnk9734fb;
    ::ll::UntypedStorage<8, 16>  mUnk7e193f;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCPSender& operator=(RTCPSender const&);
    RTCPSender(RTCPSender const&);
    RTCPSender();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RTCPSender();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AllVolatileFlagsConsumed() const;

    MCNAPI void BuildBYE(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void
    BuildExtendedReports(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildFIR(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void
    BuildLossNotification(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildNACK(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildPLI(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildREMB(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildRR(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildSDES(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildSR(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildTMMBN(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI void BuildTMMBR(::webrtc::RTCPSender::RtcpContext const& ctx, ::webrtc::RTCPSender::PacketSender& sender);

    MCNAPI ::std::optional<::webrtc::VideoBitrateAllocation>
    CheckAndUpdateLayerStructure(::webrtc::VideoBitrateAllocation const& bitrate) const;

    MCNAPI ::std::optional<int> ComputeCompoundRTCPPacket(
        ::webrtc::RTCPSender::FeedbackState const& feedback_state,
        ::webrtc::RTCPPacketType                   packet_type,
        int                                        nack_size,
        ushort const*                              nack_list,
        ::webrtc::RTCPSender::PacketSender&        sender
    );

    MCNAPI ::webrtc::TimeDelta ComputeTimeUntilNextReport(::webrtc::DataRate send_bitrate);

    MCNAPI bool ConsumeFlag(uint type, bool forced);

    MCNAPI ::std::vector<::webrtc::rtcp::ReportBlock>
    CreateReportBlocks(::webrtc::RTCPSender::FeedbackState const& feedback_state);

    MCNAPI bool IsFlagPresent(uint type) const;

    MCNAPI void PrepareReport(::webrtc::RTCPSender::FeedbackState const& feedback_state);

    MCNAPI explicit RTCPSender(::webrtc::RTCPSender::Configuration config);

    MCNAPI uint SSRC() const;

    MCNAPI void SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>> rtcp_packets);

    MCNAPI int SendLossNotification(
        ::webrtc::RTCPSender::FeedbackState const& feedback_state,
        ushort                                     last_decoded_seq_num,
        ushort                                     last_received_seq_num,
        bool                                       decodability_flag,
        bool                                       buffering_allowed
    );

    MCNAPI int SendRTCP(
        ::webrtc::RTCPSender::FeedbackState const& feedback_state,
        ::webrtc::RTCPPacketType                   packet_type,
        int                                        nack_size,
        ushort const*                              nack_list
    );

    MCNAPI bool Sending() const;

    MCNAPI int SetCNAME(::std::string_view c_name);

    MCNAPI void SetFlag(uint type, bool is_volatile);

    MCNAPI void SetLastRtpTime(
        uint                                 rtp_timestamp,
        ::std::optional<::webrtc::Timestamp> capture_time,
        ::std::optional<schar>               payload_type
    );

    MCNAPI void SetMaxRtpPacketSize(uint64 max_packet_size);

    MCNAPI void SetNextRtcpSendEvaluationDuration(::webrtc::TimeDelta duration);

    MCNAPI void SetNonSenderRttMeasurement(bool enabled);

    MCNAPI void SetRTCPStatus(::webrtc::RtcpMode new_method);

    MCNAPI void SetRemb(int64 bitrate_bps, ::std::vector<uint> ssrcs);

    MCNAPI void SetRemoteSSRC(uint ssrc);

    MCNAPI void SetRtpClockRate(schar payload_type, int rtp_clock_rate_hz);

    MCNAPI void SetSendingStatus(::webrtc::RTCPSender::FeedbackState const& feedback_state, bool sending);

    MCNAPI void SetSsrc(uint ssrc);

    MCNAPI void SetTimestampOffset(uint timestamp_offset);

    MCNAPI void SetTmmbn(::std::vector<::webrtc::rtcp::TmmbItem> bounding_set);

    MCNAPI void SetVideoBitrateAllocation(::webrtc::VideoBitrateAllocation const& bitrate);

    MCNAPI ::webrtc::RtcpMode Status() const;

    MCNAPI bool TimeToSendRTCPReport(bool send_keyframe_before_rtp) const;

    MCNAPI void UnsetRemb();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCPSender::Configuration config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
