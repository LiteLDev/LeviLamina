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
    RenderingRidingOffsetInfo& operator=(RenderingRidingOffsetInfo const&);
    RenderingRidingOffsetInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderingRidingOffsetInfo(::RenderingRidingOffsetInfo const&);

    MCAPI RenderingRidingOffsetInfo(::std::string const& baseLocator, ::std::string const& seatLocator);

    MCAPI ~RenderingRidingOffsetInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RenderingRidingOffsetInfo const&);

    MCAPI void* $ctor(::std::string const& baseLocator, ::std::string const& seatLocator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
