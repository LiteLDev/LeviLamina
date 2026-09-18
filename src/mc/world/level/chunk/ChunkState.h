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
    NeedsLighting              = 8,
    Lighting                   = 9,
    LightingFinished           = 10,
    Loaded                     = 11,
    NumStates                  = 12,
    Invalid                    = 255,
};
