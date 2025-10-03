#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ResourcePackFileDownloadError : int {
    OutOfStorage    = 1,
    DownloadFailure = 2,
};
