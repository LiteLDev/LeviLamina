#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MessageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3ec9e7;
    ::ll::UntypedStorage<8, 32> mUnk2c3243;
    ::ll::UntypedStorage<8, 24> mUnk1544ae;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageEvent& operator=(MessageEvent const&);
    MessageEvent(MessageEvent const&);
    MessageEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
