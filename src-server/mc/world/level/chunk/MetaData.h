#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MetaData : int {
    LastSavedBaseGameVersion = 0,
    OriginalBaseGameVersion = 1,
    BiomeBaseGameVersion = 2,
    DimensionName = 3,
    GenerationSeed = 4,
    GeneratorType = 5,
    WorldGen1_18AppliedBelow0 = 6,
    Overworld1_18HeightExtended = 7,
    BlendingVersion = 8,
    OriginalDimensionHeightRange = 9,
    LastSavedDimensionHeightRange = 10,
    UnderwaterLavaLakeFixed = 11,
    WorldGenBelowZeroFixed = 12,
    SkullFlatteningPerformed = 13,
    NeighborAwareBlockUpgradeVersion = 14,
};
