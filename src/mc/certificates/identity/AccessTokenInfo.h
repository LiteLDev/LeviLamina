#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AccessTokenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb9bab6;
    ::ll::UntypedStorage<8, 8>  mUnk705dd3;
    // NOLINTEND

public:
    // prevent constructor by default
    AccessTokenInfo& operator=(AccessTokenInfo const&);
    AccessTokenInfo(AccessTokenInfo const&);
    AccessTokenInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI AccessTokenInfo(::std::string _email, int64 _expiration);

    MCNAPI ::AccessTokenInfo& operator=(::AccessTokenInfo&&);

    MCNAPI ~AccessTokenInfo();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string _email, int64 _expiration);
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
