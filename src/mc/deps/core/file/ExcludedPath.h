#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct ExcludedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3176b9;
    ::ll::UntypedStorage<1, 1>  mUnk40717f;
    // NOLINTEND

public:
    // prevent constructor by default
    ExcludedPath& operator=(ExcludedPath const&);
    ExcludedPath(ExcludedPath const&);
    ExcludedPath();
};

} // namespace Core
