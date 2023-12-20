#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct StreamsConfig {
public:
    // prevent constructor by default
    StreamsConfig& operator=(StreamsConfig const&);

public:
    // NOLINTBEGIN
    // symbol: ??0StreamsConfig@webrtc@@QEAA@XZ
    MCAPI StreamsConfig();

    // symbol: ??0StreamsConfig@webrtc@@QEAA@AEBU01@@Z
    MCAPI StreamsConfig(struct webrtc::StreamsConfig const&);

    // symbol: ??1StreamsConfig@webrtc@@QEAA@XZ
    MCAPI ~StreamsConfig();

    // NOLINTEND
};

}; // namespace webrtc
