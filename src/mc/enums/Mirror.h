#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Mirror : unsigned char {
    None = 0x0,
    X    = 0x1,
    Z    = 0x2,
    XZ   = 0x3,
};
