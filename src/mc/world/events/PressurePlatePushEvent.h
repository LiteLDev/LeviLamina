#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePushEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc38a43;
    ::ll::UntypedStorage<4, 12> mUnkc72ae1;
    ::ll::UntypedStorage<4, 4>  mUnkfedb13;
    ::ll::UntypedStorage<4, 4>  mUnk42da20;
    ::ll::UntypedStorage<8, 24> mUnk7d1b75;
    // NOLINTEND

public:
    // prevent constructor by default
    PressurePlatePushEvent& operator=(PressurePlatePushEvent const&);
    PressurePlatePushEvent(PressurePlatePushEvent const&);
    PressurePlatePushEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PressurePlatePushEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
