#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::TerrainAdjustment {

enum class Type : uchar {
    None        = 0,
    Bury        = 1,
    BeardThin   = 2,
    BeardBox    = 3,
    Encapsulate = 4,
};

}
