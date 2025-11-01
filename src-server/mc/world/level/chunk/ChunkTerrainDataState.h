#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunkTerrainDataState : uchar {
    NoData = 0,
    NeedsFixup = 1,
    ReadyForGeneration = 2,
    Generated = 3,
    StructurePostProcessed = 4,
    DecorationPostProcessed = 5,
    Ready = 6,
};
