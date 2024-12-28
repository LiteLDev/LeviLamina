#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataFrameHeaderMasks : uchar {
    // bitfield representation
    Bit1          = 1 << 0,
    Bit2          = 1 << 1,
    Bit3          = 1 << 2,
    Bit4          = 1 << 3,
    Bit5          = 1 << 4,
    Bit6          = 1 << 5,
    Bit7          = 1 << 6,
    Bit8          = 1 << 7,
    OpCode        = Bit1 | Bit2 | Bit3 | Bit4,
    PayloadLength = Bit1 | Bit2 | Bit3 | Bit4 | Bit5 | Bit6 | Bit7,
};
