#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MouseAction;
// clang-format on

class MouseDevice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           _index;
    ::ll::TypedStorage<2, 2, short>                         _x;
    ::ll::TypedStorage<2, 2, short>                         _y;
    ::ll::TypedStorage<2, 2, short>                         _dx;
    ::ll::TypedStorage<2, 2, short>                         _dy;
    ::ll::TypedStorage<2, 2, short>                         _xOld;
    ::ll::TypedStorage<2, 2, short>                         _yOld;
    ::ll::TypedStorage<1, 5, char[5]>                       _buttonStates;
    ::ll::TypedStorage<8, 24, ::std::vector<::MouseAction>> _inputs;
    ::ll::TypedStorage<4, 4, int>                           _firstMovementType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MouseDevice();

    MCAPI void
    feed(char actionButtonId, schar buttonData, short x, short y, short dx, short dy, bool forceMotionlessPointer);

    MCAPI ~MouseDevice();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
