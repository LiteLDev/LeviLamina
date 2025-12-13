#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextureState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk25d33c;
    ::ll::UntypedStorage<1, 1>  mUnk108030;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureState& operator=(TextureState const&);
    TextureState(TextureState const&);
    TextureState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
