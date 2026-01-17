#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class CaptureMode : int {
    PreserveAll   = 0,
    PreserveAlpha = 1,
    ObfuscateAll  = 2,
};

}
