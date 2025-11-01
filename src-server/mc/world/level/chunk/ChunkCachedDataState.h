#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunkCachedDataState : uchar {
    NotGenerated = 0,
    Generating   = 1,
    Generated    = 2,
};
