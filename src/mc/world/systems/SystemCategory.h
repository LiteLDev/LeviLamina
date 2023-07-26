#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemCategory {

public:
    // prevent constructor by default
    SystemCategory& operator=(SystemCategory const&) = delete;
    SystemCategory(SystemCategory const&)            = delete;
    SystemCategory()                                 = delete;
};
