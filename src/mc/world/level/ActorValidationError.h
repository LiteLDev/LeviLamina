#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorValidationError : int {
    ErrorDuplicatedEntry            = 0,
    ErrorDuplicatedPlayerUniqueID   = 1,
    ErrorSpawnHostileInPeacefulMode = 2,
    ErrorChunkNotFound              = 3,
    ErrorLevelWithNoActor           = 4,
};
