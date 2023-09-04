#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SubChunkStorageUnit {

enum class Type : schar {
    Paletted0  = 0x0,
    Paletted1  = 0x1,
    Paletted2  = 0x2,
    Paletted3  = 0x3,
    Paletted4  = 0x4,
    Paletted5  = 0x5,
    Paletted6  = 0x6,
    Paletted8  = 0x8,
    Paletted16 = 0x10,
    Empty      = 0x7F,
};
};
