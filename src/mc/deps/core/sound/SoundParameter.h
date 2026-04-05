#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundParameter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc5ced2;
    ::ll::UntypedStorage<4, 4>  mUnk369b3a;
    ::ll::UntypedStorage<4, 4>  mUnka8404e;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundParameter& operator=(SoundParameter const&);
    SoundParameter(SoundParameter const&);
    SoundParameter();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~SoundParameter();
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
