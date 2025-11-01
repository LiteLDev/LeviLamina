#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class OwnershipFilterType : int {
    OwnedOnly = 0,
    Everything = 1,
    FilteredOwnToBack = 2,
    FilterOwnedToFront = 3,
    UnownedOnly = 4,
    OwnedCapes = 5,
    RandomizeContent = 6,
};

}
