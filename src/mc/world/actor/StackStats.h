#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StackStats {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKSTATS
public:
    StackStats& operator=(StackStats const&) = delete;
    StackStats(StackStats const&)            = delete;
    StackStats()                             = delete;
#endif

public:
};
