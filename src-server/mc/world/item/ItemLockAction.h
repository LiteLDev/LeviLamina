#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemLockAction : uchar {
    None    = 0,
    Drop    = 1,
    Replace = 2,
    Craft   = 3,
    Remove  = 4,
};
