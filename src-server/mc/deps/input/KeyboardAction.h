#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyboardAction {
public:
    // KeyboardAction inner types define
    enum : int {
        Keyup   = 0,
        Keydown = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk536a2d;
    ::ll::UntypedStorage<1, 1> mUnk5ee930;
    ::ll::UntypedStorage<4, 4> mUnkd0689b;
    ::ll::UntypedStorage<4, 4> mUnkf39b9f;
    ::ll::UntypedStorage<4, 4> mUnkd26964;
    ::ll::UntypedStorage<4, 4> mUnk436c1a;
    ::ll::UntypedStorage<1, 1> mUnkd63483;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardAction& operator=(KeyboardAction const&);
    KeyboardAction(KeyboardAction const&);
    KeyboardAction();
};
