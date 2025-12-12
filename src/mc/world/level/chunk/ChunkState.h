#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunkState : uchar {
    Unloaded                   = 0,
    Generating                 = 1,
    Generated                  = 2,
    StructurePostProcessing    = 3,
    StructurePostProcessed     = 4,
    DecorationPostProcessing   = 5,
    DecorationPostProcessed    = 6,
    CheckingForReplacementData = 7,
    NeighborAwareUpgradeNeeded = 8,
    NeighborAwareUpgrading     = 9,
    NeedsLighting              = 10,
    Lighting                   = 11,
    LightingFinished           = 12,
    Loaded                     = 13,
    Invalid                    = 255,
};
