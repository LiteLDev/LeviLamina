#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct CacheLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk43132e;
    ::ll::UntypedStorage<1, 1>  mUnk6c0f13;
    // NOLINTEND

public:
    // prevent constructor by default
    CacheLocation& operator=(CacheLocation const&);
    CacheLocation(CacheLocation const&);
    CacheLocation();
};

} // namespace cg
