#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SignalingClientConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk899023;
    ::ll::UntypedStorage<8, 8>  mUnka457c0;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingClientConfiguration& operator=(SignalingClientConfiguration const&);
    SignalingClientConfiguration(SignalingClientConfiguration const&);
    SignalingClientConfiguration();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~SignalingClientConfiguration();
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
