#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEntityInitializer {
public:
    // prevent constructor by default
    IEntityInitializer& operator=(IEntityInitializer const&);
    IEntityInitializer(IEntityInitializer const&);
    IEntityInitializer();
};
