#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderControlMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb9a8cf;
    ::ll::UntypedStorage<4, 20> mUnk819cd8;
    ::ll::UntypedStorage<4, 8>  mUnk2a3e8a;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControlMetadata& operator=(RenderControlMetadata const&);
    RenderControlMetadata(RenderControlMetadata const&);
    RenderControlMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderControlMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
