#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMapDataManagerOptions {
public:
    // prevent constructor by default
    IMapDataManagerOptions& operator=(IMapDataManagerOptions const&);
    IMapDataManagerOptions(IMapDataManagerOptions const&);
    IMapDataManagerOptions();
};
