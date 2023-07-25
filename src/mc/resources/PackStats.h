#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackStats {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSTATS
public:
    PackStats& operator=(PackStats const&) = delete;
    PackStats(PackStats const&)            = delete;
    PackStats()                            = delete;
#endif

public:
};
