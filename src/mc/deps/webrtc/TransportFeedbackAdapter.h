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
    // prevent constructor by default
    TransportFeedbackAdapter& operator=(TransportFeedbackAdapter const&);
    TransportFeedbackAdapter(TransportFeedbackAdapter const&);

public:
    // NOLINTBEGIN
    // symbol: ?AddPacket@TransportFeedbackAdapter@webrtc@@QEAAXAEBURtpPacketSendInfo@2@_KVTimestamp@2@@Z
    MCAPI void AddPacket(struct webrtc::RtpPacketSendInfo const&, uint64, class webrtc::Timestamp);

    // symbol: ?GetOutstandingData@TransportFeedbackAdapter@webrtc@@QEBA?AVDataSize@2@XZ
    MCAPI class webrtc::DataSize GetOutstandingData() const;

    // symbol:
    // ?ProcessSentPacket@TransportFeedbackAdapter@webrtc@@QEAA?AV?$optional@USentPacket@webrtc@@@std@@AEBUSentPacket@rtc@@@Z
    MCAPI std::optional<struct webrtc::SentPacket> ProcessSentPacket(struct rtc::SentPacket const&);

    // symbol:
    // ?ProcessTransportFeedback@TransportFeedbackAdapter@webrtc@@QEAA?AV?$optional@UTransportPacketsFeedback@webrtc@@@std@@AEBVTransportFeedback@rtcp@2@VTimestamp@2@@Z
    MCAPI std::optional<struct webrtc::TransportPacketsFeedback>
          ProcessTransportFeedback(class webrtc::rtcp::TransportFeedback const&, class webrtc::Timestamp);

    // symbol: ?SetNetworkRoute@TransportFeedbackAdapter@webrtc@@QEAAXAEBUNetworkRoute@rtc@@@Z
    MCAPI void SetNetworkRoute(struct rtc::NetworkRoute const&);

    // symbol: ??0TransportFeedbackAdapter@webrtc@@QEAA@XZ
    MCAPI TransportFeedbackAdapter();

    // symbol: ??1TransportFeedbackAdapter@webrtc@@QEAA@XZ
    MCAPI ~TransportFeedbackAdapter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ProcessTransportFeedbackInner@TransportFeedbackAdapter@webrtc@@AEAA?AV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@AEBVTransportFeedback@rtcp@2@VTimestamp@2@@Z
    MCAPI std::vector<struct webrtc::PacketResult>
          ProcessTransportFeedbackInner(class webrtc::rtcp::TransportFeedback const&, class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
