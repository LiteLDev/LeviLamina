#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct FullStructureBoundingBox {
public:
    // prevent constructor by default
    FullStructureBoundingBox& operator=(FullStructureBoundingBox const&);
    FullStructureBoundingBox(FullStructureBoundingBox const&);
    FullStructureBoundingBox();
};

} // namespace br
