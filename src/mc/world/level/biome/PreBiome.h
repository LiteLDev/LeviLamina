#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeValues {

struct PreBiome {
public:
    // prevent constructor by default
    PreBiome& operator=(PreBiome const&);
    PreBiome(PreBiome const&);
    PreBiome();
};

}; // namespace OperationNodeValues
