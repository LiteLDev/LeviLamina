#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface {

enum class ResourceHandlerStatus : int {
    Success = 0,
    Failure = 1,
    Queued  = 2,
};

}
