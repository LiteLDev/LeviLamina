#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockListEventMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk425646;
    ::ll::UntypedStorage<8, 32> mUnk1bf140;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockListEventMap& operator=(BlockListEventMap const&);
    BlockListEventMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockListEventMap(::BlockListEventMap const&);

    MCAPI ~BlockListEventMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockListEventMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
