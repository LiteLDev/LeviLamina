#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class VaultBlockState : uchar {
    Inactive  = 0,
    Active    = 1,
    Unlocking = 2,
    Ejecting  = 3,
    Count     = 4,
};
