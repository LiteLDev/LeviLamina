#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

namespace OreUI {

struct TouchEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    mId;
    ::ll::TypedStorage<4, 8, ::Vec2> mPosition;
    ::ll::TypedStorage<1, 1, bool>   mIsPressed;
    ::ll::TypedStorage<1, 1, bool>   mIsPointerDown;
    // NOLINTEND
};

} // namespace OreUI
