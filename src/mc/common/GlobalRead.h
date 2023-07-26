#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct GlobalRead {

public:
    // prevent constructor by default
    GlobalRead& operator=(GlobalRead const&) = delete;
    GlobalRead(GlobalRead const&)            = delete;
    GlobalRead()                             = delete;
};
