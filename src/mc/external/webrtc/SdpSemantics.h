#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SdpSemantics : int {
    KPlanBDeprecated = 0,
    KPlanB           = 0,
    KUnifiedPlan     = 1,
};

}
