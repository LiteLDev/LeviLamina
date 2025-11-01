#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ResourcePackResponse : schar {
    Cancel = 1,
    Downloading = 2,
    DownloadingFinished = 3,
    ResourcePackStackFinished = 4,
};
