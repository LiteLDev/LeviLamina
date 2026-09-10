#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct ViewStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc6b405;
    ::ll::UntypedStorage<2, 2>  mUnk9d3d1c;
    ::ll::UntypedStorage<8, 8>  mUnkcb9ea3;
    ::ll::UntypedStorage<8, 8>  mUnkd1d02c;
    ::ll::UntypedStorage<4, 4>  mUnkb77a5d;
    ::ll::UntypedStorage<1, 1>  mUnk2faee2;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewStatistics& operator=(ViewStatistics const&);
    ViewStatistics(ViewStatistics const&);
    ViewStatistics();
};

} // namespace dragon::platform
