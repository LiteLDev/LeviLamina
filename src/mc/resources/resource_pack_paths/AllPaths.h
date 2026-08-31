#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ResourcePackPaths {

struct AllPaths {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2e2086;
    ::ll::UntypedStorage<8, 32> mUnk1139bd;
    ::ll::UntypedStorage<8, 32> mUnk39ece9;
    ::ll::UntypedStorage<8, 32> mUnk8107af;
    ::ll::UntypedStorage<8, 32> mUnkdb8418;
    ::ll::UntypedStorage<8, 32> mUnkfac66e;
    ::ll::UntypedStorage<8, 32> mUnk686ef9;
    ::ll::UntypedStorage<8, 32> mUnka7453e;
    ::ll::UntypedStorage<8, 32> mUnk98ca8e;
    ::ll::UntypedStorage<8, 32> mUnka4f4d6;
    ::ll::UntypedStorage<8, 32> mUnk5e3ccc;
    ::ll::UntypedStorage<8, 32> mUnk86a380;
    // NOLINTEND

public:
    // prevent constructor by default
    AllPaths& operator=(AllPaths const&);
    AllPaths(AllPaths const&);
    AllPaths();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~AllPaths();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace ResourcePackPaths
