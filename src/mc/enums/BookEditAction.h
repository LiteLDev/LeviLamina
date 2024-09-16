#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BookEditAction : uchar {
    Replace = 0x0,
    Add     = 0x1,
    Delete  = 0x2,
    Swap    = 0x3,
    Sign    = 0x4,
};