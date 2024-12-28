#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class FileSystemState : int {
    Unknown      = 0,
    Error        = 1,
    StorageSetup = 2,
    Created      = 3,
    Ready        = 4,
};

}
