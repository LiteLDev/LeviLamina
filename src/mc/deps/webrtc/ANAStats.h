#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ANAStats {
public:
    // prevent constructor by default
    ANAStats& operator=(ANAStats const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ANAStats@webrtc@@QEAA@XZ
    MCAPI ANAStats();

    // symbol: ??0ANAStats@webrtc@@QEAA@AEBU01@@Z
    MCAPI ANAStats(struct webrtc::ANAStats const&);

    // symbol: ??1ANAStats@webrtc@@QEAA@XZ
    MCAPI ~ANAStats();

    // NOLINTEND
};

}; // namespace webrtc
