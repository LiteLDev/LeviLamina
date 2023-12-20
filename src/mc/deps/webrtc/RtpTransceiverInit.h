#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpTransceiverInit {
public:
    // prevent constructor by default
    RtpTransceiverInit& operator=(RtpTransceiverInit const&);
    RtpTransceiverInit(RtpTransceiverInit const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RtpTransceiverInit@webrtc@@QEAA@XZ
    MCAPI RtpTransceiverInit();

    // symbol: ??1RtpTransceiverInit@webrtc@@QEAA@XZ
    MCAPI ~RtpTransceiverInit();

    // NOLINTEND
};

}; // namespace webrtc
