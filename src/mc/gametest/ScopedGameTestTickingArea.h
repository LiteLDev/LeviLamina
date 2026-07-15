#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Dimension;
class ITickingArea;
// clang-format on

class ScopedGameTestTickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb32f30;
    ::ll::UntypedStorage<8, 8>  mUnk5eb88c;
    ::ll::UntypedStorage<4, 24> mUnkc921a0;
    ::ll::UntypedStorage<8, 32> mUnk4e4001;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedGameTestTickingArea& operator=(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea(ScopedGameTestTickingArea const&);
    ScopedGameTestTickingArea();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScopedGameTestTickingArea(::Dimension& dimension, ::BoundingBox const& bounds, ::std::string const& structureName);

    MCNAPI void _createTickingArea();

    MCNAPI void _removeTickingArea();

    MCNAPI bool areChunksLoaded();

    MCNAPI ::std::shared_ptr<::ITickingArea> getTickingArea() const;

    MCNAPI ~ScopedGameTestTickingArea();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension& dimension, ::BoundingBox const& bounds, ::std::string const& structureName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
