#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct StreamDataCounters {
public:
    // prevent constructor by default
    StreamDataCounters& operator=(StreamDataCounters const&);
    StreamDataCounters(StreamDataCounters const&);

public:
    // NOLINTBEGIN
    // symbol: ??0StreamDataCounters@webrtc@@QEAA@XZ
    MCAPI StreamDataCounters();

    // NOLINTEND
};

}; // namespace webrtc
