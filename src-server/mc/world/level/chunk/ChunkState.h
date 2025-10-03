#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunkState : uchar {
    Unloaded                   = 0,
    Generating                 = 1,
    Generated                  = 2,
    PostProcessing             = 3,
    PostProcessed              = 4,
    CheckingForReplacementData = 5,
    NeedsLighting              = 6,
    Lighting                   = 7,
    LightingFinished           = 8,
    Loaded                     = 9,
    Invalid                    = 255,
};
