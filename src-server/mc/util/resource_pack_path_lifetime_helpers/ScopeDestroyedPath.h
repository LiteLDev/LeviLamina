#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ResourcePackPathLifetimeHelpers {

class ScopeDestroyedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk40f478;
    ::ll::UntypedStorage<8, 16> mUnk1a748a;
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
