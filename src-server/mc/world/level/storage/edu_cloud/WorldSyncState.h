#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

enum class WorldSyncState : int {
    None        = 0,
    Synced      = 1,
    Warning     = 2,
    Critical    = 3,
    Placeholder = 4,
    Off         = 5,
};

}
