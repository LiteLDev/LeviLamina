#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceGatheringState : int {
    KIceGatheringNew       = 0,
    KIceGatheringGathering = 1,
    KIceGatheringComplete  = 2,
};

}
