#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MarketplaceStatusInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsMarketplaceDisabled;
    ::ll::TypedStorage<1, 1, bool> mIsOffline;
    ::ll::TypedStorage<1, 1, bool> mIsSessionConfigInProgress;
    ::ll::TypedStorage<1, 1, bool> mIsServicesManagerReady;
    ::ll::TypedStorage<1, 1, bool> mIsPersonaOfflineEnabled;
    // NOLINTEND
};
