#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IClientInstanceProxy {
public:
    // prevent constructor by default
    IClientInstanceProxy& operator=(IClientInstanceProxy const&);
    IClientInstanceProxy(IClientInstanceProxy const&);
    IClientInstanceProxy();
};
