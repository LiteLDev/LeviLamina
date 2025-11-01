#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunkSourceViewGenerateMode : uchar {
    DontGenerateOnlyGet = 0,
    GenerateTickingAndSavedOnly = 1,
    GenerateClient = 2,
    GenerateAll = 3,
};
