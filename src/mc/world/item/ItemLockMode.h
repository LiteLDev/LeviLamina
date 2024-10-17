#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemLockMode : uchar {
    None            = 0x0,
    LockInSlot      = 0x1,
    LockInInventory = 0x2,
};
