#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ResourcePackPathLifetimeHelpers {

class ScopeDestroyedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8207d4;
    ::ll::UntypedStorage<8, 16> mUnk199715;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeDestroyedPath& operator=(ScopeDestroyedPath const&);
    ScopeDestroyedPath(ScopeDestroyedPath const&);
    ScopeDestroyedPath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScopeDestroyedPath();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ResourcePackPathLifetimeHelpers
