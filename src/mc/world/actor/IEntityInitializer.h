#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEntityInitializer {

public:
    // prevent constructor by default
    IEntityInitializer& operator=(IEntityInitializer const&) = delete;
    IEntityInitializer(IEntityInitializer const&)            = delete;
    IEntityInitializer()                                     = delete;
};
