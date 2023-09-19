#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResolveData {
public:
    // prevent constructor by default
    ResolveData& operator=(ResolveData const&);
    ResolveData(ResolveData const&);
    ResolveData();
};
