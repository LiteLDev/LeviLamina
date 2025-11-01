#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class Privilege : uchar {
    None = 0,
    ReadOnly = 1,
    EarlyExecution = 2,
    All = 255,
};

}
