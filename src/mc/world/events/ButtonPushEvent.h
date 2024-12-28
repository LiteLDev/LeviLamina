#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonPushEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke5d69a;
    ::ll::UntypedStorage<4, 12> mUnk44faed;
    ::ll::UntypedStorage<8, 24> mUnkd7614c;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonPushEvent& operator=(ButtonPushEvent const&);
    ButtonPushEvent(ButtonPushEvent const&);
    ButtonPushEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ButtonPushEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
