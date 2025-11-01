#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gif {

enum class FrameDisposalMethod : int {
    Undefined = 0,
    Retain = 1,
    RestoreBackground = 2,
    RestorePrevious = 3,
};

}
