#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomBiome {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk5a7347;
    ::ll::UntypedStorage<8, 24> mUnk540898;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBiome& operator=(CustomBiome const&);
    CustomBiome(CustomBiome const&);
    CustomBiome();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CustomBiome();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::CustomBiome const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
