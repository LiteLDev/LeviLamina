#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSVarRef {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 32> mUnkf9e667;
        struct {
            ::ll::UntypedStorage<4, 4> mUnk8b6006;
            ::ll::UntypedStorage<1, 1> mUnk64c48a;
            uchar                      mUnkd819b3 : 1;
            uchar                      mUnk2df9bc : 1;
            ::ll::UntypedStorage<2, 2> mUnke2ff49;
        };
    };
    ::ll::UntypedStorage<8, 8> mUnk513334;
    union {
        ::ll::UntypedStorage<8, 16> mUnk59678f;
        ::ll::UntypedStorage<8, 16> mUnk3ff665;
    };
    ::ll::UntypedStorage<8, 8> mUnkf1c925;
    // NOLINTEND

public:
    // prevent constructor by default
    JSVarRef& operator=(JSVarRef const&);
    JSVarRef(JSVarRef const&);
    JSVarRef();
};
