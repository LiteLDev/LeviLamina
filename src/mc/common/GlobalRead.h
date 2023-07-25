#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct GlobalRead {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALREAD
public:
    GlobalRead& operator=(GlobalRead const&) = delete;
    GlobalRead(GlobalRead const&)            = delete;
    GlobalRead()                             = delete;
#endif

public:
};
