#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class FlushOption : int {
    ProcessAll                = 0,
    ProcessAllWithTimeLimit   = 1,
    ProcessRemainingAllowance = 2,
    Discard                   = 3,
};

}
