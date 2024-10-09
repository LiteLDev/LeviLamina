#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeightChoiceEntry {
public:
    // prevent constructor by default
    WeightChoiceEntry& operator=(WeightChoiceEntry const&);
    WeightChoiceEntry(WeightChoiceEntry const&);
    WeightChoiceEntry();
};
