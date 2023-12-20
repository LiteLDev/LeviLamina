#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacerConfig {
public:
    // prevent constructor by default
    PacerConfig& operator=(PacerConfig const&);
    PacerConfig(PacerConfig const&);
    PacerConfig();
};

}; // namespace webrtc
