#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpEncodingParameters {
public:
    // prevent constructor by default
    RtpEncodingParameters& operator=(RtpEncodingParameters const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RtpEncodingParameters@webrtc@@QEAA@XZ
    MCAPI RtpEncodingParameters();

    // symbol: ??0RtpEncodingParameters@webrtc@@QEAA@AEBU01@@Z
    MCAPI RtpEncodingParameters(struct webrtc::RtpEncodingParameters const&);

    // symbol: ??1RtpEncodingParameters@webrtc@@QEAA@XZ
    MCAPI ~RtpEncodingParameters();

    // NOLINTEND
};

}; // namespace webrtc
