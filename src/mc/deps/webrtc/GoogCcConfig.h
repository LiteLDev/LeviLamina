#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct GoogCcConfig {
public:
    // prevent constructor by default
    GoogCcConfig& operator=(GoogCcConfig const&);
    GoogCcConfig(GoogCcConfig const&);
    GoogCcConfig();

public:
    // NOLINTBEGIN
    // symbol: ??1GoogCcConfig@webrtc@@QEAA@XZ
    MCAPI ~GoogCcConfig();

    // NOLINTEND
};

}; // namespace webrtc
