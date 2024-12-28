#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemOwnership : uint {
    NotOwned                  = 0,
    Purchased                 = 1,
    EntitledByDevice          = 2,
    EntitledByRealmsPlus      = 3,
    EntitledByMarketplacePass = 4,
    Unknown                   = 5,
};
