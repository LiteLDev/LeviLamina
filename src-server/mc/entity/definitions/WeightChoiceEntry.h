#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeightChoiceEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf2ccd2;
    ::ll::UntypedStorage<4, 4> mUnk314dc3;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightChoiceEntry& operator=(WeightChoiceEntry const&);
    WeightChoiceEntry(WeightChoiceEntry const&);
    WeightChoiceEntry();

};
