#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpFeedbackMessageType.h"
#include "mc/deps/webrtc/RtcpFeedbackType.h"

namespace webrtc {

struct RtcpFeedback {
public:
    // prevent constructor by default
    RtcpFeedback& operator=(RtcpFeedback const&);
    RtcpFeedback();

public:
    // NOLINTBEGIN
    // symbol: ??0RtcpFeedback@webrtc@@QEAA@W4RtcpFeedbackType@1@@Z
    MCAPI explicit RtcpFeedback(::webrtc::RtcpFeedbackType);

    // symbol: ??0RtcpFeedback@webrtc@@QEAA@AEBU01@@Z
    MCAPI RtcpFeedback(struct webrtc::RtcpFeedback const&);

    // symbol: ??0RtcpFeedback@webrtc@@QEAA@W4RtcpFeedbackType@1@W4RtcpFeedbackMessageType@1@@Z
    MCAPI RtcpFeedback(::webrtc::RtcpFeedbackType, ::webrtc::RtcpFeedbackMessageType);

    // symbol: ??1RtcpFeedback@webrtc@@QEAA@XZ
    MCAPI ~RtcpFeedback();

    // NOLINTEND
};

}; // namespace webrtc
