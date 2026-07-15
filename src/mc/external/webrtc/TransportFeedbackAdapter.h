#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct NetworkRoute; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct PacketFeedback; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct SentPacket; }
namespace webrtc { struct SentPacketInfo; }
namespace webrtc { struct TransportPacketsFeedback; }
namespace webrtc::rtcp { class CongestionControlFeedback; }
namespace webrtc::rtcp { class TransportFeedback; }
// clang-format on

namespace webrtc {

class TransportFeedbackAdapter {
public:
    // TransportFeedbackAdapter inner types declare
    // clang-format off
    struct SsrcAndRtpSequencenumber;
    // clang-format on

    // TransportFeedbackAdapter inner types define
    enum class SendTimeHistoryStatus : int {
        KNotAdded  = 0,
        KOk        = 1,
        KDuplicate = 2,
    };

    struct SsrcAndRtpSequencenumber {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk79bef8;
        ::ll::UntypedStorage<2, 2> mUnkd6c514;
        // NOLINTEND

    public:
        // prevent constructor by default
        SsrcAndRtpSequencenumber& operator=(SsrcAndRtpSequencenumber const&);
        SsrcAndRtpSequencenumber(SsrcAndRtpSequencenumber const&);
        SsrcAndRtpSequencenumber();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk13b400;
    ::ll::UntypedStorage<8, 8>  mUnk6447c9;
    ::ll::UntypedStorage<8, 8>  mUnk6f337e;
    ::ll::UntypedStorage<8, 16> mUnk6a6fe9;
    ::ll::UntypedStorage<8, 8>  mUnk1e1c45;
    ::ll::UntypedStorage<8, 16> mUnk4b5a36;
    ::ll::UntypedStorage<4, 36> mUnk8d42f7;
    ::ll::UntypedStorage<8, 8>  mUnkf19fd4;
    ::ll::UntypedStorage<8, 8>  mUnkd2c4f8;
    ::ll::UntypedStorage<4, 8>  mUnk7f5039;
    ::ll::UntypedStorage<8, 16> mUnkd55dc9;
    ::ll::UntypedStorage<8, 16> mUnk6e1c5d;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportFeedbackAdapter& operator=(TransportFeedbackAdapter const&);
    TransportFeedbackAdapter(TransportFeedbackAdapter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddPacket(
        ::webrtc::RtpPacketToSend const& packet_to_send,
        ::webrtc::PacedPacketInfo const& pacing_info,
        uint64                           overhead_bytes,
        ::webrtc::Timestamp              creation_time
    );

    MCNAPI ::webrtc::DataSize GetOutstandingData() const;

    MCNAPI ::std::optional<::webrtc::TransportPacketsFeedback> ProcessCongestionControlFeedback(
        ::webrtc::rtcp::CongestionControlFeedback const& feedback,
        ::webrtc::Timestamp                              feedback_receive_time
    );

    MCNAPI ::std::optional<::webrtc::SentPacket> ProcessSentPacket(::webrtc::SentPacketInfo const& sent_packet);

    MCNAPI ::std::optional<::webrtc::TransportPacketsFeedback> ProcessTransportFeedback(
        ::webrtc::rtcp::TransportFeedback const& feedback,
        ::webrtc::Timestamp                      feedback_receive_time
    );

    MCNAPI ::std::optional<::webrtc::PacketFeedback> RetrievePacketFeedback(int64 transport_seq_num, bool received);

    MCNAPI void SetNetworkRoute(::webrtc::NetworkRoute const& network_route);

    MCNAPI ::std::optional<::webrtc::TransportPacketsFeedback> ToTransportFeedback(
        ::std::vector<::webrtc::PacketResult> packet_results,
        ::webrtc::Timestamp                   feedback_receive_time,
        bool                                  supports_ecn
    );

    MCNAPI TransportFeedbackAdapter();

    MCNAPI ~TransportFeedbackAdapter();
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

} // namespace webrtc
