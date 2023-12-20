#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ProbeClusterConfig {
public:
    // prevent constructor by default
    ProbeClusterConfig& operator=(ProbeClusterConfig const&);
    ProbeClusterConfig(ProbeClusterConfig const&);
    ProbeClusterConfig();
};

}; // namespace webrtc
