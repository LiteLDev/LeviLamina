#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct DriveItemCollection {
public:
    // prevent constructor by default
    DriveItemCollection& operator=(DriveItemCollection const&);
    DriveItemCollection(DriveItemCollection const&);
    DriveItemCollection();
};

} // namespace MSGraph::Models
