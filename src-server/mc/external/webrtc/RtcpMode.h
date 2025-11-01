#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtcpMode : int {
    KOff         = 0,
    KCompound    = 1,
    KReducedSize = 2,
};

}
