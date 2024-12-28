#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RealmsPurchaseFlow : int {
    None                                = 0,
    JSONScreenUserInitiatedPurchase     = 1,
    OreUIScreenUserInitiatedPurchase    = 2,
    AutoFulfillmentFromCreateRealm      = 3,
    AutoFulfillmentFromRepositoryUpdate = 4,
};
