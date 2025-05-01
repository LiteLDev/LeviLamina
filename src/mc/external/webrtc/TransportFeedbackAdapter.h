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
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddPacket(::webrtc::RtpPacketSendInfo const&, uint64, ::webrtc::Timestamp);

    MCNAPI ::webrtc::DataSize GetOutstandingData() const;

    MCNAPI ::std::optional<::webrtc::SentPacket> ProcessSentPacket(::rtc::SentPacket const&);

    MCNAPI ::std::optional<::webrtc::TransportPacketsFeedback>
    ProcessTransportFeedback(::webrtc::rtcp::TransportFeedback const&, ::webrtc::Timestamp);

    MCNAPI ::std::vector<::webrtc::PacketResult>
    ProcessTransportFeedbackInner(::webrtc::rtcp::TransportFeedback const&, ::webrtc::Timestamp);

    MCNAPI void SetNetworkRoute(::rtc::NetworkRoute const&);

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
