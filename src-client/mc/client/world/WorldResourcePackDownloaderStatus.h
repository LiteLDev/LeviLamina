#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class WorldResourcePackDownloaderStatus : uchar {
    Idle        = 0,
    Downloading = 1,
    Importing   = 2,
    Completed   = 3,
};

}
