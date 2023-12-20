#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpCodecCapability {
public:
    // prevent constructor by default
    RtpCodecCapability& operator=(RtpCodecCapability const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RtpCodecCapability@webrtc@@QEAA@XZ
    MCAPI RtpCodecCapability();

    // symbol: ??0RtpCodecCapability@webrtc@@QEAA@AEBU01@@Z
    MCAPI RtpCodecCapability(struct webrtc::RtpCodecCapability const&);

    // symbol: ??1RtpCodecCapability@webrtc@@QEAA@XZ
    MCAPI ~RtpCodecCapability();

    // NOLINTEND
};

}; // namespace webrtc
