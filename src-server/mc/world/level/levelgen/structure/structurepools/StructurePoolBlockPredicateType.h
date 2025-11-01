#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructurePoolBlockPredicateType : int {
    TrueIfFound                      = 0,
    AlwaysTrue                       = 1,
    AlwaysTrueExcept                 = 2,
    BlockMatch                       = 3,
    StateMatch                       = 4,
    BlockMatchRandom                 = 5,
    StateMatchRandom                 = 6,
    CappedRandomBlockReplacement     = 7,
    LinearPosition                   = 8,
    AxisAlignedPosition              = 9,
    CappedArcheologyBlockReplacement = 10,
};
