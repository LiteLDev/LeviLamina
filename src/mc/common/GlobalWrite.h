#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct GlobalWrite {
public:
    // prevent constructor by default
    GlobalWrite& operator=(GlobalWrite const&);
    GlobalWrite(GlobalWrite const&);
    GlobalWrite();
};
