#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAvoidanceSystem {

struct AvoidanceCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk878e16;
    ::ll::UntypedStorage<4, 4>  mUnkf06e2e;
    ::ll::UntypedStorage<4, 4>  mUnke0ae2b;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidanceCache& operator=(AvoidanceCache const&);
    AvoidanceCache(AvoidanceCache const&);
    AvoidanceCache();
};

} // namespace CameraAvoidanceSystem
