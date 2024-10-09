#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemCategory {
public:
    // prevent constructor by default
    SystemCategory& operator=(SystemCategory const&);
    SystemCategory(SystemCategory const&);
    SystemCategory();
};
