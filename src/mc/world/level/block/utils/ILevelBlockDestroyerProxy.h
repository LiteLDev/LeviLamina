#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILevelBlockDestroyerProxy {
public:
    // prevent constructor by default
    ILevelBlockDestroyerProxy& operator=(ILevelBlockDestroyerProxy const&);
    ILevelBlockDestroyerProxy(ILevelBlockDestroyerProxy const&);
    ILevelBlockDestroyerProxy();
};
