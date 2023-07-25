#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct GlobalWrite {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALWRITE
public:
    GlobalWrite& operator=(GlobalWrite const&) = delete;
    GlobalWrite(GlobalWrite const&)            = delete;
    GlobalWrite()                              = delete;
#endif

public:
};
