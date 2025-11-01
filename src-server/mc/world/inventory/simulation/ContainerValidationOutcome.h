#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContainerValidationOutcome : int {
    Success           = 0,
    Error             = 1,
    CannotRemoveItem  = 2,
    CannotPlaceItem   = 3,
    CannotSwapItem    = 4,
    CannotDestroyItem = 5,
    CannotDropItem    = 6,
    CannotCraftItem   = 7,
};
