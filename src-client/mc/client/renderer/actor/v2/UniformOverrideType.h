#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UniformOverrideType : uchar {
    UVAnim              = 0,
    OverlayColor        = 1,
    ChangeColor         = 2,
    MultiplicitiveColor = 3,
    HurtColor           = 4,
    OnFireColor         = 5,
    Max                 = 6,
    UniqueUniformCount  = 4,
};
