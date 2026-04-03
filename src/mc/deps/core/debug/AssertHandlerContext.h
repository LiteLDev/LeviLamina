#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssertHandlerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk35b5cd;
    ::ll::UntypedStorage<8, 32> mUnk7ebee2;
    ::ll::UntypedStorage<8, 32> mUnkc94f1a;
    ::ll::UntypedStorage<4, 4>  mUnke17434;
    ::ll::UntypedStorage<8, 32> mUnk5527ba;
    ::ll::UntypedStorage<8, 32> mUnk5a60ec;
    // NOLINTEND

public:
    // prevent constructor by default
    AssertHandlerContext& operator=(AssertHandlerContext const&);
    AssertHandlerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AssertHandlerContext(::AssertHandlerContext const&);

    MCNAPI ~AssertHandlerContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AssertHandlerContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
