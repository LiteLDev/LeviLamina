#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShareToTeams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkba749a;
    ::ll::UntypedStorage<8, 32> mUnkd41dd8;
    ::ll::UntypedStorage<1, 1>  mUnkede9d2;
    ::ll::UntypedStorage<1, 1>  mUnk8bf7b9;
    ::ll::UntypedStorage<8, 32> mUnk410d87;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ShareToTeams& operator=(ShareToTeams const&);
    ShareToTeams(ShareToTeams const&);
    ShareToTeams();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ShareToTeams& operator=(ShareToTeams const&);
    ShareToTeams();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ShareToTeams(::ShareToTeams const&);

    MCNAPI ::ShareToTeams& operator=(::ShareToTeams&&);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ShareToTeams const&);
#endif
    // NOLINTEND
};
