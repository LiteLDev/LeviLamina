#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderingRidingOffsetInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk81f77f;
    ::ll::UntypedStorage<8, 48> mUnk95c72e;
    ::ll::UntypedStorage<4, 4>  mUnkab7ce9;
    ::ll::UntypedStorage<8, 8>  mUnk6782f5;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderingRidingOffsetInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderingRidingOffsetInfo(::RenderingRidingOffsetInfo const&);

    MCNAPI ::RenderingRidingOffsetInfo& operator=(::RenderingRidingOffsetInfo const&);

    MCNAPI ~RenderingRidingOffsetInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RenderingRidingOffsetInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
