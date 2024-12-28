#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class DirectoryIterationFlags : uint {
    File      = 1,
    Directory = 2,
    All       = 3,
    Recursive = 4,
};

}
