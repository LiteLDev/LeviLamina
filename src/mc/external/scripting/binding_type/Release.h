#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class Release {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd7338f;
    ::ll::UntypedStorage<8, 40> mUnkf154f7;
    ::ll::UntypedStorage<2, 4>  mUnkcc8304;
    // NOLINTEND

public:
    // prevent constructor by default
    Release& operator=(Release const&);
    Release(Release const&);
    Release();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Release();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
