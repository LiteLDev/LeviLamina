#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DlcProgressState : int {
    FirstTick   = 0,
    PreDownload = 1,
    Downloading = 2,
    Importing   = 3,
    Complete    = 4,
    Failed      = 5,
    Canceled    = 6,
};
