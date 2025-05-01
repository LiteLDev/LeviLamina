#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDump_AllData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>     mUnk3e1fb5;
    ::ll::UntypedStorage<4, 4>     mUnka1e590;
    ::ll::UntypedStorage<4, 4>     mUnkec21fb;
    ::ll::UntypedStorage<1, 1468>  mUnk7e80cf;
    ::ll::UntypedStorage<8, 2344>  mUnk69c5c5;
    ::ll::UntypedStorage<4, 49168> mUnkffc1fb;
    ::ll::UntypedStorage<8, 8208>  mUnkdf7fc0;
    ::ll::UntypedStorage<8, 272>   mUnkd18e80;
    ::ll::UntypedStorage<4, 1552>  mUnkf26b20;
    ::ll::UntypedStorage<4, 1040>  mUnkd788a1;
    ::ll::UntypedStorage<4, 272>   mUnkb28d77;
    ::ll::UntypedStorage<4, 400>   mUnk6fd1d7;
    ::ll::UntypedStorage<4, 400>   mUnkb0e60f;
    ::ll::UntypedStorage<8, 8>     mUnkc629c4;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDump_AllData& operator=(CrashDump_AllData const&);
    CrashDump_AllData(CrashDump_AllData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDump_AllData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
