#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ControlScheme {

enum class Scheme : uchar {
    LockedPlayerRelativeStrafe = 0,
    CameraRelative             = 1,
    CameraRelativeStrafe       = 2,
    PlayerRelative             = 3,
    PlayerRelativeStrafe       = 4,
};

}
