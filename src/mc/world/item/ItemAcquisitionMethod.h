#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemAcquisitionMethod : int {
    Unknown             = 4294967295,
    None                = 0,
    PickedUp            = 1,
    Crafted             = 2,
    TakenFromChest      = 3,
    TakenFromEnderchest = 4,
    Bought              = 5,
    Anvil               = 6,
    Smelted             = 7,
    Brewed              = 8,
    Filled              = 9,
    Trading             = 10,
    Fishing             = 11,
    Container           = 13,
    Feeding             = 14,
};
