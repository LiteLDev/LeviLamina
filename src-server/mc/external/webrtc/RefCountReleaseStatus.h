#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RefCountReleaseStatus : int {
    KDroppedLastRef = 0,
    KOtherRefsRemained = 1,
};

}
