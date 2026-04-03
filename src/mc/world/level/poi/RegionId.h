#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct RegionId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf6ecc9;
    // NOLINTEND

public:
    // prevent constructor by default
    RegionId& operator=(RegionId const&);
    RegionId(RegionId const&);
    RegionId();
};

} // namespace Poi
