#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonPushEvent {
public:
    // prevent constructor by default
    ButtonPushEvent& operator=(ButtonPushEvent const&);
    ButtonPushEvent(ButtonPushEvent const&);
    ButtonPushEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ButtonPushEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
