#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class WeightedRandom {
public:
    // prevent constructor by default
    WeightedRandom& operator=(WeightedRandom const&);
    WeightedRandom(WeightedRandom const&);
    WeightedRandom();
};

} // namespace Core
