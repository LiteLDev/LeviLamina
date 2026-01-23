#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

enum class TintMethod : uchar {
    None             = 0,
    DefaultFoliage   = 1,
    BirchFoliage     = 2,
    EvergreenFoliage = 3,
    DryFoliage       = 4,
    Grass            = 5,
    Water            = 6,
    Stem             = 7,
    RedStoneWire     = 8,
    Size             = 9,
};

}
