#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

enum class VrMirroringBehavior : int {
    None          = 0,
    SkipFrame     = 1,
    CopyLeftEye   = 2,
    DisplaySplash = 3,
};

}
