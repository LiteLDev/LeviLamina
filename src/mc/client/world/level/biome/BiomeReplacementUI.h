#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeReplacementUI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke6dd1a;
    ::ll::UntypedStorage<4, 4>  mUnkb8d73a;
    ::ll::UntypedStorage<4, 4>  mUnk7cf613;
    ::ll::UntypedStorage<8, 8>  mUnkc4e111;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeReplacementUI& operator=(BiomeReplacementUI const&);
    BiomeReplacementUI(BiomeReplacementUI const&);
    BiomeReplacementUI();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeReplacementUI();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
