#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class AddressMode : uchar {
    Wrap   = 0,
    Clamp  = 1,
    Mirror = 2,
    Border = 3,
};

}
