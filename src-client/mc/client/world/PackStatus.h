#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class PackStatus : uchar {
    Selected  = 0,
    Global    = 1,
    Available = 2,
    Realms    = 3,
    Unowned   = 4,
};

}
