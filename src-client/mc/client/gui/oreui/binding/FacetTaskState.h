#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class FacetTaskState : int {
    Idle      = 0,
    Running   = 1,
    Done      = 2,
    Cancelled = 3,
    Failed    = 4,
};

}
