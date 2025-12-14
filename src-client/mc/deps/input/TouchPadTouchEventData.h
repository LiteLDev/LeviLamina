#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TouchPadTouchEventData {
public:
    // TouchPadTouchEventData inner types declare
    // clang-format off
    struct TouchPoint;
    struct Resolution;
    // clang-format on

    // TouchPadTouchEventData inner types define
    struct TouchPoint {};

    struct Resolution {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mTouchCount;
    ::ll::TypedStorage<4, 32, ::TouchPadTouchEventData::TouchPoint[2]> mTouchPoints;
    ::ll::TypedStorage<4, 8, ::TouchPadTouchEventData::Resolution>     mResolution;
    // NOLINTEND
};
