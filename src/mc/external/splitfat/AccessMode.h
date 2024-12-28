#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class AccessMode : int {
    // bitfield representation
    Unspecified          = 0,
    Read                 = 1 << 0,
    Write                = 1 << 1,
    Update               = 1 << 2,
    Append               = 1 << 3,
    Text                 = 1 << 4,
    Binary               = 1 << 5,
    Truncate             = 1 << 6,
    CreateIfDoesNotExist = 1 << 7,
};

}
