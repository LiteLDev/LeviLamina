#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackAccessAssetGenerationResult : int {
    ReadContentsFile = 0,
    IteratedThroughDirectory = 1,
    Failed = 2,
    AlreadyGenerated = 3,
};
