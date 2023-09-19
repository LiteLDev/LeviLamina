#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BrightnessPair {
public:
    // prevent constructor by default
    BrightnessPair& operator=(BrightnessPair const&);
    BrightnessPair(BrightnessPair const&);
    BrightnessPair();
};
