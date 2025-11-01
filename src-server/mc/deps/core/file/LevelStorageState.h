#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class LevelStorageState : int {
    Open = 0,
    Corrupted = 1,
    NotFound = 2,
    IOError = 3,
    NotSupported = 4,
    InvalidArguments = 5,
    Unknown = 6,
};

}
