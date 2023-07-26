#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILevelListCache {

public:
    // prevent constructor by default
    ILevelListCache& operator=(ILevelListCache const&) = delete;
    ILevelListCache(ILevelListCache const&)            = delete;
    ILevelListCache()                                  = delete;
};
