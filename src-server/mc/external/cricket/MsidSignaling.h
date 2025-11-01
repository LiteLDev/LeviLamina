#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class MsidSignaling : int {
    // bitfield representation
    KMsidSignalingNotUsed = 0,
    KMsidSignalingMediaSection = 1 << 0,
    KMsidSignalingSsrcAttribute = 1 << 1,
    KMsidSignalingSemantic = 1 << 2,
};

}
