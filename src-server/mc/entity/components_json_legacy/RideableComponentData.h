#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RideableComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk872852;
    ::ll::UntypedStorage<4, 4>  mUnk9abb2b;
    ::ll::UntypedStorage<1, 1>  mUnk56e2d1;
    ::ll::UntypedStorage<8, 24> mUnkc053c6;
    ::ll::UntypedStorage<8, 16> mUnkd0baf3;
    ::ll::UntypedStorage<8, 32> mUnkb31300;
    ::ll::UntypedStorage<1, 1>  mUnkc7ffd7;
    ::ll::UntypedStorage<1, 1>  mUnk87d44f;
    ::ll::UntypedStorage<4, 4>  mUnkc10431;
    ::ll::UntypedStorage<1, 1>  mUnkfdb669;
    ::ll::UntypedStorage<8, 32> mUnkdde8a5;
    ::ll::UntypedStorage<8, 32> mUnk72d236;
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponentData& operator=(RideableComponentData const&);
    RideableComponentData(RideableComponentData const&);
    RideableComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RideableComponentData(::RideableComponentData&&);

    MCNAPI ::RideableComponentData& operator=(::RideableComponentData&&);

    MCNAPI ~RideableComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RideableComponentData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
