#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct CachedResourcesWatermarks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk856b74;
    ::ll::UntypedStorage<4, 4> mUnkab739c;
    ::ll::UntypedStorage<4, 4> mUnk79bb9d;
    ::ll::UntypedStorage<4, 4> mUnk4125bf;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedResourcesWatermarks& operator=(CachedResourcesWatermarks const&);
    CachedResourcesWatermarks(CachedResourcesWatermarks const&);
    CachedResourcesWatermarks();
};

} // namespace cohtml
