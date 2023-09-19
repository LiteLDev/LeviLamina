#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICommandOriginLoader {
public:
    // prevent constructor by default
    ICommandOriginLoader& operator=(ICommandOriginLoader const&);
    ICommandOriginLoader(ICommandOriginLoader const&);
    ICommandOriginLoader();
};
