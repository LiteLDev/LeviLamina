#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DisplayLoggedErrorType : uint {
    MarketplaceWarning = 0,
    MarketplaceError   = 1,
    MarketplaceData    = 2,
    UiLayout           = 3,
    SdlParse           = 4,
    Cdn                = 5,
    Unknown            = 6,
};
