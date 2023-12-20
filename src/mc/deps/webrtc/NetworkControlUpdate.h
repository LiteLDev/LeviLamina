#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkControlUpdate {
public:
    // prevent constructor by default
    NetworkControlUpdate& operator=(NetworkControlUpdate const&);

public:
    // NOLINTBEGIN
    // symbol: ??0NetworkControlUpdate@webrtc@@QEAA@XZ
    MCAPI NetworkControlUpdate();

    // symbol: ??0NetworkControlUpdate@webrtc@@QEAA@AEBU01@@Z
    MCAPI NetworkControlUpdate(struct webrtc::NetworkControlUpdate const&);

    // symbol: ??1NetworkControlUpdate@webrtc@@QEAA@XZ
    MCAPI ~NetworkControlUpdate();

    // NOLINTEND
};

}; // namespace webrtc
