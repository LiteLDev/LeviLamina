#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpSenderInfo {
public:
    // prevent constructor by default
    RtpSenderInfo& operator=(RtpSenderInfo const&);
    RtpSenderInfo(RtpSenderInfo const&);
    RtpSenderInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1RtpSenderInfo@webrtc@@QEAA@XZ
    MCAPI ~RtpSenderInfo();

    // NOLINTEND
};

}; // namespace webrtc
