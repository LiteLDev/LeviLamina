#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataDrivenScreenClosedReason : uchar {
    ProgrammaticClose    = 0,
    ProgrammaticCloseAll = 1,
    ClientCanceled       = 2,
    UserBusy             = 3,
    InvalidForm          = 4,
};
