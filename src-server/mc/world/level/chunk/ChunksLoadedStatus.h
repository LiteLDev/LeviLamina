#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunksLoadedStatus : uchar {
    NotReady = 0,
    NeedsTicking = 1,
    LoadedAndTicking = 2,
};
