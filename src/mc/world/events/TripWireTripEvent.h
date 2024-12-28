#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TripWireTripEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfe0e2f;
    ::ll::UntypedStorage<4, 12> mUnk27310a;
    ::ll::UntypedStorage<1, 1>  mUnk280aa3;
    ::ll::UntypedStorage<8, 24> mUnk89a5c8;
    // NOLINTEND

public:
    // prevent constructor by default
    TripWireTripEvent& operator=(TripWireTripEvent const&);
    TripWireTripEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TripWireTripEvent(::TripWireTripEvent const&);

    MCAPI ~TripWireTripEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TripWireTripEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
