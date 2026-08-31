#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/StoreErrorCodes.h"

namespace MarketplaceErrorUtils {

struct StoreErrorParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              isMarketplaceDisabled;
    ::ll::TypedStorage<1, 1, ::StoreErrorCodes> marketplaceDisabledErrorCode;
    ::ll::TypedStorage<8, 32, ::std::string>    marketplaceDisabledErrorText;
    ::ll::TypedStorage<1, 1, bool>              doesServicesManagerHaveErrorStatus;
    ::ll::TypedStorage<8, 32, ::std::string>    servicesManagerErrorStatusCode;
    ::ll::TypedStorage<1, 1, bool>              canAccessStoreScreen;
    ::ll::TypedStorage<1, 1, bool>              isNetworkAvailable;
    ::ll::TypedStorage<1, 1, bool>              requiresNetworkOutageMessaging;
    // NOLINTEND
};

} // namespace MarketplaceErrorUtils
