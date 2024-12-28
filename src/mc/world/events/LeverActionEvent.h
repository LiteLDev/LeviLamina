#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LeverActionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf6f9ea;
    ::ll::UntypedStorage<4, 12> mUnk2c8012;
    ::ll::UntypedStorage<1, 1>  mUnkf31a54;
    ::ll::UntypedStorage<8, 24> mUnk811304;
    // NOLINTEND

public:
    // prevent constructor by default
    LeverActionEvent& operator=(LeverActionEvent const&);
    LeverActionEvent(LeverActionEvent const&);
    LeverActionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LeverActionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
