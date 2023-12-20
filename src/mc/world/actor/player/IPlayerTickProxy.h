#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPlayerTickProxy {
public:
    // prevent constructor by default
    IPlayerTickProxy& operator=(IPlayerTickProxy const&);
    IPlayerTickProxy(IPlayerTickProxy const&);
    IPlayerTickProxy();
};
