#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MarketplaceStatusInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> isMarketplaceDisabled;
    ::ll::TypedStorage<1, 1, bool> isSessionConfigInProgress;
    ::ll::TypedStorage<1, 1, bool> isServicesManagerReady;
    ::ll::TypedStorage<1, 1, bool> isPersonaOfflineEnabled;
    // NOLINTEND
};
