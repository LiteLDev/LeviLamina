#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkSystemToggles {

public:
    // prevent constructor by default
    NetworkSystemToggles& operator=(NetworkSystemToggles const&) = delete;
    NetworkSystemToggles(NetworkSystemToggles const&)            = delete;
    NetworkSystemToggles()                                       = delete;
};
