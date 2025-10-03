#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class FlushOption : int {
    ProcessAll                = 0,
    ProcessRemainingAllowance = 1,
    Discard                   = 2,
};

}
