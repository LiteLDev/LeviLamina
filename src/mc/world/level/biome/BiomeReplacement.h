#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeReplacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk15accf;
    ::ll::UntypedStorage<8, 32> mUnk75c51c;
    ::ll::UntypedStorage<8, 24> mUnk2b932e;
    ::ll::UntypedStorage<4, 4>  mUnkd7a5b9;
    ::ll::UntypedStorage<4, 4>  mUnk75f18b;
    ::ll::UntypedStorage<4, 4>  mUnke0a0ff;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeReplacement& operator=(BiomeReplacement const&);
    BiomeReplacement(BiomeReplacement const&);
    BiomeReplacement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeReplacement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
