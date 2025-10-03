#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ProductType : int {
    Game                = 0,
    Application         = 1,
    Durable             = 2,
    Consumable          = 3,
    UnmanagedConsumable = 4,
    Subscription        = 5,
    Unknown             = 6,
};
