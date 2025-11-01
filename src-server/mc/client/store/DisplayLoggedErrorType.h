#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DisplayLoggedErrorType : uint {
    MarketplaceError = 0,
    SdlParse = 1,
    UiLayout = 2,
    Cdn = 3,
    Unknown = 4,
};
