#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MainGameCore {

class Win32MouseController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mCursorX;
    ::ll::TypedStorage<2, 2, short> mCursorY;
    ::ll::TypedStorage<1, 1, bool>  mLeftButtonPressed;
    // NOLINTEND
};

} // namespace MainGameCore
