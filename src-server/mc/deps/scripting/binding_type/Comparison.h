#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class Comparison : int {
    GreaterThanOrEqual = 0,
    PreReleaseMatch = 1,
    OnlyStable = 2,
};

}
