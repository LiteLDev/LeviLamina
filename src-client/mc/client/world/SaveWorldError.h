#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class SaveWorldError : uchar {
    IncorrectWorldId                        = 0,
    UnableToCreateWorldDirectoryPath        = 1,
    UnableToCreateResourcePackDirectoryPath = 2,
    UnableToCreateBehaviorDirectoryPath     = 3,
    InsufficientDiskSpace                   = 4,
    UnknownError                            = 5,
};

}
