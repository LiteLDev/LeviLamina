#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/input/ScriptingInputButtonState.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

struct ScriptingInputInfoComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mIsHotbarOnlyTouch;
    ::ll::TypedStorage<4, 4, ::InputMode>                 mInputMode;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButtonState> mSneakState;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButtonState> mJumpState;
    ::ll::TypedStorage<4, 8, ::Vec2>                      mMove;
    // NOLINTEND
};
