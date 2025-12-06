#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct RenderMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3593dc;
    ::ll::UntypedStorage<4, 8>  mUnkb946c3;
    ::ll::UntypedStorage<1, 1>  mUnkee182d;
    ::ll::UntypedStorage<8, 48> mUnk6891c9;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMetadata& operator=(RenderMetadata const&);
    RenderMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderMetadata(::dragon::RenderMetadata const&);

    MCNAPI ~RenderMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::RenderMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon
