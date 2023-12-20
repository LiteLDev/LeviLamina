#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpPacketInfos {
public:
    // prevent constructor by default
    RtpPacketInfos& operator=(RtpPacketInfos const&);
    RtpPacketInfos(RtpPacketInfos const&);
    RtpPacketInfos();

public:
    // NOLINTBEGIN
    // symbol: ??1RtpPacketInfos@webrtc@@QEAA@XZ
    MCAPI ~RtpPacketInfos();

    // NOLINTEND
};

}; // namespace webrtc
