#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class DownloadWorldTemplateError : uint {
    AlreadyDownloaded         = 0,
    DownloadAlreadyInProgress = 1,
    DownloadFailed            = 2,
    ItemNotOwned              = 3,
    CancelledByUser           = 4,
    InsufficientStorage       = 5,
};

}
