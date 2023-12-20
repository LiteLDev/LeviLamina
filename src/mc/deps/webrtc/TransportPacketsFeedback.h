#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

struct TransportPacketsFeedback {
public:
    // prevent constructor by default
    TransportPacketsFeedback& operator=(TransportPacketsFeedback const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?PacketsWithFeedback@TransportPacketsFeedback@webrtc@@QEBA?AV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<struct webrtc::PacketResult> PacketsWithFeedback() const;

    // symbol:
    // ?ReceivedWithSendInfo@TransportPacketsFeedback@webrtc@@QEBA?AV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<struct webrtc::PacketResult> ReceivedWithSendInfo() const;

    // symbol:
    // ?SortedByReceiveTime@TransportPacketsFeedback@webrtc@@QEBA?AV?$vector@UPacketResult@webrtc@@V?$allocator@UPacketResult@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<struct webrtc::PacketResult> SortedByReceiveTime() const;

    // symbol: ??0TransportPacketsFeedback@webrtc@@QEAA@XZ
    MCAPI TransportPacketsFeedback();

    // symbol: ??0TransportPacketsFeedback@webrtc@@QEAA@AEBU01@@Z
    MCAPI TransportPacketsFeedback(struct webrtc::TransportPacketsFeedback const&);

    // symbol: ??1TransportPacketsFeedback@webrtc@@QEAA@XZ
    MCAPI ~TransportPacketsFeedback();

    // NOLINTEND
};

}; // namespace webrtc
