#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DegradationPreference : int {
    Disabled = 0,
    MaintainFramerate = 1,
    MaintainResolution = 2,
    Balanced = 3,
};

}
