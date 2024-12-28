#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct DriveItem {
public:
    // prevent constructor by default
    DriveItem& operator=(DriveItem const&);
    DriveItem(DriveItem const&);
    DriveItem();
};

} // namespace MSGraph::Models
