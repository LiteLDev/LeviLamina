#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ResourcePackFileDownloadError : int {
    OutOfStorage            = 1,
    CouldNotCreateDirectory = 2,
    AlreadyInitialized      = 3,
    CouldNotUnzipFiles      = 4,
    CouldNotWriteToDisk     = 5,
};
