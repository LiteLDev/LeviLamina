#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisconnectionErrorDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd35fc7;
    ::ll::UntypedStorage<8, 32> mUnk439e2f;
    ::ll::UntypedStorage<8, 32> mUnk337fde;
    ::ll::UntypedStorage<8, 32> mUnk5f8a09;
    ::ll::UntypedStorage<8, 32> mUnkaabc20;
    ::ll::UntypedStorage<8, 32> mUnkf97853;
    ::ll::UntypedStorage<8, 32> mUnk1653fd;
    ::ll::UntypedStorage<8, 32> mUnka6f0fa;
    ::ll::UntypedStorage<8, 32> mUnk8c7023;
    ::ll::UntypedStorage<4, 4>  mUnk7cf007;
    ::ll::UntypedStorage<4, 4>  mUnk7be4c8;
    ::ll::UntypedStorage<4, 4>  mUnkbb10bf;
    ::ll::UntypedStorage<1, 1>  mUnk96212c;
    ::ll::UntypedStorage<1, 1>  mUnka5faf3;
    ::ll::UntypedStorage<1, 1>  mUnke58122;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectionErrorDetails& operator=(DisconnectionErrorDetails const&);
    DisconnectionErrorDetails(DisconnectionErrorDetails const&);
    DisconnectionErrorDetails();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI DisconnectionErrorDetails(::DisconnectionErrorDetails&&);

    MCNAPI ~DisconnectionErrorDetails();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::DisconnectionErrorDetails&&);
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
