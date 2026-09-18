#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WorldType : int {
    Local            = 0,
    Network          = 1,
    Realms           = 2,
    Progress         = 3,
    Template         = 4,
    Legacy           = 5,
    ThirdParty       = 6,
    BetaRetailLocal  = 7,
    BetaRetailLegacy = 8,
    Count            = 9,
};
