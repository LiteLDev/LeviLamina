#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandOutputType : int {
    None       = 0,
    LastOutput = 1,
    Silent     = 2,
    AllOutput  = 3,
    DataSet    = 4,
};
