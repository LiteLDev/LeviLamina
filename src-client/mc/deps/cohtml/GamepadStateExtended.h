#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/GamepadState.h"

namespace cohtml {

struct GamepadStateExtended : public ::cohtml::GamepadState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk747b70;
    ::ll::UntypedStorage<4, 80> mUnkf797e1;
    // NOLINTEND

public:
    // prevent constructor by default
    GamepadStateExtended& operator=(GamepadStateExtended const&);
    GamepadStateExtended(GamepadStateExtended const&);
    GamepadStateExtended();
};

} // namespace cohtml
