#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomBiome {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk5a7347;
    ::ll::UntypedStorage<8, 24> mUnk540898;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CustomBiome& operator=(CustomBiome const&);
    CustomBiome();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CustomBiome& operator=(CustomBiome const&);
    CustomBiome(CustomBiome const&);
    CustomBiome();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI CustomBiome(::CustomBiome const&);
#endif

    MCNAPI ~CustomBiome();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::CustomBiome const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
