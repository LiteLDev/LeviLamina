#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtcpParameters {
public:
    // prevent constructor by default
    RtcpParameters& operator=(RtcpParameters const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RtcpParameters@webrtc@@QEAA@XZ
    MCAPI RtcpParameters();

    // symbol: ??0RtcpParameters@webrtc@@QEAA@AEBU01@@Z
    MCAPI RtcpParameters(struct webrtc::RtcpParameters const&);

    // symbol: ??8RtcpParameters@webrtc@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct webrtc::RtcpParameters const&) const;

    // symbol: ??1RtcpParameters@webrtc@@QEAA@XZ
    MCAPI ~RtcpParameters();

    // NOLINTEND
};

}; // namespace webrtc
