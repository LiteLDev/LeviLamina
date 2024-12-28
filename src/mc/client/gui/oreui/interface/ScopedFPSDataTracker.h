#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct ScopedFPSDataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3f60e5;
    ::ll::UntypedStorage<4, 4> mUnke3bbc8;
    ::ll::UntypedStorage<4, 4> mUnke4d502;
    ::ll::UntypedStorage<4, 4> mUnk790d39;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedFPSDataTracker& operator=(ScopedFPSDataTracker const&);
    ScopedFPSDataTracker(ScopedFPSDataTracker const&);
    ScopedFPSDataTracker();
};

} // namespace OreUI
