#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

struct ScreenSizeChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2 const> mSizeBefore;
    ::ll::TypedStorage<4, 8, ::Vec2 const> mSizeAfter;
    // NOLINTEND
};
