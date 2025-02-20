#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class Privilege : uint {
    None           = 0,
    ReadOnly       = 1,
    EarlyExecution = 2,
};

}
