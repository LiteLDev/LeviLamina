#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunkState : uchar {
    Unloaded                   = 0x0,
    Generating                 = 0x1,
    Generated                  = 0x2,
    PostProcessing             = 0x3,
    PostProcessed              = 0x4,
    CheckingForReplacementData = 0x5,
    NeedsLighting              = 0x6,
    Lighting                   = 0x7,
    LightingFinished           = 0x8,
    Loaded                     = 0x9,
    Invalid                    = 0xFF,
};
