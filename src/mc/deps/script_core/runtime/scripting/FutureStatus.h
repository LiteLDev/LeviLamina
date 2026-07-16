#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class FutureStatus : int {
    Unknown  = 0,
    Pending  = 1,
    Resolved = 2,
    Rejected = 3,
};

}
