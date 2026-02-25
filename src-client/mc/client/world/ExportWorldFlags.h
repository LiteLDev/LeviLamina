#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class ExportWorldFlags : uchar {
    None                = 0,
    ClearPlayerData     = 2,
    HardcoreModeEnabled = 4,
    Count               = 5,
};

}
