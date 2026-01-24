#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSObject {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 32> mUnk594f49;
        struct {
            ::ll::UntypedStorage<4, 4> mUnk7443b3;
            ::ll::UntypedStorage<1, 1> mUnkad686d;
            uchar                      mUnka9d875 : 1;
            uchar                      mUnk298346 : 1;
            uchar                      mUnk326316 : 1;
            uchar                      mUnkec0b9b : 1;
            uchar                      mUnk94d150 : 1;
            uchar                      mUnke2d971 : 1;
            uchar                      mUnke4dbeb : 1;
            uchar                      mUnk853879 : 1;
            ::ll::UntypedStorage<2, 2> mUnk75f0aa;
        };
    };
    ::ll::UntypedStorage<8, 8> mUnka29aee;
    ::ll::UntypedStorage<8, 8> mUnk1e0882;
    ::ll::UntypedStorage<8, 8> mUnk71bf10;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 24> mUnk8e7a1f;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 24> mUnk16f70f;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    JSObject& operator=(JSObject const&);
    JSObject(JSObject const&);
    JSObject();
};
