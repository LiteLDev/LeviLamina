#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundInstanceProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9d79c3;
    ::ll::UntypedStorage<8, 24> mUnk5f8372;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundInstanceProperties& operator=(SoundInstanceProperties const&);
    SoundInstanceProperties(SoundInstanceProperties const&);
    SoundInstanceProperties();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~SoundInstanceProperties();
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
