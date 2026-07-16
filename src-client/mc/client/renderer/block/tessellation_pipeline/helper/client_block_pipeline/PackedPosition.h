#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct PackedPosition {
public:
    // member variables
    // NOLINTBEGIN
    uchar x : 5;
    uchar y : 5;
    uchar z : 5;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
