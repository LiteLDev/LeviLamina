#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpCapabilities {
public:
    // prevent constructor by default
    RtpCapabilities& operator=(RtpCapabilities const&);
    RtpCapabilities(RtpCapabilities const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RtpCapabilities@webrtc@@QEAA@XZ
    MCAPI RtpCapabilities();

    // symbol: ??1RtpCapabilities@webrtc@@QEAA@XZ
    MCAPI ~RtpCapabilities();

    // NOLINTEND
};

}; // namespace webrtc
