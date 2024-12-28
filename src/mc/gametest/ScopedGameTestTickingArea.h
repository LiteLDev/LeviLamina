#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedGameTestTickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk327de1;
    ::ll::UntypedStorage<8, 8>  mUnk5eb88c;
    ::ll::UntypedStorage<4, 24> mUnkc921a0;
    ::ll::UntypedStorage<8, 32> mUnkc0ba01;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedGameTestTickingArea& operator=(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _createTickingArea();

    MCAPI void _removeTickingArea();

    MCAPI bool areChunksLoaded();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& TICKING_AREA_PREFIX();
    // NOLINTEND
};
