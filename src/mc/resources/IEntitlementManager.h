#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEntitlementManager {
public:
    // prevent constructor by default
    IEntitlementManager& operator=(IEntitlementManager const&);
    IEntitlementManager(IEntitlementManager const&);
    IEntitlementManager();
};
