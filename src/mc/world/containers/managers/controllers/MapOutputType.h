#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MapOutputType : int {
    None              = 0,
    RenameMap         = 1,
    BasicMap          = 2,
    LocatorMap        = 3,
    ExtendAndClearMap = 4,
    CloneMap          = 5,
    LockMap           = 6,
};
