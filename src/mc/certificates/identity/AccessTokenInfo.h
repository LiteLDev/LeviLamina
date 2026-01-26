#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AccessTokenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc2cf82;
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

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string _email, int64 _expiration);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
