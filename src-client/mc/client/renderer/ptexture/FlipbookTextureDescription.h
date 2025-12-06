#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlipbookTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk15a5a2;
    ::ll::UntypedStorage<8, 24> mUnka13f3c;
    ::ll::UntypedStorage<4, 4>  mUnk750ed3;
    ::ll::UntypedStorage<4, 4>  mUnk64ec1e;
    ::ll::UntypedStorage<1, 1>  mUnk78d83b;
    ::ll::UntypedStorage<4, 4>  mUnkfe2b9f;
    ::ll::UntypedStorage<8, 32> mUnk5d4697;
    ::ll::UntypedStorage<1, 1>  mUnkfda64a;
    ::ll::UntypedStorage<4, 8>  mUnka45eb7;
    // NOLINTEND

public:
    // prevent constructor by default
    FlipbookTextureDescription& operator=(FlipbookTextureDescription const&);
    FlipbookTextureDescription(FlipbookTextureDescription const&);
    FlipbookTextureDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FlipbookTextureDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
