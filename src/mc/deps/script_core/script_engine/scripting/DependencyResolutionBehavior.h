#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class DependencyResolutionBehavior : int {
    PromoteIfNeeded = 0,
    PromoteToLatest = 1,
};

}
