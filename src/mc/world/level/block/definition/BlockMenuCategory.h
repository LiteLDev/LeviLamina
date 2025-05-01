#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3fd471;
    ::ll::UntypedStorage<4, 4>  mUnkc4dc5a;
    ::ll::UntypedStorage<1, 1>  mUnk7acc0b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMenuCategory& operator=(BlockMenuCategory const&);
    BlockMenuCategory(BlockMenuCategory const&);
    BlockMenuCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockMenuCategory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
