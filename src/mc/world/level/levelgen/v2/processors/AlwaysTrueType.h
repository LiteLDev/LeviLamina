#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::processors {

struct AlwaysTrueType {
public:
    // prevent constructor by default
    AlwaysTrueType& operator=(AlwaysTrueType const&);
    AlwaysTrueType(AlwaysTrueType const&);
    AlwaysTrueType();
};

} // namespace br::worldgen::processors
