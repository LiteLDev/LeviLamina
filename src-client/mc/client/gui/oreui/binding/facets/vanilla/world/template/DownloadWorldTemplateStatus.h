#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class DownloadWorldTemplateStatus : int {
    Initialising = 0,
    Downloading  = 1,
    Importing    = 2,
    Success      = 3,
    Fail         = 4,
};

}
