#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenSizeChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk1817ae;
    ::ll::UntypedStorage<4, 8> mUnk7e79f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenSizeChangedEvent& operator=(ScreenSizeChangedEvent const&);
    ScreenSizeChangedEvent(ScreenSizeChangedEvent const&);
    ScreenSizeChangedEvent();
};
