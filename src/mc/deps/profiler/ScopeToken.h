#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ScopeToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk643c8a;
    ::ll::UntypedStorage<1, 1>   mUnk6550e1;
    ::ll::UntypedStorage<8, 104> mUnk82e230;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeToken& operator=(ScopeToken const&);
    ScopeToken(ScopeToken const&);
    ScopeToken();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ScopeToken();
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

} // namespace Core::Profile
