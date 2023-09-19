#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IClientInstance {
public:
    // prevent constructor by default
    IClientInstance& operator=(IClientInstance const&);
    IClientInstance(IClientInstance const&);
    IClientInstance();
};
