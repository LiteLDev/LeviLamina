#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class ILevelDependencies {
public:
    // prevent constructor by default
    ILevelDependencies& operator=(ILevelDependencies const&);
    ILevelDependencies(ILevelDependencies const&);
    ILevelDependencies();
};

}; // namespace Interactions::Mining
