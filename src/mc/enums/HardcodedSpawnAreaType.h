#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HardcodedSpawnAreaType : uchar {

    None                  = 0x0,
    NetherFortress        = 0x1,
    WitchHut              = 0x2,
    OceanMonument         = 0x3,
    DEPRECATED_Village    = 0x4,
    PillagerOutpost       = 0x5,
    DEPRECATED_NewVillage = 0x6,
    Count                 = 0x7,
};
