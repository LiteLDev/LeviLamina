#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/StoreErrorCodes.h"

namespace MarketplaceErrorUtils {

struct StoreErrorResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::StoreErrorCodes> storeErrorCode;
    ::ll::TypedStorage<8, 32, ::std::string>    errorCode;
    ::ll::TypedStorage<8, 32, ::std::string>    errorText;
    ::ll::TypedStorage<4, 4, uint>              httpStatusCode;
    // NOLINTEND
};

} // namespace MarketplaceErrorUtils
