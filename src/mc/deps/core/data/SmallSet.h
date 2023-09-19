#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SmallSet {
public:
    // prevent constructor by default
    SmallSet& operator=(SmallSet const&);
    SmallSet(SmallSet const&);
    SmallSet();
};
