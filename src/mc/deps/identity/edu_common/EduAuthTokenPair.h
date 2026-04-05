#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct EduAuthTokenPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnkb21695;
    ::ll::UntypedStorage<8, 136> mUnk3fc98a;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAuthTokenPair& operator=(EduAuthTokenPair const&);
    EduAuthTokenPair(EduAuthTokenPair const&);
    EduAuthTokenPair();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EduAuthTokenPair(::Identity::EduAuthTokenPair&&);
#endif

    MCNAPI ~EduAuthTokenPair();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Identity::EduAuthTokenPair&&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
