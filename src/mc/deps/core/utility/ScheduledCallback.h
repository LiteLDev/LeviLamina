#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScheduledCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk95b83e;
    ::ll::UntypedStorage<8, 16> mUnk8ebb9f;
    ::ll::UntypedStorage<8, 64> mUnkc68f90;
    ::ll::UntypedStorage<1, 1>  mUnk101bc0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScheduledCallback& operator=(ScheduledCallback const&);
    ScheduledCallback(ScheduledCallback const&);
    ScheduledCallback();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ScheduledCallback const&);

    MCNAPI_C void* $ctor(int64 callTime, ::std::weak_ptr<bool> existanceTracker, ::std::function<void()> callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
