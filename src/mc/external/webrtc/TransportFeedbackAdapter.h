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

struct TransportFeedbackAdapter {
public:
    // prevent constructor by default
    TransportFeedbackAdapter& operator=(TransportFeedbackAdapter const&);
    TransportFeedbackAdapter(TransportFeedbackAdapter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddPacket(::webrtc::RtpPacketSendInfo const&, uint64, ::webrtc::Timestamp);

    MCAPI ::webrtc::DataSize GetOutstandingData() const;

    MCAPI ::std::optional<::webrtc::SentPacket> ProcessSentPacket(::rtc::SentPacket const&);

    MCAPI ::std::optional<::webrtc::TransportPacketsFeedback>
    ProcessTransportFeedback(::webrtc::rtcp::TransportFeedback const&, ::webrtc::Timestamp);

    MCAPI ::std::vector<::webrtc::PacketResult>
    ProcessTransportFeedbackInner(::webrtc::rtcp::TransportFeedback const&, ::webrtc::Timestamp);

    MCAPI void SetNetworkRoute(::rtc::NetworkRoute const&);

    MCAPI TransportFeedbackAdapter();

    MCAPI ~TransportFeedbackAdapter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
