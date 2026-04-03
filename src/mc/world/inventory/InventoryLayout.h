#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InventoryLayout : int {
    None           = 0,
    InventoryOnly  = 1,
    Default        = 2,
    RecipeBookOnly = 3,
    Count          = 4,
};
