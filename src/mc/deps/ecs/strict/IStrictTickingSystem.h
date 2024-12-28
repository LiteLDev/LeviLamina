#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class IStrictTickingSystem {
public:
    // prevent constructor by default
    IStrictTickingSystem& operator=(IStrictTickingSystem const&);
    IStrictTickingSystem(IStrictTickingSystem const&);
    IStrictTickingSystem();
};
