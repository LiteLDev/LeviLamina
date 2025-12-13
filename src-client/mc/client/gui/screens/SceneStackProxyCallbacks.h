#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SceneStackProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc5a0c3;
    ::ll::UntypedStorage<8, 64> mUnk5a57c5;
    ::ll::UntypedStorage<8, 64> mUnka2ac54;
    ::ll::UntypedStorage<8, 64> mUnkcbc1d9;
    ::ll::UntypedStorage<8, 64> mUnk340889;
    ::ll::UntypedStorage<8, 64> mUnke5b38c;
    ::ll::UntypedStorage<8, 64> mUnk2ca19e;
    ::ll::UntypedStorage<8, 64> mUnk97fac5;
    ::ll::UntypedStorage<8, 64> mUnk36bef9;
    ::ll::UntypedStorage<8, 64> mUnkbb6d1e;
    ::ll::UntypedStorage<8, 64> mUnke159e1;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStackProxyCallbacks& operator=(SceneStackProxyCallbacks const&);
    SceneStackProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SceneStackProxyCallbacks(::SceneStackProxyCallbacks const&);

    MCNAPI ~SceneStackProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SceneStackProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
