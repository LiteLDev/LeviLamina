#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenViewProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf4a08e;
    ::ll::UntypedStorage<8, 64> mUnk2d5ecd;
    ::ll::UntypedStorage<8, 64> mUnka6a65b;
    ::ll::UntypedStorage<8, 64> mUnk58de6b;
    ::ll::UntypedStorage<8, 64> mUnke26b63;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewProxyCallbacks& operator=(ScreenViewProxyCallbacks const&);
    ScreenViewProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenViewProxyCallbacks(::ScreenViewProxyCallbacks const&);

    MCNAPI ~ScreenViewProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScreenViewProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
