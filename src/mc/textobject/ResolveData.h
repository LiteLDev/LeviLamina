#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResolveData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOLVEDATA
public:
    ResolveData& operator=(ResolveData const&) = delete;
    ResolveData(ResolveData const&)            = delete;
    ResolveData()                              = delete;
#endif

public:
};
