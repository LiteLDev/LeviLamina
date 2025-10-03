#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class SessionState : int {
    Gathering = 0,
    Cleared   = 1,
    Stopped   = 2,
};

}
