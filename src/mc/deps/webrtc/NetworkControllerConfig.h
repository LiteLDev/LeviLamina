#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkControllerConfig {
public:
    // prevent constructor by default
    NetworkControllerConfig& operator=(NetworkControllerConfig const&);
    NetworkControllerConfig();

public:
    // NOLINTBEGIN
    // symbol: ??0NetworkControllerConfig@webrtc@@QEAA@AEBU01@@Z
    MCAPI NetworkControllerConfig(struct webrtc::NetworkControllerConfig const&);

    // symbol: ??1NetworkControllerConfig@webrtc@@QEAA@XZ
    MCAPI ~NetworkControllerConfig();

    // NOLINTEND
};

}; // namespace webrtc
