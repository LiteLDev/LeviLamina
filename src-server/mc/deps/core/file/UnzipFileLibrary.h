#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class UnzipFileLibrary : int {
    Default = 0,
    Minizip = 1,
    LibZip = 2,
};

}
