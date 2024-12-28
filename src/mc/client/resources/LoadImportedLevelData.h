#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LoadImportedLevelData : int {
    DoNotLoad         = 0,
    LoadLevelAsync    = 1,
    LoadLevelBlocking = 2,
};
