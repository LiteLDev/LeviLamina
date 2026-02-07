#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct CustomGeometryBoxMask {
public:
    // member variables
    // NOLINTBEGIN
    uchar faceMask         : 7;
    bool  applyRotationFix : 1;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
