#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf66a61;
    ::ll::UntypedStorage<8, 40> mUnk963480;
    ::ll::UntypedStorage<1, 1>  mUnk2dea60;
    ::ll::UntypedStorage<1, 1>  mUnkca975f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenEvent& operator=(ScreenEvent const&);
    ScreenEvent(ScreenEvent const&);
    ScreenEvent();
};
