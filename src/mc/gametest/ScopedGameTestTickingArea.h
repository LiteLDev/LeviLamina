#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickingArea;
// clang-format on

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
    MCNAPI void _createTickingArea();

    MCNAPI void _removeTickingArea();

    MCNAPI bool areChunksLoaded();

    MCNAPI ::std::shared_ptr<::ITickingArea> getTickingArea() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& TICKING_AREA_PREFIX();
    // NOLINTEND
};
