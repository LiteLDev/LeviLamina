#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICommandOriginLoader {

public:
    // prevent constructor by default
    ICommandOriginLoader& operator=(ICommandOriginLoader const&) = delete;
    ICommandOriginLoader(ICommandOriginLoader const&)            = delete;
    ICommandOriginLoader()                                       = delete;
};
