#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DBHelpers {

enum class OperationType : uint {
    CacheRead = 0,
    CacheWrite = 1,
    LevelDBRead = 2,
    LevelDBWrite = 3,
    Count = 4,
};

}
