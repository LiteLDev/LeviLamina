#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct PathSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb4921f;
    ::ll::UntypedStorage<8, 80> mUnkb6ad25;
    ::ll::UntypedStorage<1, 1>  mUnkb0d597;
    // NOLINTEND

public:
    // prevent constructor by default
    PathSwapper& operator=(PathSwapper const&);
    PathSwapper(PathSwapper const&);
    PathSwapper();
};

} // namespace Puv::internal
