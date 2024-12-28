#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

enum class ImportStatus : int {
    NotStarted = 0,
    InProgress = 1,
    Done       = 2,
    Failed     = 3,
};

}
