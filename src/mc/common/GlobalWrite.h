#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct GlobalWrite {

public:
    // prevent constructor by default
    GlobalWrite& operator=(GlobalWrite const&) = delete;
    GlobalWrite(GlobalWrite const&)            = delete;
    GlobalWrite()                              = delete;
};
