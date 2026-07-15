#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MarketplaceErrorUtils {

struct StoreErrorResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> errorCode;
    ::ll::TypedStorage<8, 32, ::std::string> errorText;
    // NOLINTEND
};

} // namespace MarketplaceErrorUtils
