#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssertHandlerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfb8de1;
    ::ll::UntypedStorage<8, 32> mUnk37d6f2;
    ::ll::UntypedStorage<8, 32> mUnkad5114;
    ::ll::UntypedStorage<4, 4>  mUnke17434;
    ::ll::UntypedStorage<8, 32> mUnk3ef1c7;
    ::ll::UntypedStorage<8, 32> mUnkc53f70;
    // NOLINTEND

public:
    // prevent constructor by default
    AssertHandlerContext& operator=(AssertHandlerContext const&);
    AssertHandlerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AssertHandlerContext(::AssertHandlerContext const&);

    MCAPI ~AssertHandlerContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AssertHandlerContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
