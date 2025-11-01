#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class QualityLimitationReason : int {
    KNone = 0,
    KCpu = 1,
    KBandwidth = 2,
    KOther = 3,
};

}
