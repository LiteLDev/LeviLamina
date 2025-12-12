#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

enum class TerrainAdaptation : uchar {
    None        = 0,
    Bury        = 1,
    BeardThin   = 2,
    BeardBox    = 3,
    Encapsulate = 4,
};

}
