#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PistonActionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4318e0;
    ::ll::UntypedStorage<4, 12> mUnk2503d7;
    ::ll::UntypedStorage<1, 1>  mUnk6eba93;
    ::ll::UntypedStorage<1, 1>  mUnkbc5c00;
    // NOLINTEND

public:
    // prevent constructor by default
    PistonActionEvent& operator=(PistonActionEvent const&);
    PistonActionEvent(PistonActionEvent const&);
    PistonActionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PistonActionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
