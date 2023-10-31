#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandOutputType : int {
    None       = 0x0,
    LastOutput = 0x1,
    Silent     = 0x2,
    AllOutput  = 0x3,
    DataSet    = 0x4,
};
