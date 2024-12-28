#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class FilterMode : uchar {
    Linear      = 0,
    Point       = 1,
    Anisotropic = 2,
};

}
