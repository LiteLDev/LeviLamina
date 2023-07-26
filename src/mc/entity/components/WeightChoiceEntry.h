#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeightChoiceEntry {

public:
    // prevent constructor by default
    WeightChoiceEntry& operator=(WeightChoiceEntry const&) = delete;
    WeightChoiceEntry(WeightChoiceEntry const&)            = delete;
    WeightChoiceEntry()                                    = delete;
};
