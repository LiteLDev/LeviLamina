#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct PathSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkb4921f;
    ::ll::UntypedStorage<8, 208> mUnkb6ad25;
    ::ll::UntypedStorage<1, 1>   mUnkb0d597;
    // NOLINTEND

public:
    // prevent constructor by default
    PathSwapper& operator=(PathSwapper const&);
    PathSwapper(PathSwapper const&);
    PathSwapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PathSwapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
