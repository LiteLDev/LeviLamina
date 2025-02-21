#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
struct MoveInputState;
// clang-format on

struct RawMoveInputComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::MoveInputState> mRawInput;
    ::ll::TypedStorage<4, 8, ::Vec2>            mRawMove;
    // NOLINTEND
};
