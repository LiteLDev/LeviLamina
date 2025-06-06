#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProfilerLiteTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk59d788;
    ::ll::UntypedStorage<4, 4>  mUnka94057;
    ::ll::UntypedStorage<4, 4>  mUnka18e9f;
    ::ll::UntypedStorage<4, 4>  mUnk556856;
    ::ll::UntypedStorage<4, 4>  mUnka2d2dd;
    ::ll::UntypedStorage<4, 4>  mUnk9ad6c9;
    ::ll::UntypedStorage<4, 4>  mUnk98e3a1;
    ::ll::UntypedStorage<4, 4>  mUnkcda221;
    ::ll::UntypedStorage<4, 4>  mUnk3e12c9;
    ::ll::UntypedStorage<4, 4>  mUnk251a13;
    ::ll::UntypedStorage<4, 4>  mUnkf6e934;
    ::ll::UntypedStorage<4, 4>  mUnk2d5a53;
    ::ll::UntypedStorage<8, 24> mUnke6d038;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerLiteTelemetry& operator=(ProfilerLiteTelemetry const&);
    ProfilerLiteTelemetry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfilerLiteTelemetry(::ProfilerLiteTelemetry const&);

    MCNAPI ~ProfilerLiteTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ProfilerLiteTelemetry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
