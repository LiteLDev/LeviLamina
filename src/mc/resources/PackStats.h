#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackStats {

public:
    // prevent constructor by default
    PackStats& operator=(PackStats const&) = delete;
    PackStats(PackStats const&)            = delete;
    PackStats()                            = delete;
};
