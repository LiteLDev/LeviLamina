#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickingTextures {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka21d9d;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingTextures& operator=(TickingTextures const&);
    TickingTextures(TickingTextures const&);
    TickingTextures();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TickingTextures();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
