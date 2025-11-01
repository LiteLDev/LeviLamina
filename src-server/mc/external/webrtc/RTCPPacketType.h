#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RTCPPacketType : uint {
    // bitfield representation
    KRtcpReport = 1u << 0,
    KRtcpSr = 1u << 1,
    KRtcpRr = 1u << 2,
    KRtcpSdes = 1u << 3,
    KRtcpBye = 1u << 4,
    KRtcpPli = 1u << 5,
    KRtcpNack = 1u << 6,
    KRtcpFir = 1u << 7,
    KRtcpTmmbr = 1u << 8,
    KRtcpTmmbn = 1u << 9,
    KRtcpSrReq = 1u << 10,
    KRtcpLossNotification = 1u << 13,
    KRtcpRemb = 1u << 16,
    KRtcpTransmissionTimeOffset = 1u << 17,
    KRtcpXrReceiverReferenceTime = 1u << 18,
    KRtcpXrDlrrReportBlock = 1u << 19,
    KRtcpTransportFeedback = 1u << 20,
    KRtcpXrTargetBitrate = 1u << 21,
};

}
