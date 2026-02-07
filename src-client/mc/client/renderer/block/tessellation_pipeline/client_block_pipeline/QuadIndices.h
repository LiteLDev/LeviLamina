#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct QuadIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::array<uint64, 4>> mIndices;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
