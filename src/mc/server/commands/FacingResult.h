#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RotationCommandUtils {

enum class FacingResult : int {
    HaveFacing = 0x0,
    NoFacing   = 0x1,
    Error      = 0x2,
};
};
