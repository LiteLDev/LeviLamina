#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class Privilege : uchar {
    Default               = 0,
    RestrictedExecAllowed = 1,
    EarlyExecAllowed      = 2,
    All                   = 255,
};

}
