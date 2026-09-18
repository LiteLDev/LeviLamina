#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnlineAudioStreamEnded {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbc4b3d;
    ::ll::UntypedStorage<1, 1>  mUnk29c435;
    ::ll::UntypedStorage<1, 1>  mUnk65ff02;
    ::ll::UntypedStorage<4, 4>  mUnkf9fef3;
    ::ll::UntypedStorage<4, 4>  mUnk53fe3f;
    ::ll::UntypedStorage<4, 4>  mUnkb4d481;
    ::ll::UntypedStorage<4, 4>  mUnkb92990;
    ::ll::UntypedStorage<8, 8>  mUnk5dfd06;
    ::ll::UntypedStorage<8, 8>  mUnk94d24e;
    ::ll::UntypedStorage<4, 4>  mUnk108d1f;
    ::ll::UntypedStorage<4, 4>  mUnkbd6d00;
    ::ll::UntypedStorage<4, 4>  mUnk68b3d2;
    ::ll::UntypedStorage<4, 4>  mUnkbff73d;
    ::ll::UntypedStorage<8, 96> mUnk9a1f2c;
    ::ll::UntypedStorage<8, 96> mUnk9ab5a0;
    ::ll::UntypedStorage<8, 96> mUnk572fb5;
    ::ll::UntypedStorage<8, 96> mUnk4c739b;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioStreamEnded& operator=(OnlineAudioStreamEnded const&);
    OnlineAudioStreamEnded(OnlineAudioStreamEnded const&);
    OnlineAudioStreamEnded();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~OnlineAudioStreamEnded();
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
