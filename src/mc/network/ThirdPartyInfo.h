#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThirdPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke18fbe;
    ::ll::UntypedStorage<8, 32> mUnk193b83;
    ::ll::UntypedStorage<8, 32> mUnk3742ca;
    ::ll::UntypedStorage<8, 32> mUnk6129b7;
    ::ll::UntypedStorage<1, 1>  mUnkfff32d;
    ::ll::UntypedStorage<8, 32> mUnkc6df3e;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThirdPartyInfo();

    MCNAPI ThirdPartyInfo(::ThirdPartyInfo const&);

    MCNAPI ::ThirdPartyInfo& operator=(::ThirdPartyInfo const&);

    MCNAPI ~ThirdPartyInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ThirdPartyInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
