#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AudioContentRegistration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk216a47;
    ::ll::UntypedStorage<8, 32> mUnk32a63e;
    ::ll::UntypedStorage<8, 32> mUnk869a6c;
    ::ll::UntypedStorage<8, 32> mUnkde676c;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioContentRegistration& operator=(AudioContentRegistration const&);
    AudioContentRegistration(AudioContentRegistration const&);
    AudioContentRegistration();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~AudioContentRegistration();
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
