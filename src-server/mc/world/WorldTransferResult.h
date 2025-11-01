#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WorldTransferResult : int {
    Success = 0,
    LevelNotLoaded = 1,
    LocalLevelNotFound = 2,
    TransferAlreadyInProgress = 3,
};
