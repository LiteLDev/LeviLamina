#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct GamepadState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk16ef63;
    ::ll::UntypedStorage<4, 4> mUnkd379fb;
    ::ll::UntypedStorage<8, 8> mUnkc32f34;
    ::ll::UntypedStorage<8, 8> mUnk8535bf;
    // NOLINTEND

public:
    // prevent constructor by default
    GamepadState& operator=(GamepadState const&);
    GamepadState(GamepadState const&);
    GamepadState();
};

} // namespace cohtml
