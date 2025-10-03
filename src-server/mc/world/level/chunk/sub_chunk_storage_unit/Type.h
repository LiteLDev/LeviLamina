#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SubChunkStorageUnit {

enum class Type : uchar {
    Paletted0  = 0,
    Paletted1  = 1,
    Paletted2  = 2,
    Paletted3  = 3,
    Paletted4  = 4,
    Paletted5  = 5,
    Paletted6  = 6,
    Paletted8  = 8,
    Paletted16 = 16,
    Empty      = 127,
};

}
