#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceGatheringState : int {
    KIceGatheringNew = 0,
    KIceGatheringGathering = 1,
    KIceGatheringComplete = 2,
};

}
