#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MouseAction {
public:
    // MouseAction inner types define
    enum : schar {
        ActionMove = 0,
        ActionLeft = 1,
        ActionRight = 2,
        ActionMiddle = 3,
        ActionWheel = 4,
        ActionX1 = 5,
        ActionX2 = 6,
        ActionMoveRelative = 7,
        DataUp = 0,
        DataDown = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk8569e1;
    ::ll::UntypedStorage<2, 2> mUnk441867;
    ::ll::UntypedStorage<2, 2> mUnkf4e196;
    ::ll::UntypedStorage<2, 2> mUnk75b318;
    ::ll::UntypedStorage<1, 1> mUnkc283d0;
    ::ll::UntypedStorage<1, 1> mUnk4a5e6d;
    ::ll::UntypedStorage<4, 4> mUnkf3e98f;
    ::ll::UntypedStorage<1, 1> mUnk6c972e;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseAction& operator=(MouseAction const&);
    MouseAction(MouseAction const&);
    MouseAction();

};
