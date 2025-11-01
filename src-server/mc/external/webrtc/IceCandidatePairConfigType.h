#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairConfigType : int {
    KAdded = 0,
    KUpdated = 1,
    KDestroyed = 2,
    KSelected = 3,
    KNumValues = 4,
};

}
