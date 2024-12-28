#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientSideItemSortType : int {
    StorePriority      = 0,
    AtoZ               = 1,
    ZtoA               = 2,
    LeastPacksIncluded = 3,
    Random             = 4,
    None               = 5,
};
