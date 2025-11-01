#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class DataSize; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct RtpPacketSendInfo; }
namespace webrtc { struct SentPacket; }
namespace webrtc { struct TransportPacketsFeedback; }
namespace webrtc::rtcp { class TransportFeedback; }
// clang-format on

namespace webrtc {

class TransportFeedbackAdapter {
public:
    // TransportFeedbackAdapter inner types define
    enum class SendTimeHistoryStatus : int {
        KNotAdded = 0,
        KOk = 1,
        KDuplicate = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk13b400;
    ::ll::UntypedStorage<8, 8> mUnk6447c9;
    ::ll::UntypedStorage<8, 8> mUnk6f337e;
    ::ll::UntypedStorage<8, 16> mUnk6a6fe9;
    ::ll::UntypedStorage<8, 16> mUnk6e1c5d;
    ::ll::UntypedStorage<8, 8> mUnk1e1c45;
    ::ll::UntypedStorage<8, 16> mUnk4b5a36;
    ::ll::UntypedStorage<8, 8> mUnkf19fd4;
    ::ll::UntypedStorage<8, 8> mUnk15199e;
    ::ll::UntypedStorage<4, 36> mUnk3634d7;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportFeedbackAdapter& operator=(TransportFeedbackAdapter const&);
    TransportFeedbackAdapter(TransportFeedbackAdapter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddPacket(::webrtc::RtpPacketSendInfo const& packet_info, uint64 overhead_bytes, ::webrtc::Timestamp creation_time);

    MCNAPI ::webrtc::DataSize GetOutstandingData() const;

    MCNAPI ::std::optional<::webrtc::SentPacket> ProcessSentPacket(::rtc::SentPacket const& sent_packet);

    MCNAPI ::std::optional<::webrtc::TransportPacketsFeedback> ProcessTransportFeedback(::webrtc::rtcp::TransportFeedback const& feedback, ::webrtc::Timestamp feedback_receive_time);

    MCNAPI ::std::vector<::webrtc::PacketResult> ProcessTransportFeedbackInner(::webrtc::rtcp::TransportFeedback const& feedback, ::webrtc::Timestamp feedback_receive_time);

    MCNAPI void SetNetworkRoute(::rtc::NetworkRoute const& network_route);

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

}
