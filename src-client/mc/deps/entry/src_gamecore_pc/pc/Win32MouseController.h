#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class Platform_GameCore; }
// clang-format on

namespace MainGameCore {

class Win32MouseController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mCursorX;
    ::ll::TypedStorage<2, 2, short> mCursorY;
    ::ll::TypedStorage<1, 1, bool>  mLeftButtonPressed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void feedMove(::Bedrock::Platform_GameCore* platform, short x, short y);
    // NOLINTEND
};

} // namespace MainGameCore
