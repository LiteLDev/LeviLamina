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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThirdPartyInfo();

    MCAPI ThirdPartyInfo(::ThirdPartyInfo const&);

    MCAPI ::ThirdPartyInfo& operator=(::ThirdPartyInfo const&);

    MCAPI ~ThirdPartyInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ThirdPartyInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
