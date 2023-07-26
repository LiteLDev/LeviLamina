#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BrightnessPair {

public:
    // prevent constructor by default
    BrightnessPair& operator=(BrightnessPair const&) = delete;
    BrightnessPair(BrightnessPair const&)            = delete;
    BrightnessPair()                                 = delete;
};
